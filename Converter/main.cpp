#include <QtCore/QCoreApplication>
#include <QtXML>
#include <QFile>
#include <QDir>
#include <QSet>
#include <QList>
#include <QTimer>
#include <QMap>
#include <QDataStream>
#include <QByteArray>
#include <QBuffer>
#include <QTranslator>
#include <QQueue>
#include <QProcess>
#include <QSvgWidget>
#include <QUrl>
#include <qtextstream.h>
#include <conio.h>
//opendbname - old db
void upgrade(const QString & openDBName, bool useCP1250, const QString &saveDBName);
//savename - old db
void downgrade(const QString & openDBName, bool useCP1250, const QString &saveDBName);

int main(int argc, char *argv[])
{

    if(argv[1][1]=='u'){
    printf("Upgrading\n");
    upgrade(argv[2],argc==4, argv[3]);}else
    if(argv[1][1]=='d'){
printf("Downgrading\n");
downgrade(argv[2],argc==4, argv[3]);}else{
printf("\tThis program converts iTest database files and should be run in one of these ways:\n\n\tconverter -u oldformatfilename newformatfilename [-oc]\n\t\tUpgrading file format to xml(-oc flag is for cp1250 using)\n\tconverter -u newformatfilename oldformatfilename[-oc]\n\t\tDowngrading file format to old \\n-style format(-oc flag is for cp1250 using)\n\n\tNote! Files' names should not be equal!");
}
getch();
}

QString esc(QString toesc){
    return toesc.replace(">","&gt;").replace("<","&lt;");
}

void upgrade(const QString & openDBName, bool useCP1250, const QString &saveDBName)
{
    QFile file1(saveDBName);
    if (!file1.open(QFile::WriteOnly | QFile::Text)) {
return;
    }
    QTextStream sfile(&file1);
    sfile <<"<?xml version=\"1.0\" encoding=\"";

    if (openDBName.isNull())return;

        QFile file2(openDBName);
    if (!file2.open(QFile::ReadOnly | QFile::Text))
    {
return;
    }
     // PROGRESS >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    QTextStream rfile(&file2);
        if (useCP1250) {         sfile.setCodec("CP 1250");sfile << "CP1250\"?>\n";
rfile.setCodec("CP 1250"); }
        else {         sfile.setCodec("UTF-8");
rfile.setCodec("UTF-8");sfile << "UTF-8\"?>\n"; }
sfile << "<database ";
    QString db_buffer; QStringList bufferlist;
    // ---------------------------------------------------------------------
        if (rfile.readLine() != "[ITEST_VERSION]")return;
      sfile << "itest_version=\"" << rfile.readLine() << "\" ";
if (rfile.readLine() != "[ITEST_DB_VERSION]")return;
QString tmp="";
tmp=rfile.readLine();
double db_version=tmp.toDouble();
sfile << "database_version=\"" << tmp << "\" ";

        if (!useCP1250) {
                if ( db_version == 1.0) { upgrade(openDBName, true, saveDBName);return; }
        }

    if (rfile.readLine() != "[DB_NAME]")return;
    // Database name
    sfile << "name=\"" << esc(rfile.readLine()) << "\" ";

    if (rfile.readLine() != "[DB_DATE]")return;
    // Database date
    sfile << "created=\"" << esc(rfile.readLine()) << "\">\n";
        if (rfile.readLine() != "[DB_DATE_ULSD]")return;
        // Use last save date
        (rfile.readLine() == "true");
if (rfile.readLine() != "[DB_COMMENTS]")return;
// Database comments
sfile << "\t<comment>" << esc(rfile.readLine()) << "</comment>\n";

if (rfile.readLine() != "[DB_QNUM]")return;
// Question number
int db_qnum = rfile.readLine().toInt();
if (rfile.readLine() != "[DB_SNUM]")return;
// Number of saved sessions
rfile.readLine().toInt();
int db_cnum = 0;
if (db_version >= 1.35) {
    if (rfile.readLine() != "[DB_CNUM]")return;
    // Number of classes
    db_cnum = rfile.readLine().toInt();
}

if (rfile.readLine() != "[DB_FLAGS]")return;
 // PROGRESS >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Flags enabled
db_buffer = rfile.readLine();
sfile << "\t<flags>\n";

QVector<bool> db_fe(db_buffer.length());
for (int i = 0; i < db_fe.size(); ++i) {
                if (db_buffer.at(i) == '+') { db_fe[i] = true;} else if (db_buffer.at(i) == '-')
                { db_fe[i] = false; } else return;
};
// Flags
QVector<QString> db_f(db_buffer.length());
for (int i = 0; i < db_f.size(); ++i) {
                if (rfile.readLine() != QString("[DB_F%1]").arg(i))return;
                db_f[i] = rfile.readLine();
sfile <<"\t\t<flag number=\""<<i<<"\">"<<esc(db_f[i])<<"</flag>\n";
}
sfile << "\t</flags>\n";
// End of flags
if (rfile.readLine() != "[DB_FLAGS_END]")return;
// PROGRESS >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Questions
 QStringList answers; sfile << "\t<questions count=\""<<db_qnum<<"\">\n";
for (int i = 0; i < db_qnum; ++i) {
                answers.clear();
                // Question name
                if (rfile.readLine() != "[Q_NAME]")return;
                sfile << "\t\t<question name=\"" << esc(rfile.readLine()) <<"\" ";
                // Flag
                if (rfile.readLine() != "[Q_FLAG]")return;
                sfile << "flag=\"" << esc(rfile.readLine()) <<"\" ";
                if (db_version >= 1.2) {
                        // Question group
                        if (rfile.readLine() != "[Q_GRP]")return;
                        sfile << "group=\"" << esc(rfile.readLine()) <<"\" ";
                }
                // Difficulty
                if (db_version >= 1.2) { if (rfile.readLine() != "[Q_DIF]")return; }
                else { if (rfile.readLine() != "[Q_DIFFICULTY]")return; }
                sfile << "difficulty=\"" << esc(rfile.readLine()) <<"\">\n";
                // Question text
                if (rfile.readLine() != "[Q_TEXT]")return;
                sfile << "\t\t\t<text>" << esc(rfile.readLine()) <<"</text>\n";
sfile << "\t<answers";
    if (db_version >= 1.35) {
        // Answers
        if (rfile.readLine() != "[Q_ANS]")return;
        sfile << " selectiontype=\"" << esc(rfile.readLine()) <<"\" ";
        sfile << " correctanswers=\"" << esc(rfile.readLine()) <<"\">\n";
        int numanswers = rfile.readLine().toInt();
                        for (int a = 0; a < numanswers; ++a) { tmp=rfile.readLine();answers << tmp;sfile <<"\t\t\t<answer>" << esc(tmp) << "</answer>\n"; }
        // Explanation
        if (rfile.readLine() != "[Q_EXPL]")return;
        sfile<< "\t\t<explain>"<<esc(rfile.readLine())<<"</explain>\n";
    } else {
        // Answer A
        if (rfile.readLine() != "[Q_ANSA]")return;
        tmp=rfile.readLine();
        answers << tmp;
        if (db_version < 1.2) { if (rfile.readLine() != "[Q_ANSA_C]")return; }
        sfile << "\t\t<answer correct=\""<< (rfile.readLine()=="true"?"true":"false") <<"\">"<< esc(tmp) <<"</answer>\n";
        // Answer B
        if (rfile.readLine() != "[Q_ANSB]")return;
        tmp=rfile.readLine();
        answers << tmp;
        if (db_version < 1.2) { if (rfile.readLine() != "[Q_ANSB_C]")return; }
        sfile << "\t\t<answer correct=\""<< (rfile.readLine()=="true"?"true":"false") <<"\">"<< esc(tmp) <<"</answer>\n";
        // Answer C
        if (rfile.readLine() != "[Q_ANSC]")return;
        tmp=rfile.readLine();
        answers << tmp;
        if (db_version < 1.2) { if (rfile.readLine() != "[Q_ANSC_C]")return; }
        sfile << "\t\t<answer correct=\""<< (rfile.readLine()=="true"?"true":"false") <<"\">"<< esc(tmp) <<"</answer>\n";
        // Answer D
        if (rfile.readLine() != "[Q_ANSD]")return;
        tmp=rfile.readLine();
        answers << tmp;
        if (db_version < 1.2) { if (rfile.readLine() != "[Q_ANSD_C]")return; }
        sfile << "\t\t<answer correct=\""<< (rfile.readLine()=="true"?"true":"false") <<"\">"<< esc(tmp) <<"</answer>\n";
    }
    sfile << "\t</answers>\n";
                // Statistics
                if (db_version < 1.2) { if (rfile.readLine() != "[Q_ICNT]")return; }
                else { if (rfile.readLine() != "[Q_ICCNT]")return; }
                sfile << "<ads icnt=\""<< rfile.readLine()<<"\" ";
                if (db_version < 1.2) { if (rfile.readLine() != "[Q_CCNT]")return; }
               sfile << "ccnt=\""<< rfile.readLine()<<"\" ";
                // Hidden
                if (db_version >= 1.2) {
                        if (rfile.readLine() != "[Q_HID]")return;
                        sfile << "hidden=\""<< rfile.readLine()<<"\"/>";
                    }else sfile <<"/>";
                if (db_version > 1.25) {
                        // SVG
                        if (rfile.readLine() != "[Q_SVG]")return;
                        sfile <<"\t<images>\n";
                        int numsvgitems = rfile.readLine().toInt();
                        for (int g = 0; g < numsvgitems; ++g) {
                            db_buffer = rfile.readLine();
                            sfile<< "\t\t<image caption=\""<<esc(db_buffer)<< "\">" << esc(rfile.readLine()) << "</image>\n";
                        }
                        sfile <<"\t</images>\n\t\t</question>\n";
                }
                // End
                if (db_version < 1.25) {
                    if (rfile.readLine() != "[Q_END]")return;
                }
    }
sfile<<"\t</questions>\n</database>";
printf("Done\n");
}


#include <iostream>
using namespace std;

void downgrade(const QString & openDBName, bool useCP1250, const QString &saveDBName)
{
    QDomDocument doc("db");
     QFile ifile(openDBName);
     if (!ifile.open(QIODevice::ReadOnly))
         return;
     if (!doc.setContent(&ifile)) {
         ifile.close();
         return;
     }
     ifile.close();

     // печатает имена всех непосредственных потомков
     // внешнего элемента.
     QDomElement d = doc.documentElement();
    QFile f(saveDBName);
    if (!f.open(QFile::WriteOnly | QFile::Text))return;
    QTextStream file(&f);
    if(useCP1250)file.setCodec("CP 1250");else file.setCodec("UTF-8");
double db_version=d.attribute("database_version", "1.4").toDouble();
    file << "[ITEST_VERSION]\n";// << d.attribute("itest_version", "1.42") << "\n";
    file << "[ITEST_DB_VERSION]\n" << d.attribute("database_version", "1.4") << "\n";
    file << "[DB_NAME]\n" << d.attribute("name", "Untitled") << "\n";
    file << "[DB_DATA_ULSD]\nfalse\n";
    file << "[DB_COMMENTS]\n" << d.firstChildElement("comment").text() << "\n";
    file << "[DB_QNUM]\n" << d.firstChildElement("questions").elementsByTagName("question").count() << "\n";
    QString tmp(""), tmp2("");
    for(int i=0;i<d.firstChildElement("flags").elementsByTagName("flag").count();i++){
     QString x=d.firstChildElement("flags").elementsByTagName("flag").at(i).toElement().text();
     if(x.isEmpty()){
        tmp+="-";
        tmp2+=QString("[DB_F%1]\n\n").arg(i);
     }else{
         tmp+="+";
         tmp2+=QString("[DB_F%1]\n%2\n").arg(i).arg(x);
     }
    }
    file << "[DB_SNUM]\n0\n";
if(db_version>=1.35)file << "[DB_CNUM]\n0\n";
    file << "[DB_FLAGS]\n" << tmp << "\n" <<tmp2;
    file << "[DB_FLAGS_END]\n";

    for(int i=0;i<d.firstChildElement("questions").elementsByTagName("question").count();i++){
        QDomNode n=d.firstChildElement("questions").elementsByTagName("question").at(i);
        file << "[Q_NAME]\n" << n.toElement().attribute("name", "unnamed question") << "\n[Q_FLAG]\n" << n.toElement().attribute("flag", "0") <<"\n";
        if(db_version>=1.2)file << "[Q_GRP]\n" << n.toElement().attribute("group","") <<"\n";
        file << (db_version>=1.2?"[Q_DIF]":"[Q_DIFFICULTY]") << "\n" << n.toElement().attribute("difficulty","0") << "\n";
        file << "[Q_TEXT]\n" << n.firstChildElement("text").text() <<"\n";

        if(db_version>=1.35){

            int m=n.firstChildElement("answers").elementsByTagName("answer").count();
            file << "[Q_ANS]\n" << n.firstChildElement("answers").attribute("selectiontype", "0") << "\n" << n.firstChildElement("answers").attribute("correctanswers","1")<<"\n"<<m+1<<"\n";
            for(int i=0;i<m;i++)file<< n.firstChildElement("answers").elementsByTagName("answer").at(i).toElement().text() <<"\n";
            file <<"[Q_EXPL]\n"<<n.firstChildElement("answers").firstChildElement("explain").text()<<"\n";
        }else{
            char x='A';
            int m=n.firstChildElement("answers").elementsByTagName("answer").count();
            if(m!=4)return;
            for(int i=0;i<m;i++){

                file << "[Q_ANS"<< x <<"]\n" << n.firstChildElement("answers").elementsByTagName("answer").at(i).toElement().text() <<"\n";
                if(db_version<1.2)file << "[Q_ANS"<< x <<"_C]\n";
                file <<n.firstChildElement("answers").elementsByTagName("answer").at(i).toElement().attribute("correct")<<"\n";
                x+=1;
            }
        }

        file << (db_version<1.2?"[Q_ICNT]":"[Q_ICCNT]")<<"\n"<< n.firstChildElement("ads").attribute("icnt") <<"\n"<<(db_version<1.2?"[Q_CCNT]\n":"")<< n.firstChildElement("ads").attribute("ccnt") <<"\n";
    if(db_version>=1.2)file <<"[Q_HID]\n"<< n.firstChildElement("ads").attribute("hidden") <<"\n";
    if(db_version>=1.25){
        file<< "[Q_SVG]\n"<<n.firstChildElement("images").elementsByTagName("image").count()<<"\n";
        for(int i=0;i<n.firstChildElement("images").elementsByTagName("image").count();i++)file<<n.firstChildElement("images").elementsByTagName("image").at(i).toElement().attribute("caption", "unnamed image") <<"\n"<< n.firstChildElement("images").elementsByTagName("image").at(i).toElement().text() <<"\n";
    }
    if(db_version<1.25)file << "[Q_END]";
    }

    f.close();
    printf("Done\n");
}

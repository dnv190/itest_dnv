/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created: Tue 5. Apr 17:34:04 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "answersview.h"
#include "mtmultisvgwidget.h"
#include "mtsplitter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *mainStackedWidget;
    QWidget *mainPage;
    QVBoxLayout *vboxLayout;
    QRadioButton *rbtnNetwork;
    QHBoxLayout *hboxLayout;
    QLabel *label_server_name;
    QLineEdit *serverNameLineEdit;
    QSpacerItem *spacerItem;
    QLabel *label_server_port;
    QLineEdit *serverPortLineEdit;
    QToolButton *tbtnConnect;
    QRadioButton *rbtnFromFile;
    QLabel *label_db_path;
    QHBoxLayout *hboxLayout1;
    QLineEdit *DBPathLineEdit;
    QToolButton *tbtnBrowse_DBPath;
    QToolButton *tbtnLoad;
    QFrame *line_2;
    QLabel *label_itcl_path;
    QLabel *label_itcl_path_note;
    QCheckBox *useDefaultOutputCheckBox;
    QHBoxLayout *hboxLayout2;
    QLineEdit *savePathLineEdit;
    QToolButton *tbtnBrowse_savePath;
    QFrame *line;
    QLabel *label_other_settings;
    QCheckBox *hideQuestionNamesCheckBox;
    QCheckBox *hideCorrectAnswersCheckBox;
    QFrame *line_4;
    QLabel *label_test_info;
    QTableWidget *infoTableWidget;
    QFrame *line_3;
    QHBoxLayout *hboxLayout3;
    QToolButton *tbtnQuit;
    QToolButton *tbtnAbout;
    QSpacerItem *spacerItem1;
    QToolButton *tbtnGetReady;
    QWidget *startPage;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QFrame *welcomeFrame;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem6;
    QLabel *label_welcome;
    QSpacerItem *spacerItem7;
    QSpacerItem *spacerItem8;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem9;
    QLabel *label_your_name;
    QSpacerItem *spacerItem10;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacerItem11;
    QLineEdit *nameLineEdit;
    QSpacerItem *spacerItem12;
    QLabel *label_ready_note;
    QSpacerItem *spacerItem13;
    QHBoxLayout *hboxLayout7;
    QSpacerItem *spacerItem14;
    QToolButton *tbtnStart;
    QSpacerItem *spacerItem15;
    QSpacerItem *spacerItem16;
    QSpacerItem *spacerItem17;
    QSpacerItem *spacerItem18;
    QSpacerItem *spacerItem19;
    QWidget *testPage;
    QHBoxLayout *hboxLayout8;
    MTSplitter *testPageSplitter;
    QWidget *layoutWidget_1;
    QVBoxLayout *vboxLayout2;
    QListWidget *LQListWidget;
    QProgressBar *progressBar;
    QWidget *layoutWidget_2;
    QVBoxLayout *vboxLayout3;
    MTSplitter *questionTextSvgSplitter;
    QTextBrowser *questionTextBrowser;
    MTMultiSvgWidget *svgDisplayWidget;
    AnswersView *answersView;
    QHBoxLayout *hboxLayout9;
    QCheckBox *showRemainingTimeCheckBox;
    QLCDNumber *remainingTimeLcdNumber;
    QLabel *label_minutes;
    QProgressBar *remainingTimeProgressBar;
    QSpacerItem *spacerItem20;
    QPushButton *btnLast;
    QPushButton *btnNext;
    QPushButton *btnFinish;
    QWidget *resultsPage;
    QGridLayout *gridLayout2;
    QLabel *label_results_name;
    QLabel *nameLabel;
    QLabel *label_results_score;
    QLabel *scoreLabel;
    QLabel *label_results;
    QTableWidget *resultsTableWidget;
    QHBoxLayout *hboxLayout10;
    QPushButton *btnNewTest;
    QSpacerItem *spacerItem21;
    QPushButton *btnQuit;
    QSpacerItem *spacerItem22;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(809, 613);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/images/itestwri.png"));
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainStackedWidget = new QStackedWidget(centralwidget);
        mainStackedWidget->setObjectName(QString::fromUtf8("mainStackedWidget"));
        mainPage = new QWidget();
        mainPage->setObjectName(QString::fromUtf8("mainPage"));
        vboxLayout = new QVBoxLayout(mainPage);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        rbtnNetwork = new QRadioButton(mainPage);
        rbtnNetwork->setObjectName(QString::fromUtf8("rbtnNetwork"));
        rbtnNetwork->setChecked(true);

        vboxLayout->addWidget(rbtnNetwork);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_server_name = new QLabel(mainPage);
        label_server_name->setObjectName(QString::fromUtf8("label_server_name"));

        hboxLayout->addWidget(label_server_name);

        serverNameLineEdit = new QLineEdit(mainPage);
        serverNameLineEdit->setObjectName(QString::fromUtf8("serverNameLineEdit"));
        serverNameLineEdit->setMinimumSize(QSize(0, 22));
        serverNameLineEdit->setMaximumSize(QSize(16777215, 22));

        hboxLayout->addWidget(serverNameLineEdit);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label_server_port = new QLabel(mainPage);
        label_server_port->setObjectName(QString::fromUtf8("label_server_port"));

        hboxLayout->addWidget(label_server_port);

        serverPortLineEdit = new QLineEdit(mainPage);
        serverPortLineEdit->setObjectName(QString::fromUtf8("serverPortLineEdit"));
        serverPortLineEdit->setMinimumSize(QSize(0, 22));
        serverPortLineEdit->setMaximumSize(QSize(16777215, 22));

        hboxLayout->addWidget(serverPortLineEdit);

        tbtnConnect = new QToolButton(mainPage);
        tbtnConnect->setObjectName(QString::fromUtf8("tbtnConnect"));
        tbtnConnect->setEnabled(false);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/images/connect.png"));
        tbtnConnect->setIcon(icon1);
        tbtnConnect->setIconSize(QSize(22, 22));
        tbtnConnect->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(tbtnConnect);


        vboxLayout->addLayout(hboxLayout);

        rbtnFromFile = new QRadioButton(mainPage);
        rbtnFromFile->setObjectName(QString::fromUtf8("rbtnFromFile"));

        vboxLayout->addWidget(rbtnFromFile);

        label_db_path = new QLabel(mainPage);
        label_db_path->setObjectName(QString::fromUtf8("label_db_path"));

        vboxLayout->addWidget(label_db_path);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        DBPathLineEdit = new QLineEdit(mainPage);
        DBPathLineEdit->setObjectName(QString::fromUtf8("DBPathLineEdit"));
        DBPathLineEdit->setEnabled(false);
        DBPathLineEdit->setMinimumSize(QSize(0, 22));
        DBPathLineEdit->setMaximumSize(QSize(16777215, 22));

        hboxLayout1->addWidget(DBPathLineEdit);

        tbtnBrowse_DBPath = new QToolButton(mainPage);
        tbtnBrowse_DBPath->setObjectName(QString::fromUtf8("tbtnBrowse_DBPath"));
        tbtnBrowse_DBPath->setEnabled(false);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/images/folder_red.png"));
        tbtnBrowse_DBPath->setIcon(icon2);
        tbtnBrowse_DBPath->setIconSize(QSize(22, 22));
        tbtnBrowse_DBPath->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout1->addWidget(tbtnBrowse_DBPath);

        tbtnLoad = new QToolButton(mainPage);
        tbtnLoad->setObjectName(QString::fromUtf8("tbtnLoad"));
        tbtnLoad->setEnabled(false);
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/images/reload.png"));
        tbtnLoad->setIcon(icon3);
        tbtnLoad->setIconSize(QSize(22, 22));
        tbtnLoad->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout1->addWidget(tbtnLoad);


        vboxLayout->addLayout(hboxLayout1);

        line_2 = new QFrame(mainPage);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_2);

        label_itcl_path = new QLabel(mainPage);
        label_itcl_path->setObjectName(QString::fromUtf8("label_itcl_path"));

        vboxLayout->addWidget(label_itcl_path);

        label_itcl_path_note = new QLabel(mainPage);
        label_itcl_path_note->setObjectName(QString::fromUtf8("label_itcl_path_note"));
        label_itcl_path_note->setWordWrap(true);

        vboxLayout->addWidget(label_itcl_path_note);

        useDefaultOutputCheckBox = new QCheckBox(mainPage);
        useDefaultOutputCheckBox->setObjectName(QString::fromUtf8("useDefaultOutputCheckBox"));
        useDefaultOutputCheckBox->setChecked(true);

        vboxLayout->addWidget(useDefaultOutputCheckBox);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        savePathLineEdit = new QLineEdit(mainPage);
        savePathLineEdit->setObjectName(QString::fromUtf8("savePathLineEdit"));
        savePathLineEdit->setEnabled(false);
        savePathLineEdit->setMinimumSize(QSize(0, 22));
        savePathLineEdit->setMaximumSize(QSize(16777215, 22));

        hboxLayout2->addWidget(savePathLineEdit);

        tbtnBrowse_savePath = new QToolButton(mainPage);
        tbtnBrowse_savePath->setObjectName(QString::fromUtf8("tbtnBrowse_savePath"));
        tbtnBrowse_savePath->setEnabled(false);
        tbtnBrowse_savePath->setIcon(icon2);
        tbtnBrowse_savePath->setIconSize(QSize(22, 22));
        tbtnBrowse_savePath->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout2->addWidget(tbtnBrowse_savePath);


        vboxLayout->addLayout(hboxLayout2);

        line = new QFrame(mainPage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        label_other_settings = new QLabel(mainPage);
        label_other_settings->setObjectName(QString::fromUtf8("label_other_settings"));

        vboxLayout->addWidget(label_other_settings);

        hideQuestionNamesCheckBox = new QCheckBox(mainPage);
        hideQuestionNamesCheckBox->setObjectName(QString::fromUtf8("hideQuestionNamesCheckBox"));

        vboxLayout->addWidget(hideQuestionNamesCheckBox);

        hideCorrectAnswersCheckBox = new QCheckBox(mainPage);
        hideCorrectAnswersCheckBox->setObjectName(QString::fromUtf8("hideCorrectAnswersCheckBox"));

        vboxLayout->addWidget(hideCorrectAnswersCheckBox);

        line_4 = new QFrame(mainPage);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_4);

        label_test_info = new QLabel(mainPage);
        label_test_info->setObjectName(QString::fromUtf8("label_test_info"));

        vboxLayout->addWidget(label_test_info);

        infoTableWidget = new QTableWidget(mainPage);
        if (infoTableWidget->columnCount() < 1)
            infoTableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        infoTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (infoTableWidget->rowCount() < 9)
            infoTableWidget->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        infoTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        infoTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        infoTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        infoTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        infoTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        infoTableWidget->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        infoTableWidget->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        infoTableWidget->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        infoTableWidget->setVerticalHeaderItem(8, __qtablewidgetitem9);
        infoTableWidget->setObjectName(QString::fromUtf8("infoTableWidget"));
        infoTableWidget->setEnabled(false);

        vboxLayout->addWidget(infoTableWidget);

        line_3 = new QFrame(mainPage);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_3);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        tbtnQuit = new QToolButton(mainPage);
        tbtnQuit->setObjectName(QString::fromUtf8("tbtnQuit"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/images/quit.png"));
        tbtnQuit->setIcon(icon4);
        tbtnQuit->setIconSize(QSize(22, 22));
        tbtnQuit->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout3->addWidget(tbtnQuit);

        tbtnAbout = new QToolButton(mainPage);
        tbtnAbout->setObjectName(QString::fromUtf8("tbtnAbout"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/images/contents.png"));
        tbtnAbout->setIcon(icon5);
        tbtnAbout->setIconSize(QSize(22, 22));
        tbtnAbout->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout3->addWidget(tbtnAbout);

        spacerItem1 = new QSpacerItem(701, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);

        tbtnGetReady = new QToolButton(mainPage);
        tbtnGetReady->setObjectName(QString::fromUtf8("tbtnGetReady"));
        tbtnGetReady->setEnabled(false);
        const QIcon icon6 = QIcon(QString::fromUtf8(":/images/images/button_ok.png"));
        tbtnGetReady->setIcon(icon6);
        tbtnGetReady->setIconSize(QSize(22, 22));
        tbtnGetReady->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout3->addWidget(tbtnGetReady);


        vboxLayout->addLayout(hboxLayout3);

        mainStackedWidget->addWidget(mainPage);
        startPage = new QWidget();
        startPage->setObjectName(QString::fromUtf8("startPage"));
        gridLayout1 = new QGridLayout(startPage);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 0, 0, 1, 1);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem3, 0, 1, 1, 1);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem4, 0, 2, 1, 1);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem5, 1, 0, 1, 1);

        welcomeFrame = new QFrame(startPage);
        welcomeFrame->setObjectName(QString::fromUtf8("welcomeFrame"));
        welcomeFrame->setFrameShape(QFrame::StyledPanel);
        welcomeFrame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(welcomeFrame);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem6);

        label_welcome = new QLabel(welcomeFrame);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        QFont font;
        font.setPointSize(20);
        label_welcome->setFont(font);

        hboxLayout4->addWidget(label_welcome);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem7);


        vboxLayout1->addLayout(hboxLayout4);

        spacerItem8 = new QSpacerItem(481, 16, QSizePolicy::Minimum, QSizePolicy::Preferred);

        vboxLayout1->addItem(spacerItem8);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem9);

        label_your_name = new QLabel(welcomeFrame);
        label_your_name->setObjectName(QString::fromUtf8("label_your_name"));

        hboxLayout5->addWidget(label_your_name);

        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem10);


        vboxLayout1->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        spacerItem11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem11);

        nameLineEdit = new QLineEdit(welcomeFrame);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setMinimumSize(QSize(151, 0));

        hboxLayout6->addWidget(nameLineEdit);

        spacerItem12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem12);


        vboxLayout1->addLayout(hboxLayout6);

        label_ready_note = new QLabel(welcomeFrame);
        label_ready_note->setObjectName(QString::fromUtf8("label_ready_note"));
        label_ready_note->setAlignment(Qt::AlignCenter);

        vboxLayout1->addWidget(label_ready_note);

        spacerItem13 = new QSpacerItem(481, 16, QSizePolicy::Minimum, QSizePolicy::Preferred);

        vboxLayout1->addItem(spacerItem13);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(6);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        spacerItem14 = new QSpacerItem(97, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem14);

        tbtnStart = new QToolButton(welcomeFrame);
        tbtnStart->setObjectName(QString::fromUtf8("tbtnStart"));
        tbtnStart->setMinimumSize(QSize(100, 0));
        const QIcon icon7 = QIcon(QString::fromUtf8(":/images/images/player_play.png"));
        tbtnStart->setIcon(icon7);
        tbtnStart->setIconSize(QSize(32, 32));
        tbtnStart->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout7->addWidget(tbtnStart);

        spacerItem15 = new QSpacerItem(97, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem15);


        vboxLayout1->addLayout(hboxLayout7);


        gridLayout1->addWidget(welcomeFrame, 1, 1, 1, 1);

        spacerItem16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem16, 1, 2, 1, 1);

        spacerItem17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem17, 2, 0, 1, 1);

        spacerItem18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem18, 2, 1, 1, 1);

        spacerItem19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem19, 2, 2, 1, 1);

        mainStackedWidget->addWidget(startPage);
        testPage = new QWidget();
        testPage->setObjectName(QString::fromUtf8("testPage"));
        hboxLayout8 = new QHBoxLayout(testPage);
        hboxLayout8->setSpacing(6);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        testPageSplitter = new MTSplitter(testPage);
        testPageSplitter->setObjectName(QString::fromUtf8("testPageSplitter"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        testPageSplitter->setPalette(palette);
        testPageSplitter->setOrientation(Qt::Horizontal);
        testPageSplitter->setChildrenCollapsible(false);
        layoutWidget_1 = new QWidget(testPageSplitter);
        layoutWidget_1->setObjectName(QString::fromUtf8("layoutWidget_1"));
        vboxLayout2 = new QVBoxLayout(layoutWidget_1);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        LQListWidget = new QListWidget(layoutWidget_1);
        LQListWidget->setObjectName(QString::fromUtf8("LQListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LQListWidget->sizePolicy().hasHeightForWidth());
        LQListWidget->setSizePolicy(sizePolicy);
        LQListWidget->setMinimumSize(QSize(100, 0));

        vboxLayout2->addWidget(LQListWidget);

        progressBar = new QProgressBar(layoutWidget_1);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setMinimumSize(QSize(100, 0));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignHCenter);
        progressBar->setOrientation(Qt::Horizontal);

        vboxLayout2->addWidget(progressBar);

        testPageSplitter->addWidget(layoutWidget_1);
        layoutWidget_2 = new QWidget(testPageSplitter);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        vboxLayout3 = new QVBoxLayout(layoutWidget_2);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        questionTextSvgSplitter = new MTSplitter(layoutWidget_2);
        questionTextSvgSplitter->setObjectName(QString::fromUtf8("questionTextSvgSplitter"));
        questionTextSvgSplitter->setOrientation(Qt::Vertical);
        questionTextBrowser = new QTextBrowser(questionTextSvgSplitter);
        questionTextBrowser->setObjectName(QString::fromUtf8("questionTextBrowser"));
        questionTextSvgSplitter->addWidget(questionTextBrowser);
        svgDisplayWidget = new MTMultiSvgWidget(questionTextSvgSplitter);
        svgDisplayWidget->setObjectName(QString::fromUtf8("svgDisplayWidget"));
        svgDisplayWidget->setMinimumSize(QSize(0, 59));
        questionTextSvgSplitter->addWidget(svgDisplayWidget);

        vboxLayout3->addWidget(questionTextSvgSplitter);

        answersView = new AnswersView(layoutWidget_2);
        answersView->setObjectName(QString::fromUtf8("answersView"));

        vboxLayout3->addWidget(answersView);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setSpacing(6);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        showRemainingTimeCheckBox = new QCheckBox(layoutWidget_2);
        showRemainingTimeCheckBox->setObjectName(QString::fromUtf8("showRemainingTimeCheckBox"));

        hboxLayout9->addWidget(showRemainingTimeCheckBox);

        remainingTimeLcdNumber = new QLCDNumber(layoutWidget_2);
        remainingTimeLcdNumber->setObjectName(QString::fromUtf8("remainingTimeLcdNumber"));
        remainingTimeLcdNumber->setFrameShape(QFrame::NoFrame);
        remainingTimeLcdNumber->setSegmentStyle(QLCDNumber::Flat);
        remainingTimeLcdNumber->setProperty("intValue", QVariant(60));

        hboxLayout9->addWidget(remainingTimeLcdNumber);

        label_minutes = new QLabel(layoutWidget_2);
        label_minutes->setObjectName(QString::fromUtf8("label_minutes"));

        hboxLayout9->addWidget(label_minutes);

        remainingTimeProgressBar = new QProgressBar(layoutWidget_2);
        remainingTimeProgressBar->setObjectName(QString::fromUtf8("remainingTimeProgressBar"));
        remainingTimeProgressBar->setValue(100);
        remainingTimeProgressBar->setTextVisible(false);
        remainingTimeProgressBar->setOrientation(Qt::Horizontal);

        hboxLayout9->addWidget(remainingTimeProgressBar);

        spacerItem20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem20);

        btnLast = new QPushButton(layoutWidget_2);
        btnLast->setObjectName(QString::fromUtf8("btnLast"));
        btnLast->setMaximumSize(QSize(16777215, 23));
        const QIcon icon8 = QIcon(QString::fromUtf8(":/images/images/back.png"));
        btnLast->setIcon(icon8);
        btnLast->setIconSize(QSize(20, 20));

        hboxLayout9->addWidget(btnLast);

        btnNext = new QPushButton(layoutWidget_2);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setMaximumSize(QSize(16777215, 23));
        const QIcon icon9 = QIcon(QString::fromUtf8(":/images/images/forward.png"));
        btnNext->setIcon(icon9);
        btnNext->setIconSize(QSize(20, 20));

        hboxLayout9->addWidget(btnNext);

        btnFinish = new QPushButton(layoutWidget_2);
        btnFinish->setObjectName(QString::fromUtf8("btnFinish"));
        btnFinish->setMaximumSize(QSize(16777215, 23));
        btnFinish->setIcon(icon6);
        btnFinish->setIconSize(QSize(20, 20));

        hboxLayout9->addWidget(btnFinish);


        vboxLayout3->addLayout(hboxLayout9);

        testPageSplitter->addWidget(layoutWidget_2);

        hboxLayout8->addWidget(testPageSplitter);

        mainStackedWidget->addWidget(testPage);
        resultsPage = new QWidget();
        resultsPage->setObjectName(QString::fromUtf8("resultsPage"));
        gridLayout2 = new QGridLayout(resultsPage);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setHorizontalSpacing(6);
        gridLayout2->setVerticalSpacing(6);
        label_results_name = new QLabel(resultsPage);
        label_results_name->setObjectName(QString::fromUtf8("label_results_name"));

        gridLayout2->addWidget(label_results_name, 0, 0, 1, 1);

        nameLabel = new QLabel(resultsPage);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout2->addWidget(nameLabel, 0, 1, 1, 1);

        label_results_score = new QLabel(resultsPage);
        label_results_score->setObjectName(QString::fromUtf8("label_results_score"));

        gridLayout2->addWidget(label_results_score, 1, 0, 1, 1);

        scoreLabel = new QLabel(resultsPage);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));

        gridLayout2->addWidget(scoreLabel, 1, 1, 1, 1);

        label_results = new QLabel(resultsPage);
        label_results->setObjectName(QString::fromUtf8("label_results"));

        gridLayout2->addWidget(label_results, 2, 0, 1, 3);

        resultsTableWidget = new QTableWidget(resultsPage);
        resultsTableWidget->setObjectName(QString::fromUtf8("resultsTableWidget"));

        gridLayout2->addWidget(resultsTableWidget, 3, 0, 1, 3);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(6);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        btnNewTest = new QPushButton(resultsPage);
        btnNewTest->setObjectName(QString::fromUtf8("btnNewTest"));
        btnNewTest->setIcon(icon3);
        btnNewTest->setIconSize(QSize(22, 22));

        hboxLayout10->addWidget(btnNewTest);

        spacerItem21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout10->addItem(spacerItem21);

        btnQuit = new QPushButton(resultsPage);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setIcon(icon4);
        btnQuit->setIconSize(QSize(22, 22));

        hboxLayout10->addWidget(btnQuit);


        gridLayout2->addLayout(hboxLayout10, 4, 0, 1, 3);

        spacerItem22 = new QSpacerItem(313, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem22, 0, 2, 1, 1);

        mainStackedWidget->addWidget(resultsPage);

        gridLayout->addWidget(mainStackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(nameLineEdit, SIGNAL(returnPressed()), tbtnStart, SLOT(click()));
        QObject::connect(serverNameLineEdit, SIGNAL(returnPressed()), serverPortLineEdit, SLOT(selectAll()));
        QObject::connect(serverNameLineEdit, SIGNAL(returnPressed()), serverPortLineEdit, SLOT(setFocus()));
        QObject::connect(serverPortLineEdit, SIGNAL(returnPressed()), tbtnConnect, SLOT(click()));
        QObject::connect(nameLineEdit, SIGNAL(textEdited(QString)), nameLabel, SLOT(setText(QString)));
        QObject::connect(showRemainingTimeCheckBox, SIGNAL(toggled(bool)), remainingTimeLcdNumber, SLOT(setVisible(bool)));
        QObject::connect(showRemainingTimeCheckBox, SIGNAL(toggled(bool)), remainingTimeProgressBar, SLOT(setVisible(bool)));
        QObject::connect(showRemainingTimeCheckBox, SIGNAL(toggled(bool)), label_minutes, SLOT(setVisible(bool)));
        QObject::connect(rbtnFromFile, SIGNAL(toggled(bool)), hideCorrectAnswersCheckBox, SLOT(setDisabled(bool)));
        QObject::connect(rbtnFromFile, SIGNAL(toggled(bool)), label_results_score, SLOT(setHidden(bool)));
        QObject::connect(rbtnFromFile, SIGNAL(toggled(bool)), scoreLabel, SLOT(setHidden(bool)));

        mainStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "iTestClient", 0, QApplication::UnicodeUTF8));
        rbtnNetwork->setText(QApplication::translate("MainWindow", "Connect to an iTest server", 0, QApplication::UnicodeUTF8));
        label_server_name->setText(QApplication::translate("MainWindow", "<b>Server name</b>", 0, QApplication::UnicodeUTF8));
        label_server_port->setText(QApplication::translate("MainWindow", "<b>Server port</b>", 0, QApplication::UnicodeUTF8));
        tbtnConnect->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        rbtnFromFile->setText(QApplication::translate("MainWindow", "Use an iTest database file", 0, QApplication::UnicodeUTF8));
        label_db_path->setText(QApplication::translate("MainWindow", "<b>Database file path</b>", 0, QApplication::UnicodeUTF8));
        tbtnBrowse_DBPath->setText(QApplication::translate("MainWindow", "Browse", 0, QApplication::UnicodeUTF8));
        tbtnLoad->setText(QApplication::translate("MainWindow", "Load", 0, QApplication::UnicodeUTF8));
        label_itcl_path->setText(QApplication::translate("MainWindow", "<b>Save answers to</b>", 0, QApplication::UnicodeUTF8));
        label_itcl_path_note->setText(QApplication::translate("MainWindow", "If connected to an iTest server, results will be sent automatically. You only need this file if there is no network available or in case of connection breakdown.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        useDefaultOutputCheckBox->setToolTip(QApplication::translate("MainWindow", "$HOME/TestName-Date-SurnameName.itcl, where $HOME is the directory of the current user's profile on Windows and the home directory on Unix/Linux/Mac OS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        useDefaultOutputCheckBox->setText(QApplication::translate("MainWindow", "Use default", 0, QApplication::UnicodeUTF8));
        tbtnBrowse_savePath->setText(QApplication::translate("MainWindow", "Browse", 0, QApplication::UnicodeUTF8));
        label_other_settings->setText(QApplication::translate("MainWindow", "<b>Other settings</b>", 0, QApplication::UnicodeUTF8));
        hideQuestionNamesCheckBox->setText(QApplication::translate("MainWindow", "Hide question names, show numbers instead", 0, QApplication::UnicodeUTF8));
        hideCorrectAnswersCheckBox->setText(QApplication::translate("MainWindow", "Do not show correct answers at the end of the test", 0, QApplication::UnicodeUTF8));
        label_test_info->setText(QApplication::translate("MainWindow", "<b>Test information</b>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = infoTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Data", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = infoTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Test name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = infoTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Database date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = infoTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Test date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = infoTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Test time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = infoTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Number of questions", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = infoTableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Number of flags", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = infoTableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Flag names", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = infoTableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Pass mark", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = infoTableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Comments", 0, QApplication::UnicodeUTF8));
        tbtnQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        tbtnAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        tbtnGetReady->setText(QApplication::translate("MainWindow", "Ready", 0, QApplication::UnicodeUTF8));
        label_welcome->setText(QApplication::translate("MainWindow", "Welcome!", 0, QApplication::UnicodeUTF8));
        label_your_name->setText(QApplication::translate("MainWindow", "Your name:", 0, QApplication::UnicodeUTF8));
        label_ready_note->setText(QApplication::translate("MainWindow", "When you are ready to begin the examination, click the Start button below.", 0, QApplication::UnicodeUTF8));
        tbtnStart->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        showRemainingTimeCheckBox->setText(QApplication::translate("MainWindow", "Show remaining time", 0, QApplication::UnicodeUTF8));
        label_minutes->setText(QApplication::translate("MainWindow", "minute(s)", 0, QApplication::UnicodeUTF8));
        btnLast->setText(QApplication::translate("MainWindow", "Last question", 0, QApplication::UnicodeUTF8));
        btnNext->setText(QApplication::translate("MainWindow", "Next question", 0, QApplication::UnicodeUTF8));
        btnFinish->setText(QApplication::translate("MainWindow", "Finish", 0, QApplication::UnicodeUTF8));
        label_results_name->setText(QApplication::translate("MainWindow", "<b>Name:</b>", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QString());
        label_results_score->setText(QApplication::translate("MainWindow", "<b>Score:</b>", 0, QApplication::UnicodeUTF8));
        label_results->setText(QApplication::translate("MainWindow", "<b>Results:</b>", 0, QApplication::UnicodeUTF8));
        btnNewTest->setText(QApplication::translate("MainWindow", "New test", 0, QApplication::UnicodeUTF8));
        btnQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H

/********************************************************************************
** Form generated from reading UI file 'session_wizard.ui'
**
** Created: Sun 27. Mar 14:41:37 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSION_WIZARD_H
#define UI_SESSION_WIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SessionWizard
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *lblSession;
    QLabel *lblSessionName;
    QHBoxLayout *hboxLayout1;
    QLabel *lblClass;
    QLabel *lblClassName;
    QListWidget *lwSessionStudents;
    QSpacerItem *spacerItem;
    QListWidget *lwClassStudents;
    QPushButton *btnMatch;
    QSpacerItem *spacerItem1;
    QTableWidget *twMatchedPairs;
    QPushButton *btnSplit;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *btnbxButtons;

    void setupUi(QDialog *SessionWizard)
    {
        if (SessionWizard->objectName().isEmpty())
            SessionWizard->setObjectName(QString::fromUtf8("SessionWizard"));
        SessionWizard->resize(576, 415);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/images/class-add32.png"));
        SessionWizard->setWindowIcon(icon);
        gridLayout = new QGridLayout(SessionWizard);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblSession = new QLabel(SessionWizard);
        lblSession->setObjectName(QString::fromUtf8("lblSession"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblSession->sizePolicy().hasHeightForWidth());
        lblSession->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(lblSession);

        lblSessionName = new QLabel(SessionWizard);
        lblSessionName->setObjectName(QString::fromUtf8("lblSessionName"));

        hboxLayout->addWidget(lblSessionName);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        lblClass = new QLabel(SessionWizard);
        lblClass->setObjectName(QString::fromUtf8("lblClass"));
        sizePolicy.setHeightForWidth(lblClass->sizePolicy().hasHeightForWidth());
        lblClass->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(lblClass);

        lblClassName = new QLabel(SessionWizard);
        lblClassName->setObjectName(QString::fromUtf8("lblClassName"));

        hboxLayout1->addWidget(lblClassName);


        gridLayout->addLayout(hboxLayout1, 0, 3, 1, 1);

        lwSessionStudents = new QListWidget(SessionWizard);
        lwSessionStudents->setObjectName(QString::fromUtf8("lwSessionStudents"));
        lwSessionStudents->setSortingEnabled(true);

        gridLayout->addWidget(lwSessionStudents, 1, 0, 3, 2);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        lwClassStudents = new QListWidget(SessionWizard);
        lwClassStudents->setObjectName(QString::fromUtf8("lwClassStudents"));
        lwClassStudents->setSortingEnabled(true);

        gridLayout->addWidget(lwClassStudents, 1, 3, 3, 1);

        btnMatch = new QPushButton(SessionWizard);
        btnMatch->setObjectName(QString::fromUtf8("btnMatch"));

        gridLayout->addWidget(btnMatch, 2, 2, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 2, 1, 1);

        twMatchedPairs = new QTableWidget(SessionWizard);
        if (twMatchedPairs->columnCount() < 2)
            twMatchedPairs->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twMatchedPairs->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twMatchedPairs->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        twMatchedPairs->setObjectName(QString::fromUtf8("twMatchedPairs"));

        gridLayout->addWidget(twMatchedPairs, 4, 0, 1, 4);

        btnSplit = new QPushButton(SessionWizard);
        btnSplit->setObjectName(QString::fromUtf8("btnSplit"));

        gridLayout->addWidget(btnSplit, 5, 0, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 5, 1, 1, 1);

        btnbxButtons = new QDialogButtonBox(SessionWizard);
        btnbxButtons->setObjectName(QString::fromUtf8("btnbxButtons"));
        btnbxButtons->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(btnbxButtons, 5, 2, 1, 2);


        retranslateUi(SessionWizard);
        QObject::connect(btnbxButtons, SIGNAL(accepted()), SessionWizard, SLOT(accept()));
        QObject::connect(btnbxButtons, SIGNAL(rejected()), SessionWizard, SLOT(reject()));

        QMetaObject::connectSlotsByName(SessionWizard);
    } // setupUi

    void retranslateUi(QDialog *SessionWizard)
    {
        SessionWizard->setWindowTitle(QApplication::translate("SessionWizard", "Add session - iTestServer", 0, QApplication::UnicodeUTF8));
        lblSession->setText(QApplication::translate("SessionWizard", "<b>Session:</b>", 0, QApplication::UnicodeUTF8));
        lblClass->setText(QApplication::translate("SessionWizard", "<b>Class:</b>", 0, QApplication::UnicodeUTF8));
        btnMatch->setText(QApplication::translate("SessionWizard", "Match", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = twMatchedPairs->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SessionWizard", "Session", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = twMatchedPairs->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SessionWizard", "Class", 0, QApplication::UnicodeUTF8));
        btnSplit->setText(QApplication::translate("SessionWizard", "Split", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SessionWizard: public Ui_SessionWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSION_WIZARD_H

/********************************************************************************
** Form generated from reading UI file 'main_window_v2.ui'
**
** Created: Tue 5. Apr 17:30:40 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_V2_H
#define UI_MAIN_WINDOW_V2_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "answersedit.h"
#include "extendedlineedit.h"
#include "mtlistwidget.h"
#include "mtspinbox.h"
#include "mttablewidget.h"
#include "mttextedit.h"
#include "mttoolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionClose;
    QAction *actionQuit;
    QAction *actionEdit_flags;
    QAction *actionEdit_test;
    QAction *actionAbout;
    QAction *actionFrom_A_to_Z;
    QAction *actionFrom_Z_to_A;
    QAction *actionShow_all;
    QAction *actionShow_easy;
    QAction *actionShow_medium;
    QAction *actionShow_difficult;
    QAction *actionShow_DBI;
    QAction *actionShow_flag;
    QAction *actionMove_up;
    QAction *actionMove_down;
    QAction *actionEdit_comments;
    QAction *actionUse_last_save_date;
    QAction *actionAdd;
    QAction *actionDuplicate;
    QAction *actionDelete;
    QAction *actionMove_to_top;
    QAction *actionMove_to_bottom;
    QAction *actionApply;
    QAction *actionDiscard;
    QAction *actionEdit_questions;
    QAction *actionAdd_offline_client;
    QAction *actionStop_server;
    QAction *actionStart_server;
    QAction *actionExport_log;
    QAction *actionSave_session;
    QAction *actionQuickPrint;
    QAction *actionPrint;
    QAction *actionExport_test;
    QAction *actionAdd_offline_clients;
    QAction *actionSaved_sessions;
    QAction *actionDelete_log;
    QAction *actionArchive_session;
    QAction *actionDocumentation;
    QAction *actionCheck_for_updates;
    QAction *actionPrint_all;
    QAction *actionPrint_session_summary;
    QAction *actionOverall_statistics;
    QAction *actionChange_language;
    QAction *actionRestore_session;
    QAction *actionCopy_to_archive;
    QAction *actionCopy_from_archive;
    QAction *actionSave_a_copy;
    QAction *actionSave_a_backup;
    QAction *actionShow_hidden;
    QAction *actionHide;
    QAction *actionRun_Test_Writer;
    QAction *actionPrint_questions;
    QAction *actionAdd_SVG;
    QAction *actionRemove_SVG;
    QAction *actionEdit_SVG;
    QAction *actionExport_SVG;
    QAction *actionEdit_classes;
    QAction *actionAdd_class;
    QAction *actionDelete_class;
    QAction *actionAdd_student;
    QAction *actionDelete_student;
    QAction *actionAdd_session;
    QAction *actionDelete_session;
    QAction *actionPrint_class_summary;
    QAction *actionBy_flag;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *mainStackedWidget;
    QWidget *welcomePage;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QLabel *label_icon;
    QLabel *label_icon_text;
    QLabel *label_recent;
    QListWidget *recentDBsListWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *btnNew;
    QPushButton *btnOpenOther;
    QSpacerItem *spacerItem2;
    QPushButton *btnOpenSelected;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QWidget *mainPage;
    QVBoxLayout *vboxLayout1;
    QGroupBox *DBIGroupBox;
    QHBoxLayout *hboxLayout1;
    QLabel *DBIDatabaseNameLabel;
    QLineEdit *DBIDatabaseNameLineEdit;
    QSpacerItem *spacerItem5;
    QLabel *DBIDateLabel;
    QDateEdit *DBIDateEdit;
    QCheckBox *DBIUseLastSaveDateCheckBox;
    QHBoxLayout *hboxLayout2;
    QGroupBox *LQGroupBox;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout3;
    QRadioButton *LQAllRadioButton;
    QRadioButton *LQEasyRadioButton;
    QRadioButton *LQMediumRadioButton;
    QRadioButton *LQDifficultRadioButton;
    QRadioButton *LQFlagRadioButton;
    QComboBox *LQFlagComboBox;
    QHBoxLayout *hboxLayout4;
    QLabel *label_search;
    ExtendedLineEdit *LQSearchLineEdit;
    QListWidget *LQListWidget;
    QHBoxLayout *hboxLayout5;
    QToolButton *tbtnAddQuestion;
    QToolButton *tbtnDuplicateQuestion;
    QToolButton *tbtnDeleteQuestion;
    QToolButton *tbtnMoveUp;
    QToolButton *tbtnMoveDown;
    QGroupBox *SQGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hboxLayout6;
    QLabel *SQQuestionNameLabel;
    QLineEdit *SQQuestionNameLineEdit;
    QHBoxLayout *hboxLayout7;
    QLabel *SQFlagLabel;
    QComboBox *SQFlagComboBox;
    QSpacerItem *spacerItem6;
    QLabel *SQGroupLabel;
    QLineEdit *SQGroupLineEdit;
    QToolButton *tbtnSearchByGroup;
    QSpacerItem *spacerItem7;
    QLabel *SQDifficultyLabel;
    QComboBox *SQDifficultyComboBox;
    QSplitter *SQSplitter;
    MTTextEdit *SQQuestionTextEdit;
    QWidget *verticalLayout;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout8;
    QLabel *SQSVGLabel;
    QToolButton *tbtnAddSVG;
    QToolButton *tbtnRemoveSVG;
    QToolButton *tbtnEditSVG;
    QToolButton *tbtnExportSVG;
    QListWidget *SQSVGListWidget;
    AnswersEdit *SQAnswersEdit;
    QHBoxLayout *hboxLayout9;
    QLabel *SQExplanationLabel;
    QLineEdit *SQExplanationLineEdit;
    QLabel *SQStatisticsLabel;
    QDialogButtonBox *SQButtonBox;
    QWidget *editCommentsPage;
    QVBoxLayout *verticalLayout_3;
    MTTextEdit *ECTextEdit;
    QWidget *editFlagsPage;
    QVBoxLayout *vboxLayout4;
    QTreeWidget *EFTreeWidget;
    QDialogButtonBox *EFButtonBox;
    QWidget *testSettingsPage;
    QGridLayout *gridLayout2;
    QGroupBox *TSAdvancedSetupGroupBox;
    QVBoxLayout *vboxLayout5;
    QHBoxLayout *hboxLayout10;
    QLabel *label_advanced_select;
    QRadioButton *rbtnSelectFlags;
    QRadioButton *rbtnSelectQuestions;
    QSpacerItem *spacerItem8;
    QHBoxLayout *hboxLayout11;
    QVBoxLayout *vboxLayout6;
    QLabel *label_exclude;
    QHBoxLayout *hboxLayout12;
    QLabel *label_search_available;
    ExtendedLineEdit *TSSearchAvailableLineEdit;
    MTListWidget *TSExcludeListWidget;
    QVBoxLayout *vboxLayout7;
    QSpacerItem *spacerItem9;
    QPushButton *btnAddToList;
    QPushButton *btnRemoveFromList;
    QSpacerItem *spacerItem10;
    QVBoxLayout *vboxLayout8;
    QLabel *label_include;
    QHBoxLayout *hboxLayout13;
    QLabel *label_search_used;
    ExtendedLineEdit *TSSearchUsedLineEdit;
    MTTableWidget *TSIncludeTableWidget;
    QGroupBox *TSScoringSystemGroupBox;
    QGridLayout *gridLayout3;
    QCheckBox *TSAllowIncompleteAnswersCheckBox;
    QCheckBox *TSSeparateSettingsForDifficultyLevelsCheckBox;
    QLabel *label_easy_correctanswer;
    QDoubleSpinBox *TSEasyCorrectAnswerSpinBox;
    QLabel *label_easy_incorrectanswer;
    QDoubleSpinBox *TSEasyIncorrectAnswerSpinBox;
    QLabel *label_easy_missinganswer;
    QDoubleSpinBox *TSEasyMissingAnswerSpinBox;
    QLabel *label_medium_correctanswer;
    QDoubleSpinBox *TSMediumCorrectAnswerSpinBox;
    QLabel *label_medium_incorrectanswer;
    QDoubleSpinBox *TSMediumIncorrectAnswerSpinBox;
    QLabel *label_medium_missinganswer;
    QDoubleSpinBox *TSMediumMissingAnswerSpinBox;
    QLabel *label_difficult_correctanswer;
    QDoubleSpinBox *TSDifficultCorrectAnswerSpinBox;
    QLabel *label_difficult_incorrectanswer;
    QDoubleSpinBox *TSDifficultIncorrectAnswerSpinBox;
    QLabel *label_difficult_missinganswer;
    QDoubleSpinBox *TSDifficultMissingAnswerSpinBox;
    QLabel *label_easy_icon1;
    QLabel *label_easy_icon2;
    QLabel *label_easy_icon3;
    QLabel *label_medium_icon1;
    QLabel *label_medium_icon2;
    QLabel *label_medium_icon3;
    QLabel *label_difficult_icon1;
    QLabel *label_difficult_icon2;
    QLabel *label_difficult_icon3;
    QSpacerItem *spacerItem11;
    QSpacerItem *spacerItem12;
    QSpacerItem *spacerItem13;
    QSpacerItem *spacerItem14;
    QGroupBox *TSCommonSettingsGroupBox;
    QGridLayout *gridLayout4;
    QLabel *label_test_name;
    QCheckBox *TSCustomTestNameCheckBox;
    QLineEdit *TSTestNameLineEdit;
    QLabel *label_allow_groups;
    QCheckBox *TSGroupsCheckBox;
    QLabel *label_qnum;
    QCheckBox *TSMaxQnumCheckBox;
    MTSpinBox *TSQnumSpinBox;
    QLabel *label_passmark;
    QLabel *label_testtime;
    QRadioButton *rbtnTestTime;
    QTimeEdit *TSTestTimeEdit;
    QRadioButton *rbtnQuestionTime;
    QTimeEdit *TSQuestionTimeEdit;
    QLabel *label_server_port;
    QCheckBox *TSCustomServerPortCheckBox;
    QSpinBox *TSCustomServerPortSpinBox;
    QPushButton *btnStartServer;
    MTSpinBox *TSPassMarkSpinBox;
    QCheckBox *TSHideQuestionNamesCheckBox;
    QCheckBox *TSHideCorrectAnswersCheckBox;
    QLabel *label_other_settings;
    QCheckBox *TSShuffleAnswersCheckBox;
    QSpacerItem *spacerItem15;
    QCheckBox *TSDoNotPrintResultsCheckBox;
    QWidget *serverModePage;
    QVBoxLayout *vboxLayout9;
    QGroupBox *SMInfoGroupBox;
    QHBoxLayout *hboxLayout14;
    QLabel *SMIPortLabel;
    QHBoxLayout *hboxLayout15;
    QGroupBox *SMClientsGroupBox;
    QVBoxLayout *vboxLayout10;
    QListWidget *SMLCListWidget;
    QGroupBox *SMSelectedClientGroupBox;
    QGridLayout *gridLayout5;
    QLabel *SMSC_label_4;
    QLabel *SMSCNameLabel;
    QSpacerItem *spacerItem16;
    QLabel *SMSC_label_1;
    QLabel *SMSCStatusLabel;
    QSpacerItem *spacerItem17;
    QLabel *SMSC_label_2;
    QLabel *SMSCScoreLabel;
    QSpacerItem *spacerItem18;
    QLabel *SMSC_label_3;
    QTableWidget *SMSCResultsTableWidget;
    QGroupBox *SMLogGroupBox;
    QVBoxLayout *vboxLayout11;
    QListWidget *SMSLListWidget;
    QWidget *savedSessionsPage;
    QHBoxLayout *hboxLayout16;
    QVBoxLayout *vboxLayout12;
    QGroupBox *SVLSGroupBox;
    QVBoxLayout *vboxLayout13;
    QHBoxLayout *hboxLayout17;
    QLabel *label_search_sessions;
    ExtendedLineEdit *SVLSSearchLineEdit;
    MTListWidget *SVLSListWidget;
    QLabel *label_archived_sessions;
    MTListWidget *SVLASListWidget;
    QWidget *SVSelectedSessionWidget;
    QVBoxLayout *vboxLayout14;
    QGroupBox *SVCSGroupBox;
    QGridLayout *gridLayout6;
    QLabel *label_current_session_name;
    QLabel *SVNameLabel;
    QLabel *label_current_session_passmark;
    QLabel *SVPassMarkLabel;
    QLabel *label_overall_results;
    QLabel *label_overall_score_bad;
    QLabel *label_overall_score_good;
    QLabel *label_current_session_datetime;
    QLabel *SVDateTimeLabel;
    QLabel *SVOverallResultsLabel;
    QProgressBar *SVOverallResultsProgressBar;
    QSplitter *SVSplitter;
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout18;
    QGroupBox *SVLCGroupBox;
    QVBoxLayout *vboxLayout15;
    QListWidget *SVLCListWidget;
    QTabWidget *SVStudentTabWidget;
    QWidget *selectedStudentTab;
    QGridLayout *gridLayout7;
    QLabel *SVStudent_label_1;
    QLabel *SVStudentNameLabel;
    QSpacerItem *spacerItem19;
    QLabel *SVStudent_label_2;
    QLabel *SVStudentScoreLabel;
    QSpacerItem *spacerItem20;
    QLabel *SVStudent_label_3;
    QTableWidget *SVStudentResultsTableWidget;
    QWidget *passMarkDetailsTab;
    QVBoxLayout *vboxLayout16;
    QHBoxLayout *hboxLayout19;
    QLabel *label_search_details;
    ExtendedLineEdit *SVSearchDetailsLineEdit;
    MTTableWidget *SVPassMarkTableWidget;
    QWidget *scoringSystemTab;
    QVBoxLayout *vboxLayout17;
    QTableWidget *SVScoringSystemTableWidget;
    QGroupBox *SVLogGroupBox;
    QVBoxLayout *vboxLayout18;
    QListWidget *SVLogListWidget;
    QWidget *classesPage;
    QGridLayout *gridLayout8;
    QGroupBox *CLLCGroupBox;
    QVBoxLayout *vboxLayout19;
    QHBoxLayout *hboxLayout20;
    QLabel *label_search_classes;
    ExtendedLineEdit *CLLCSearchLineEdit;
    MTListWidget *CLLCListWidget;
    QHBoxLayout *hboxLayout21;
    MTToolButton *tbtnAdd_class;
    QSpacerItem *spacerItem21;
    MTToolButton *tbtnDelete_class;
    QGroupBox *CLSCGroupBox;
    QGridLayout *gridLayout9;
    QLabel *CLSCNameLabel;
    QLineEdit *CLSCNameLineEdit;
    QLabel *CLSCFirstYearLabel;
    MTSpinBox *CLSCFirstYearSpinBox;
    QLabel *CLSCLastYearLabel;
    MTSpinBox *CLSCLastYearSpinBox;
    QSpacerItem *spacerItem22;
    QSpacerItem *spacerItem23;
    QLabel *CLSCNumStudentsTextLabel;
    QLabel *CLSCNumStudentsLabel;
    QLabel *CLSCAverageTextLabel;
    QLabel *CLSCAverageLabel;
    QToolButton *tbtnApplyClassChanges;
    QGroupBox *CLLSGroupBox;
    QVBoxLayout *vboxLayout20;
    QHBoxLayout *hboxLayout22;
    QLabel *label_search_class_students;
    ExtendedLineEdit *CLLSSearchLineEdit;
    MTListWidget *CLLSListWidget;
    QHBoxLayout *hboxLayout23;
    MTToolButton *tbtnAdd_student;
    QSpacerItem *spacerItem24;
    MTToolButton *tbtnDelete_student;
    QGroupBox *CLSSGroupBox;
    QVBoxLayout *vboxLayout21;
    QHBoxLayout *hboxLayout24;
    QLabel *CLSSNameLabel;
    QLineEdit *CLSSNameLineEdit;
    QToolButton *tbtnSaveMemberName;
    QSpacerItem *spacerItem25;
    QLabel *CLSSAverageTextLabel;
    QLabel *CLSSAverageLabel;
    QLabel *CLSSResultsLabel;
    MTTableWidget *CLSSResultsTableWidget;
    QHBoxLayout *hboxLayout25;
    QToolButton *tbtnAddSession;
    QSpacerItem *spacerItem26;
    QToolButton *tbtnRemoveSession;
    QGroupBox *CLLSSGroupBox;
    QVBoxLayout *vboxLayout22;
    QHBoxLayout *hboxLayout26;
    QLabel *label_search_class_sessions;
    ExtendedLineEdit *CLLSSSearchLineEdit;
    MTListWidget *CLLSSListWidget;
    QHBoxLayout *hboxLayout27;
    MTToolButton *tbtnAdd_session;
    QSpacerItem *spacerItem27;
    MTToolButton *tbtnDelete_session;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QMenu *menuSession;
    QMenu *menuView;
    QMenu *menuQuestion;
    QMenu *menuAttachments;
    QMenu *menuServer;
    QMenu *menuDatabase;
    QMenu *menuSort_questions;
    QMenu *menuFilter_LQ;
    QMenu *menuFile;
    QMenu *menuClass;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(860, 685);
        MainWindow->setMinimumSize(QSize(790, 580));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/itest.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/filesaveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon4);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/fileclose.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon5);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon6);
        actionQuit->setMenuRole(QAction::QuitRole);
        actionEdit_flags = new QAction(MainWindow);
        actionEdit_flags->setObjectName(QString::fromUtf8("actionEdit_flags"));
        actionEdit_flags->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/flag.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_flags->setIcon(icon7);
        actionEdit_test = new QAction(MainWindow);
        actionEdit_test->setObjectName(QString::fromUtf8("actionEdit_test"));
        actionEdit_test->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/itestserver32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_test->setIcon(icon8);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/itest32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon9);
        actionAbout->setMenuRole(QAction::AboutRole);
        actionFrom_A_to_Z = new QAction(MainWindow);
        actionFrom_A_to_Z->setObjectName(QString::fromUtf8("actionFrom_A_to_Z"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/sort_ascending.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFrom_A_to_Z->setIcon(icon10);
        actionFrom_Z_to_A = new QAction(MainWindow);
        actionFrom_Z_to_A->setObjectName(QString::fromUtf8("actionFrom_Z_to_A"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/sort_descending.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFrom_Z_to_A->setIcon(icon11);
        actionShow_all = new QAction(MainWindow);
        actionShow_all->setObjectName(QString::fromUtf8("actionShow_all"));
        actionShow_easy = new QAction(MainWindow);
        actionShow_easy->setObjectName(QString::fromUtf8("actionShow_easy"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/easy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_easy->setIcon(icon12);
        actionShow_medium = new QAction(MainWindow);
        actionShow_medium->setObjectName(QString::fromUtf8("actionShow_medium"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/images/medium.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_medium->setIcon(icon13);
        actionShow_difficult = new QAction(MainWindow);
        actionShow_difficult->setObjectName(QString::fromUtf8("actionShow_difficult"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/images/difficult.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_difficult->setIcon(icon14);
        actionShow_DBI = new QAction(MainWindow);
        actionShow_DBI->setObjectName(QString::fromUtf8("actionShow_DBI"));
        actionShow_DBI->setCheckable(true);
        actionShow_DBI->setChecked(true);
        actionShow_flag = new QAction(MainWindow);
        actionShow_flag->setObjectName(QString::fromUtf8("actionShow_flag"));
        actionShow_flag->setIcon(icon7);
        actionMove_up = new QAction(MainWindow);
        actionMove_up->setObjectName(QString::fromUtf8("actionMove_up"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/images/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMove_up->setIcon(icon15);
        actionMove_down = new QAction(MainWindow);
        actionMove_down->setObjectName(QString::fromUtf8("actionMove_down"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/images/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMove_down->setIcon(icon16);
        actionEdit_comments = new QAction(MainWindow);
        actionEdit_comments->setObjectName(QString::fromUtf8("actionEdit_comments"));
        actionEdit_comments->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/images/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_comments->setIcon(icon17);
        actionUse_last_save_date = new QAction(MainWindow);
        actionUse_last_save_date->setObjectName(QString::fromUtf8("actionUse_last_save_date"));
        actionUse_last_save_date->setCheckable(true);
        actionUse_last_save_date->setChecked(true);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionAdd->setIcon(icon1);
        actionDuplicate = new QAction(MainWindow);
        actionDuplicate->setObjectName(QString::fromUtf8("actionDuplicate"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/images/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDuplicate->setIcon(icon18);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/images/editdelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon19);
        actionMove_to_top = new QAction(MainWindow);
        actionMove_to_top->setObjectName(QString::fromUtf8("actionMove_to_top"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/images/top.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMove_to_top->setIcon(icon20);
        actionMove_to_bottom = new QAction(MainWindow);
        actionMove_to_bottom->setObjectName(QString::fromUtf8("actionMove_to_bottom"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/images/bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMove_to_bottom->setIcon(icon21);
        actionApply = new QAction(MainWindow);
        actionApply->setObjectName(QString::fromUtf8("actionApply"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/images/button_ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionApply->setIcon(icon22);
        actionDiscard = new QAction(MainWindow);
        actionDiscard->setObjectName(QString::fromUtf8("actionDiscard"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/images/button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDiscard->setIcon(icon23);
        actionEdit_questions = new QAction(MainWindow);
        actionEdit_questions->setObjectName(QString::fromUtf8("actionEdit_questions"));
        actionEdit_questions->setCheckable(true);
        actionEdit_questions->setChecked(false);
        actionEdit_questions->setIcon(icon);
        actionAdd_offline_client = new QAction(MainWindow);
        actionAdd_offline_client->setObjectName(QString::fromUtf8("actionAdd_offline_client"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/images/client.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_offline_client->setIcon(icon24);
        actionStop_server = new QAction(MainWindow);
        actionStop_server->setObjectName(QString::fromUtf8("actionStop_server"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/images/player_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop_server->setIcon(icon25);
        actionStart_server = new QAction(MainWindow);
        actionStart_server->setObjectName(QString::fromUtf8("actionStart_server"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/images/player_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart_server->setIcon(icon26);
        actionExport_log = new QAction(MainWindow);
        actionExport_log->setObjectName(QString::fromUtf8("actionExport_log"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/images/log.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_log->setIcon(icon27);
        actionSave_session = new QAction(MainWindow);
        actionSave_session->setObjectName(QString::fromUtf8("actionSave_session"));
        actionSave_session->setCheckable(true);
        actionSave_session->setChecked(true);
        actionQuickPrint = new QAction(MainWindow);
        actionQuickPrint->setObjectName(QString::fromUtf8("actionQuickPrint"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/images/images/filequickprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuickPrint->setIcon(icon28);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/images/images/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon29);
        actionExport_test = new QAction(MainWindow);
        actionExport_test->setObjectName(QString::fromUtf8("actionExport_test"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/images/images/exporttest.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_test->setIcon(icon30);
        actionAdd_offline_clients = new QAction(MainWindow);
        actionAdd_offline_clients->setObjectName(QString::fromUtf8("actionAdd_offline_clients"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/images/images/clients.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_offline_clients->setIcon(icon31);
        actionSaved_sessions = new QAction(MainWindow);
        actionSaved_sessions->setObjectName(QString::fromUtf8("actionSaved_sessions"));
        actionSaved_sessions->setCheckable(true);
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/images/images/savedsessions32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaved_sessions->setIcon(icon32);
        actionDelete_log = new QAction(MainWindow);
        actionDelete_log->setObjectName(QString::fromUtf8("actionDelete_log"));
        actionDelete_log->setIcon(icon19);
        actionArchive_session = new QAction(MainWindow);
        actionArchive_session->setObjectName(QString::fromUtf8("actionArchive_session"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/images/images/archive.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionArchive_session->setIcon(icon33);
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/images/images/contents.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDocumentation->setIcon(icon34);
        actionCheck_for_updates = new QAction(MainWindow);
        actionCheck_for_updates->setObjectName(QString::fromUtf8("actionCheck_for_updates"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/images/images/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheck_for_updates->setIcon(icon35);
        actionPrint_all = new QAction(MainWindow);
        actionPrint_all->setObjectName(QString::fromUtf8("actionPrint_all"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/images/images/print_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint_all->setIcon(icon36);
        actionPrint_session_summary = new QAction(MainWindow);
        actionPrint_session_summary->setObjectName(QString::fromUtf8("actionPrint_session_summary"));
        actionPrint_session_summary->setIcon(icon29);
        actionOverall_statistics = new QAction(MainWindow);
        actionOverall_statistics->setObjectName(QString::fromUtf8("actionOverall_statistics"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/images/images/statistics.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOverall_statistics->setIcon(icon37);
        actionChange_language = new QAction(MainWindow);
        actionChange_language->setObjectName(QString::fromUtf8("actionChange_language"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/images/images/locale.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChange_language->setIcon(icon38);
        actionRestore_session = new QAction(MainWindow);
        actionRestore_session->setObjectName(QString::fromUtf8("actionRestore_session"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/images/images/restore.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRestore_session->setIcon(icon39);
        actionCopy_to_archive = new QAction(MainWindow);
        actionCopy_to_archive->setObjectName(QString::fromUtf8("actionCopy_to_archive"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/images/images/copy_to_archive.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_to_archive->setIcon(icon40);
        actionCopy_from_archive = new QAction(MainWindow);
        actionCopy_from_archive->setObjectName(QString::fromUtf8("actionCopy_from_archive"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/images/images/copy_from_archive.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_from_archive->setIcon(icon41);
        actionSave_a_copy = new QAction(MainWindow);
        actionSave_a_copy->setObjectName(QString::fromUtf8("actionSave_a_copy"));
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/images/images/save_all.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_a_copy->setIcon(icon42);
        actionSave_a_backup = new QAction(MainWindow);
        actionSave_a_backup->setObjectName(QString::fromUtf8("actionSave_a_backup"));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/images/images/savebackup.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_a_backup->setIcon(icon43);
        actionShow_hidden = new QAction(MainWindow);
        actionShow_hidden->setObjectName(QString::fromUtf8("actionShow_hidden"));
        actionShow_hidden->setCheckable(true);
        actionHide = new QAction(MainWindow);
        actionHide->setObjectName(QString::fromUtf8("actionHide"));
        actionHide->setCheckable(true);
        actionRun_Test_Writer = new QAction(MainWindow);
        actionRun_Test_Writer->setObjectName(QString::fromUtf8("actionRun_Test_Writer"));
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/images/images/itestwri32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun_Test_Writer->setIcon(icon44);
        actionPrint_questions = new QAction(MainWindow);
        actionPrint_questions->setObjectName(QString::fromUtf8("actionPrint_questions"));
        actionPrint_questions->setIcon(icon36);
        actionAdd_SVG = new QAction(MainWindow);
        actionAdd_SVG->setObjectName(QString::fromUtf8("actionAdd_SVG"));
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/images/images/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_SVG->setIcon(icon45);
        actionRemove_SVG = new QAction(MainWindow);
        actionRemove_SVG->setObjectName(QString::fromUtf8("actionRemove_SVG"));
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/images/images/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove_SVG->setIcon(icon46);
        actionEdit_SVG = new QAction(MainWindow);
        actionEdit_SVG->setObjectName(QString::fromUtf8("actionEdit_SVG"));
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/images/images/document-properties.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_SVG->setIcon(icon47);
        actionExport_SVG = new QAction(MainWindow);
        actionExport_SVG->setObjectName(QString::fromUtf8("actionExport_SVG"));
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/images/images/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_SVG->setIcon(icon48);
        actionEdit_classes = new QAction(MainWindow);
        actionEdit_classes->setObjectName(QString::fromUtf8("actionEdit_classes"));
        actionEdit_classes->setCheckable(true);
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/images/images/class32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_classes->setIcon(icon49);
        actionAdd_class = new QAction(MainWindow);
        actionAdd_class->setObjectName(QString::fromUtf8("actionAdd_class"));
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/images/images/class-add32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_class->setIcon(icon50);
        actionDelete_class = new QAction(MainWindow);
        actionDelete_class->setObjectName(QString::fromUtf8("actionDelete_class"));
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/images/images/class-remove32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_class->setIcon(icon51);
        actionAdd_student = new QAction(MainWindow);
        actionAdd_student->setObjectName(QString::fromUtf8("actionAdd_student"));
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/images/images/student-add32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_student->setIcon(icon52);
        actionDelete_student = new QAction(MainWindow);
        actionDelete_student->setObjectName(QString::fromUtf8("actionDelete_student"));
        QIcon icon53;
        icon53.addFile(QString::fromUtf8(":/images/images/student-remove32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_student->setIcon(icon53);
        actionAdd_session = new QAction(MainWindow);
        actionAdd_session->setObjectName(QString::fromUtf8("actionAdd_session"));
        QIcon icon54;
        icon54.addFile(QString::fromUtf8(":/images/images/savedsession-add32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_session->setIcon(icon54);
        actionDelete_session = new QAction(MainWindow);
        actionDelete_session->setObjectName(QString::fromUtf8("actionDelete_session"));
        QIcon icon55;
        icon55.addFile(QString::fromUtf8(":/images/images/savedsession-remove32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_session->setIcon(icon55);
        actionPrint_class_summary = new QAction(MainWindow);
        actionPrint_class_summary->setObjectName(QString::fromUtf8("actionPrint_class_summary"));
        actionPrint_class_summary->setIcon(icon29);
        actionBy_flag = new QAction(MainWindow);
        actionBy_flag->setObjectName(QString::fromUtf8("actionBy_flag"));
        actionBy_flag->setIcon(icon7);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainStackedWidget = new QStackedWidget(centralwidget);
        mainStackedWidget->setObjectName(QString::fromUtf8("mainStackedWidget"));
        welcomePage = new QWidget();
        welcomePage->setObjectName(QString::fromUtf8("welcomePage"));
        gridLayout1 = new QGridLayout(welcomePage);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 1, 0, 1, 1);

        frame = new QFrame(welcomePage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(491, 391));
        frame->setMaximumSize(QSize(491, 391));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label_icon = new QLabel(frame);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/images/images/itest.png")));
        label_icon->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        vboxLayout->addWidget(label_icon);

        label_icon_text = new QLabel(frame);
        label_icon_text->setObjectName(QString::fromUtf8("label_icon_text"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(20);
        label_icon_text->setFont(font);
        label_icon_text->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        vboxLayout->addWidget(label_icon_text);

        label_recent = new QLabel(frame);
        label_recent->setObjectName(QString::fromUtf8("label_recent"));

        vboxLayout->addWidget(label_recent);

        recentDBsListWidget = new QListWidget(frame);
        recentDBsListWidget->setObjectName(QString::fromUtf8("recentDBsListWidget"));
        recentDBsListWidget->setMaximumSize(QSize(469, 134));

        vboxLayout->addWidget(recentDBsListWidget);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnNew = new QPushButton(frame);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));
        btnNew->setIcon(icon1);
        btnNew->setIconSize(QSize(16, 16));

        hboxLayout->addWidget(btnNew);

        btnOpenOther = new QPushButton(frame);
        btnOpenOther->setObjectName(QString::fromUtf8("btnOpenOther"));
        QIcon icon56;
        icon56.addFile(QString::fromUtf8(":/images/images/folder_red.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOpenOther->setIcon(icon56);
        btnOpenOther->setIconSize(QSize(16, 16));

        hboxLayout->addWidget(btnOpenOther);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        btnOpenSelected = new QPushButton(frame);
        btnOpenSelected->setObjectName(QString::fromUtf8("btnOpenSelected"));
        btnOpenSelected->setIcon(icon2);
        btnOpenSelected->setIconSize(QSize(16, 16));

        hboxLayout->addWidget(btnOpenSelected);


        vboxLayout->addLayout(hboxLayout);


        gridLayout1->addWidget(frame, 1, 1, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem3, 1, 2, 1, 1);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem4, 2, 1, 1, 1);

        mainStackedWidget->addWidget(welcomePage);
        mainPage = new QWidget();
        mainPage->setObjectName(QString::fromUtf8("mainPage"));
        vboxLayout1 = new QVBoxLayout(mainPage);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(6, 6, 6, 6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        DBIGroupBox = new QGroupBox(mainPage);
        DBIGroupBox->setObjectName(QString::fromUtf8("DBIGroupBox"));
        hboxLayout1 = new QHBoxLayout(DBIGroupBox);
        hboxLayout1->setSpacing(9);
        hboxLayout1->setContentsMargins(9, 9, 9, 9);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        DBIDatabaseNameLabel = new QLabel(DBIGroupBox);
        DBIDatabaseNameLabel->setObjectName(QString::fromUtf8("DBIDatabaseNameLabel"));

        hboxLayout1->addWidget(DBIDatabaseNameLabel);

        DBIDatabaseNameLineEdit = new QLineEdit(DBIGroupBox);
        DBIDatabaseNameLineEdit->setObjectName(QString::fromUtf8("DBIDatabaseNameLineEdit"));

        hboxLayout1->addWidget(DBIDatabaseNameLineEdit);

        spacerItem5 = new QSpacerItem(60, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);

        DBIDateLabel = new QLabel(DBIGroupBox);
        DBIDateLabel->setObjectName(QString::fromUtf8("DBIDateLabel"));

        hboxLayout1->addWidget(DBIDateLabel);

        DBIDateEdit = new QDateEdit(DBIGroupBox);
        DBIDateEdit->setObjectName(QString::fromUtf8("DBIDateEdit"));
        DBIDateEdit->setEnabled(false);
        DBIDateEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        DBIDateEdit->setDateTime(QDateTime(QDate(2006, 12, 1), QTime(0, 0, 0)));
        DBIDateEdit->setDate(QDate(2006, 12, 1));

        hboxLayout1->addWidget(DBIDateEdit);

        DBIUseLastSaveDateCheckBox = new QCheckBox(DBIGroupBox);
        DBIUseLastSaveDateCheckBox->setObjectName(QString::fromUtf8("DBIUseLastSaveDateCheckBox"));
        DBIUseLastSaveDateCheckBox->setChecked(true);

        hboxLayout1->addWidget(DBIUseLastSaveDateCheckBox);


        vboxLayout1->addWidget(DBIGroupBox);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        LQGroupBox = new QGroupBox(mainPage);
        LQGroupBox->setObjectName(QString::fromUtf8("LQGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LQGroupBox->sizePolicy().hasHeightForWidth());
        LQGroupBox->setSizePolicy(sizePolicy);
        vboxLayout2 = new QVBoxLayout(LQGroupBox);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        LQAllRadioButton = new QRadioButton(LQGroupBox);
        LQAllRadioButton->setObjectName(QString::fromUtf8("LQAllRadioButton"));
        LQAllRadioButton->setChecked(true);

        hboxLayout3->addWidget(LQAllRadioButton);

        LQEasyRadioButton = new QRadioButton(LQGroupBox);
        LQEasyRadioButton->setObjectName(QString::fromUtf8("LQEasyRadioButton"));
        LQEasyRadioButton->setIcon(icon12);
        LQEasyRadioButton->setIconSize(QSize(16, 16));

        hboxLayout3->addWidget(LQEasyRadioButton);

        LQMediumRadioButton = new QRadioButton(LQGroupBox);
        LQMediumRadioButton->setObjectName(QString::fromUtf8("LQMediumRadioButton"));
        LQMediumRadioButton->setIcon(icon13);
        LQMediumRadioButton->setIconSize(QSize(16, 16));

        hboxLayout3->addWidget(LQMediumRadioButton);

        LQDifficultRadioButton = new QRadioButton(LQGroupBox);
        LQDifficultRadioButton->setObjectName(QString::fromUtf8("LQDifficultRadioButton"));
        LQDifficultRadioButton->setIcon(icon14);
        LQDifficultRadioButton->setIconSize(QSize(16, 16));

        hboxLayout3->addWidget(LQDifficultRadioButton);

        LQFlagRadioButton = new QRadioButton(LQGroupBox);
        LQFlagRadioButton->setObjectName(QString::fromUtf8("LQFlagRadioButton"));
        LQFlagRadioButton->setIcon(icon7);
        LQFlagRadioButton->setIconSize(QSize(16, 16));

        hboxLayout3->addWidget(LQFlagRadioButton);


        vboxLayout2->addLayout(hboxLayout3);

        LQFlagComboBox = new QComboBox(LQGroupBox);
        LQFlagComboBox->setObjectName(QString::fromUtf8("LQFlagComboBox"));

        vboxLayout2->addWidget(LQFlagComboBox);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        label_search = new QLabel(LQGroupBox);
        label_search->setObjectName(QString::fromUtf8("label_search"));

        hboxLayout4->addWidget(label_search);

        LQSearchLineEdit = new ExtendedLineEdit(LQGroupBox);
        LQSearchLineEdit->setObjectName(QString::fromUtf8("LQSearchLineEdit"));

        hboxLayout4->addWidget(LQSearchLineEdit);


        vboxLayout2->addLayout(hboxLayout4);

        LQListWidget = new QListWidget(LQGroupBox);
        LQListWidget->setObjectName(QString::fromUtf8("LQListWidget"));

        vboxLayout2->addWidget(LQListWidget);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        tbtnAddQuestion = new QToolButton(LQGroupBox);
        tbtnAddQuestion->setObjectName(QString::fromUtf8("tbtnAddQuestion"));
        tbtnAddQuestion->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tbtnAddQuestion->sizePolicy().hasHeightForWidth());
        tbtnAddQuestion->setSizePolicy(sizePolicy1);
        tbtnAddQuestion->setIcon(icon1);
        tbtnAddQuestion->setIconSize(QSize(16, 16));

        hboxLayout5->addWidget(tbtnAddQuestion);

        tbtnDuplicateQuestion = new QToolButton(LQGroupBox);
        tbtnDuplicateQuestion->setObjectName(QString::fromUtf8("tbtnDuplicateQuestion"));
        tbtnDuplicateQuestion->setEnabled(false);
        sizePolicy1.setHeightForWidth(tbtnDuplicateQuestion->sizePolicy().hasHeightForWidth());
        tbtnDuplicateQuestion->setSizePolicy(sizePolicy1);
        tbtnDuplicateQuestion->setIcon(icon18);
        tbtnDuplicateQuestion->setIconSize(QSize(16, 16));

        hboxLayout5->addWidget(tbtnDuplicateQuestion);

        tbtnDeleteQuestion = new QToolButton(LQGroupBox);
        tbtnDeleteQuestion->setObjectName(QString::fromUtf8("tbtnDeleteQuestion"));
        tbtnDeleteQuestion->setEnabled(false);
        sizePolicy1.setHeightForWidth(tbtnDeleteQuestion->sizePolicy().hasHeightForWidth());
        tbtnDeleteQuestion->setSizePolicy(sizePolicy1);
        tbtnDeleteQuestion->setIcon(icon19);
        tbtnDeleteQuestion->setIconSize(QSize(16, 16));

        hboxLayout5->addWidget(tbtnDeleteQuestion);

        tbtnMoveUp = new QToolButton(LQGroupBox);
        tbtnMoveUp->setObjectName(QString::fromUtf8("tbtnMoveUp"));
        sizePolicy1.setHeightForWidth(tbtnMoveUp->sizePolicy().hasHeightForWidth());
        tbtnMoveUp->setSizePolicy(sizePolicy1);
        tbtnMoveUp->setIcon(icon15);
        tbtnMoveUp->setIconSize(QSize(16, 16));

        hboxLayout5->addWidget(tbtnMoveUp);

        tbtnMoveDown = new QToolButton(LQGroupBox);
        tbtnMoveDown->setObjectName(QString::fromUtf8("tbtnMoveDown"));
        sizePolicy1.setHeightForWidth(tbtnMoveDown->sizePolicy().hasHeightForWidth());
        tbtnMoveDown->setSizePolicy(sizePolicy1);
        tbtnMoveDown->setIcon(icon16);
        tbtnMoveDown->setIconSize(QSize(16, 16));

        hboxLayout5->addWidget(tbtnMoveDown);


        vboxLayout2->addLayout(hboxLayout5);


        hboxLayout2->addWidget(LQGroupBox);

        SQGroupBox = new QGroupBox(mainPage);
        SQGroupBox->setObjectName(QString::fromUtf8("SQGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SQGroupBox->sizePolicy().hasHeightForWidth());
        SQGroupBox->setSizePolicy(sizePolicy2);
        SQGroupBox->setMinimumSize(QSize(401, 379));
        verticalLayout_2 = new QVBoxLayout(SQGroupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        SQQuestionNameLabel = new QLabel(SQGroupBox);
        SQQuestionNameLabel->setObjectName(QString::fromUtf8("SQQuestionNameLabel"));

        hboxLayout6->addWidget(SQQuestionNameLabel);

        SQQuestionNameLineEdit = new QLineEdit(SQGroupBox);
        SQQuestionNameLineEdit->setObjectName(QString::fromUtf8("SQQuestionNameLineEdit"));

        hboxLayout6->addWidget(SQQuestionNameLineEdit);


        verticalLayout_2->addLayout(hboxLayout6);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(6);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        SQFlagLabel = new QLabel(SQGroupBox);
        SQFlagLabel->setObjectName(QString::fromUtf8("SQFlagLabel"));

        hboxLayout7->addWidget(SQFlagLabel);

        SQFlagComboBox = new QComboBox(SQGroupBox);
        SQFlagComboBox->setObjectName(QString::fromUtf8("SQFlagComboBox"));
        SQFlagComboBox->setMinimumSize(QSize(130, 0));

        hboxLayout7->addWidget(SQFlagComboBox);

        spacerItem6 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem6);

        SQGroupLabel = new QLabel(SQGroupBox);
        SQGroupLabel->setObjectName(QString::fromUtf8("SQGroupLabel"));

        hboxLayout7->addWidget(SQGroupLabel);

        SQGroupLineEdit = new QLineEdit(SQGroupBox);
        SQGroupLineEdit->setObjectName(QString::fromUtf8("SQGroupLineEdit"));

        hboxLayout7->addWidget(SQGroupLineEdit);

        tbtnSearchByGroup = new QToolButton(SQGroupBox);
        tbtnSearchByGroup->setObjectName(QString::fromUtf8("tbtnSearchByGroup"));

        hboxLayout7->addWidget(tbtnSearchByGroup);

        spacerItem7 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem7);

        SQDifficultyLabel = new QLabel(SQGroupBox);
        SQDifficultyLabel->setObjectName(QString::fromUtf8("SQDifficultyLabel"));

        hboxLayout7->addWidget(SQDifficultyLabel);

        SQDifficultyComboBox = new QComboBox(SQGroupBox);
        SQDifficultyComboBox->addItem(icon12, QString());
        SQDifficultyComboBox->addItem(icon13, QString());
        SQDifficultyComboBox->addItem(icon14, QString());
        SQDifficultyComboBox->setObjectName(QString::fromUtf8("SQDifficultyComboBox"));
        SQDifficultyComboBox->setMinimumSize(QSize(130, 0));
        SQDifficultyComboBox->setMaximumSize(QSize(130, 16777215));

        hboxLayout7->addWidget(SQDifficultyComboBox);


        verticalLayout_2->addLayout(hboxLayout7);

        SQSplitter = new QSplitter(SQGroupBox);
        SQSplitter->setObjectName(QString::fromUtf8("SQSplitter"));
        SQSplitter->setOrientation(Qt::Vertical);
        SQQuestionTextEdit = new MTTextEdit(SQSplitter);
        SQQuestionTextEdit->setObjectName(QString::fromUtf8("SQQuestionTextEdit"));
        SQSplitter->addWidget(SQQuestionTextEdit);
        verticalLayout = new QWidget(SQSplitter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        vboxLayout3 = new QVBoxLayout(verticalLayout);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(9, 9, 9, 9);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(6);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        SQSVGLabel = new QLabel(verticalLayout);
        SQSVGLabel->setObjectName(QString::fromUtf8("SQSVGLabel"));

        hboxLayout8->addWidget(SQSVGLabel);

        tbtnAddSVG = new QToolButton(verticalLayout);
        tbtnAddSVG->setObjectName(QString::fromUtf8("tbtnAddSVG"));
        tbtnAddSVG->setIcon(icon45);
        tbtnAddSVG->setIconSize(QSize(16, 16));

        hboxLayout8->addWidget(tbtnAddSVG);

        tbtnRemoveSVG = new QToolButton(verticalLayout);
        tbtnRemoveSVG->setObjectName(QString::fromUtf8("tbtnRemoveSVG"));
        tbtnRemoveSVG->setIcon(icon46);
        tbtnRemoveSVG->setIconSize(QSize(16, 16));

        hboxLayout8->addWidget(tbtnRemoveSVG);

        tbtnEditSVG = new QToolButton(verticalLayout);
        tbtnEditSVG->setObjectName(QString::fromUtf8("tbtnEditSVG"));
        tbtnEditSVG->setIcon(icon47);
        tbtnEditSVG->setIconSize(QSize(16, 16));

        hboxLayout8->addWidget(tbtnEditSVG);

        tbtnExportSVG = new QToolButton(verticalLayout);
        tbtnExportSVG->setObjectName(QString::fromUtf8("tbtnExportSVG"));
        tbtnExportSVG->setIcon(icon48);
        tbtnExportSVG->setIconSize(QSize(16, 16));

        hboxLayout8->addWidget(tbtnExportSVG);


        vboxLayout3->addLayout(hboxLayout8);

        SQSVGListWidget = new QListWidget(verticalLayout);
        SQSVGListWidget->setObjectName(QString::fromUtf8("SQSVGListWidget"));
        SQSVGListWidget->setMinimumSize(QSize(0, 30));
        SQSVGListWidget->setIconSize(QSize(64, 64));
        SQSVGListWidget->setResizeMode(QListView::Adjust);
        SQSVGListWidget->setViewMode(QListView::IconMode);

        vboxLayout3->addWidget(SQSVGListWidget);

        SQSplitter->addWidget(verticalLayout);

        verticalLayout_2->addWidget(SQSplitter);

        SQAnswersEdit = new AnswersEdit(SQGroupBox);
        SQAnswersEdit->setObjectName(QString::fromUtf8("SQAnswersEdit"));

        verticalLayout_2->addWidget(SQAnswersEdit);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setSpacing(6);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        SQExplanationLabel = new QLabel(SQGroupBox);
        SQExplanationLabel->setObjectName(QString::fromUtf8("SQExplanationLabel"));

        hboxLayout9->addWidget(SQExplanationLabel);

        SQExplanationLineEdit = new QLineEdit(SQGroupBox);
        SQExplanationLineEdit->setObjectName(QString::fromUtf8("SQExplanationLineEdit"));

        hboxLayout9->addWidget(SQExplanationLineEdit);


        verticalLayout_2->addLayout(hboxLayout9);

        SQStatisticsLabel = new QLabel(SQGroupBox);
        SQStatisticsLabel->setObjectName(QString::fromUtf8("SQStatisticsLabel"));
        SQStatisticsLabel->setMinimumSize(QSize(0, 20));
        SQStatisticsLabel->setWordWrap(true);

        verticalLayout_2->addWidget(SQStatisticsLabel);

        SQButtonBox = new QDialogButtonBox(SQGroupBox);
        SQButtonBox->setObjectName(QString::fromUtf8("SQButtonBox"));
        SQButtonBox->setOrientation(Qt::Horizontal);
        SQButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Discard);

        verticalLayout_2->addWidget(SQButtonBox);


        hboxLayout2->addWidget(SQGroupBox);


        vboxLayout1->addLayout(hboxLayout2);

        mainStackedWidget->addWidget(mainPage);
        editCommentsPage = new QWidget();
        editCommentsPage->setObjectName(QString::fromUtf8("editCommentsPage"));
        verticalLayout_3 = new QVBoxLayout(editCommentsPage);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ECTextEdit = new MTTextEdit(editCommentsPage);
        ECTextEdit->setObjectName(QString::fromUtf8("ECTextEdit"));

        verticalLayout_3->addWidget(ECTextEdit);

        mainStackedWidget->addWidget(editCommentsPage);
        editFlagsPage = new QWidget();
        editFlagsPage->setObjectName(QString::fromUtf8("editFlagsPage"));
        vboxLayout4 = new QVBoxLayout(editFlagsPage);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setContentsMargins(6, 6, 6, 6);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        EFTreeWidget = new QTreeWidget(editFlagsPage);
        EFTreeWidget->setObjectName(QString::fromUtf8("EFTreeWidget"));
        EFTreeWidget->setIndentation(0);
        EFTreeWidget->setUniformRowHeights(true);

        vboxLayout4->addWidget(EFTreeWidget);

        EFButtonBox = new QDialogButtonBox(editFlagsPage);
        EFButtonBox->setObjectName(QString::fromUtf8("EFButtonBox"));
        EFButtonBox->setOrientation(Qt::Horizontal);
        EFButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Discard);

        vboxLayout4->addWidget(EFButtonBox);

        mainStackedWidget->addWidget(editFlagsPage);
        testSettingsPage = new QWidget();
        testSettingsPage->setObjectName(QString::fromUtf8("testSettingsPage"));
        gridLayout2 = new QGridLayout(testSettingsPage);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(6, 6, 6, 6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        TSAdvancedSetupGroupBox = new QGroupBox(testSettingsPage);
        TSAdvancedSetupGroupBox->setObjectName(QString::fromUtf8("TSAdvancedSetupGroupBox"));
        TSAdvancedSetupGroupBox->setCheckable(true);
        TSAdvancedSetupGroupBox->setChecked(false);
        vboxLayout5 = new QVBoxLayout(TSAdvancedSetupGroupBox);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setContentsMargins(9, 9, 9, 9);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(6);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        label_advanced_select = new QLabel(TSAdvancedSetupGroupBox);
        label_advanced_select->setObjectName(QString::fromUtf8("label_advanced_select"));

        hboxLayout10->addWidget(label_advanced_select);

        rbtnSelectFlags = new QRadioButton(TSAdvancedSetupGroupBox);
        rbtnSelectFlags->setObjectName(QString::fromUtf8("rbtnSelectFlags"));
        rbtnSelectFlags->setChecked(true);

        hboxLayout10->addWidget(rbtnSelectFlags);

        rbtnSelectQuestions = new QRadioButton(TSAdvancedSetupGroupBox);
        rbtnSelectQuestions->setObjectName(QString::fromUtf8("rbtnSelectQuestions"));

        hboxLayout10->addWidget(rbtnSelectQuestions);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout10->addItem(spacerItem8);


        vboxLayout5->addLayout(hboxLayout10);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(6);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        vboxLayout6 = new QVBoxLayout();
        vboxLayout6->setSpacing(6);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        label_exclude = new QLabel(TSAdvancedSetupGroupBox);
        label_exclude->setObjectName(QString::fromUtf8("label_exclude"));

        vboxLayout6->addWidget(label_exclude);

        hboxLayout12 = new QHBoxLayout();
        hboxLayout12->setSpacing(6);
        hboxLayout12->setObjectName(QString::fromUtf8("hboxLayout12"));
        label_search_available = new QLabel(TSAdvancedSetupGroupBox);
        label_search_available->setObjectName(QString::fromUtf8("label_search_available"));

        hboxLayout12->addWidget(label_search_available);

        TSSearchAvailableLineEdit = new ExtendedLineEdit(TSAdvancedSetupGroupBox);
        TSSearchAvailableLineEdit->setObjectName(QString::fromUtf8("TSSearchAvailableLineEdit"));

        hboxLayout12->addWidget(TSSearchAvailableLineEdit);


        vboxLayout6->addLayout(hboxLayout12);

        TSExcludeListWidget = new MTListWidget(TSAdvancedSetupGroupBox);
        TSExcludeListWidget->setObjectName(QString::fromUtf8("TSExcludeListWidget"));

        vboxLayout6->addWidget(TSExcludeListWidget);


        hboxLayout11->addLayout(vboxLayout6);

        vboxLayout7 = new QVBoxLayout();
        vboxLayout7->setSpacing(6);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout7->addItem(spacerItem9);

        btnAddToList = new QPushButton(TSAdvancedSetupGroupBox);
        btnAddToList->setObjectName(QString::fromUtf8("btnAddToList"));
        QIcon icon57;
        icon57.addFile(QString::fromUtf8(":/images/images/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddToList->setIcon(icon57);
        btnAddToList->setIconSize(QSize(16, 16));

        vboxLayout7->addWidget(btnAddToList);

        btnRemoveFromList = new QPushButton(TSAdvancedSetupGroupBox);
        btnRemoveFromList->setObjectName(QString::fromUtf8("btnRemoveFromList"));
        QIcon icon58;
        icon58.addFile(QString::fromUtf8(":/images/images/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveFromList->setIcon(icon58);
        btnRemoveFromList->setIconSize(QSize(16, 16));

        vboxLayout7->addWidget(btnRemoveFromList);

        spacerItem10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout7->addItem(spacerItem10);


        hboxLayout11->addLayout(vboxLayout7);

        vboxLayout8 = new QVBoxLayout();
        vboxLayout8->setSpacing(6);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        label_include = new QLabel(TSAdvancedSetupGroupBox);
        label_include->setObjectName(QString::fromUtf8("label_include"));

        vboxLayout8->addWidget(label_include);

        hboxLayout13 = new QHBoxLayout();
        hboxLayout13->setSpacing(6);
        hboxLayout13->setObjectName(QString::fromUtf8("hboxLayout13"));
        label_search_used = new QLabel(TSAdvancedSetupGroupBox);
        label_search_used->setObjectName(QString::fromUtf8("label_search_used"));

        hboxLayout13->addWidget(label_search_used);

        TSSearchUsedLineEdit = new ExtendedLineEdit(TSAdvancedSetupGroupBox);
        TSSearchUsedLineEdit->setObjectName(QString::fromUtf8("TSSearchUsedLineEdit"));

        hboxLayout13->addWidget(TSSearchUsedLineEdit);


        vboxLayout8->addLayout(hboxLayout13);

        TSIncludeTableWidget = new MTTableWidget(TSAdvancedSetupGroupBox);
        if (TSIncludeTableWidget->columnCount() < 3)
            TSIncludeTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TSIncludeTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TSIncludeTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TSIncludeTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        TSIncludeTableWidget->setObjectName(QString::fromUtf8("TSIncludeTableWidget"));
        TSIncludeTableWidget->setShowGrid(false);

        vboxLayout8->addWidget(TSIncludeTableWidget);


        hboxLayout11->addLayout(vboxLayout8);


        vboxLayout5->addLayout(hboxLayout11);


        gridLayout2->addWidget(TSAdvancedSetupGroupBox, 0, 0, 1, 1);

        TSScoringSystemGroupBox = new QGroupBox(testSettingsPage);
        TSScoringSystemGroupBox->setObjectName(QString::fromUtf8("TSScoringSystemGroupBox"));
        TSScoringSystemGroupBox->setCheckable(true);
        TSScoringSystemGroupBox->setChecked(false);
        gridLayout3 = new QGridLayout(TSScoringSystemGroupBox);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        TSAllowIncompleteAnswersCheckBox = new QCheckBox(TSScoringSystemGroupBox);
        TSAllowIncompleteAnswersCheckBox->setObjectName(QString::fromUtf8("TSAllowIncompleteAnswersCheckBox"));
        TSAllowIncompleteAnswersCheckBox->setChecked(true);

        gridLayout3->addWidget(TSAllowIncompleteAnswersCheckBox, 0, 0, 1, 3);

        TSSeparateSettingsForDifficultyLevelsCheckBox = new QCheckBox(TSScoringSystemGroupBox);
        TSSeparateSettingsForDifficultyLevelsCheckBox->setObjectName(QString::fromUtf8("TSSeparateSettingsForDifficultyLevelsCheckBox"));

        gridLayout3->addWidget(TSSeparateSettingsForDifficultyLevelsCheckBox, 2, 0, 1, 3);

        label_easy_correctanswer = new QLabel(TSScoringSystemGroupBox);
        label_easy_correctanswer->setObjectName(QString::fromUtf8("label_easy_correctanswer"));

        gridLayout3->addWidget(label_easy_correctanswer, 4, 1, 1, 1);

        TSEasyCorrectAnswerSpinBox = new QDoubleSpinBox(TSScoringSystemGroupBox);
        TSEasyCorrectAnswerSpinBox->setObjectName(QString::fromUtf8("TSEasyCorrectAnswerSpinBox"));
        sizePolicy1.setHeightForWidth(TSEasyCorrectAnswerSpinBox->sizePolicy().hasHeightForWidth());
        TSEasyCorrectAnswerSpinBox->setSizePolicy(sizePolicy1);
        TSEasyCorrectAnswerSpinBox->setMaximum(9);
        TSEasyCorrectAnswerSpinBox->setValue(1);

        gridLayout3->addWidget(TSEasyCorrectAnswerSpinBox, 4, 2, 1, 1);

        label_easy_incorrectanswer = new QLabel(TSScoringSystemGroupBox);
        label_easy_incorrectanswer->setObjectName(QString::fromUtf8("label_easy_incorrectanswer"));

        gridLayout3->addWidget(label_easy_incorrectanswer, 5, 1, 1, 1);

        TSEasyIncorrectAnswerSpinBox = new QDoubleSpinBox(TSScoringSystemGroupBox);
        TSEasyIncorrectAnswerSpinBox->setObjectName(QString::fromUtf8("TSEasyIncorrectAnswerSpinBox"));
        sizePolicy1.setHeightForWidth(TSEasyIncorrectAnswerSpinBox->sizePolicy().hasHeightForWidth());
        TSEasyIncorrectAnswerSpinBox->setSizePolicy(sizePolicy1);
        TSEasyIncorrectAnswerSpinBox->setMinimum(-9);
        TSEasyIncorrectAnswerSpinBox->setMaximum(0);
        TSEasyIncorrectAnswerSpinBox->setSingleStep(0.1);

        gridLayout3->addWidget(TSEasyIncorrectAnswerSpinBox, 5, 2, 1, 1);

        label_easy_missinganswer = new QLabel(TSScoringSystemGroupBox);
        label_easy_missinganswer->setObjectName(QString::fromUtf8("label_easy_missinganswer"));

        gridLayout3->addWidget(label_easy_missinganswer, 6, 1, 1, 1);

        TSEasyMissingAnswerSpinBox = new QDoubleSpinBox(TSScoringSystemGroupBox);
        TSEasyMissingAnswerSpinBox->setObjectName(QString::fromUtf8("TSEasyMissingAnswerSpinBox"));
        sizePolicy1.setHeightForWidth(TSEasyMissingAnswerSpinBox->sizePolicy().hasHeightForWidth());
        TSEasyMissingAnswerSpinBox->setSizePolicy(sizePolicy1);
        TSEasyMissingAnswerSpinBox->setMinimum(-9);
        TSEasyMissingAnswerSpinBox->setMaximum(0);
        TSEasyMissingAnswerSpinBox->setSingleStep(0.1);

        gridLayout3->addWidget(TSEasyMissingAnswerSpinBox, 6, 2, 1, 1);

        label_medium_correctanswer = new QLabel(TSScoringSystemGroupBox);
        label_medium_correctanswer->setObjectName(QString::fromUtf8("label_medium_correctanswer"));
        label_medium_correctanswer->setEnabled(false);

        gridLayout3->addWidget(label_medium_correctanswer, 8, 1, 1, 1);

        TSMediumCorrectAnswerSpinBox = new QDoubleSpinBox(TSScoringSystemGroupBox);
        TSMediumCorrectAnswerSpinBox->setObjectName(QString::fromUtf8("TSMediumCorrectAnswerSpinBox"));
        TSMediumCorrectAnswerSpinBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(TSMediumCorrectAnswerSpinBox->sizePolicy().hasHeightForWidth());
        TSMediumCorrectAnswerSpinBox->setSizePolicy(sizePolicy1);
        TSMediumCorrectAnswerSpinBox->setMaximum(9);
        TSMediumCorrectAnswerSpinBox->setValue(1);

        gridLayout3->addWidget(TSMediumCorrectAnswerSpinBox, 8, 2, 1, 1);

        label_medium_incorrectanswer = new QLabel(TSScoringSystemGroupBox);
        label_medium_incorrectanswer->setObjectName(QString::fromUtf8("label_medium_incorrectanswer"));
        label_medium_incorrectanswer->setEnabled(false);

        gridLayout3->addWidget(label_medium_incorrectanswer, 9, 1, 1, 1);

        TSMediumIncorrectAnswerSpinBox = new QDoubleSpinBox(TSScoringSystemGroupBox);
        TSMediumIncorrectAnswerSpinBox->setObjectName(QString::fromUtf8("TSMediumIncorrectAnswerSpinBox"));
        TSMediumIncorrectAnswerSpinBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(TSMediumIncorrectAnswerSpinBox->sizePolicy().hasHeightForWidth());
        TSMediumIncorrectAnswerSpinBox->setSizePolicy(sizePolicy1);
        TSMediumIncorrectAnswerSpinBox->setMinimum(-9);
        TSMediumIncorrectAnswerSpinBox->setMaximum(0);
        TSMediumIncorrectAnswerSpinBox->setSingleStep(0.1);

        gridLayout3->addWidget(TSMediumIncorrectAnswerSpinBox, 9, 2, 1, 1);

        label_medium_missinganswer = new QLabel(TSScoringSystemGroupBox);
        label_medium_missinganswer->setObjectName(QString::fromUtf8("label_medium_missinganswer"));
        label_medium_missinganswer->setEnabled(false);

        gridLayout3->addWidget(label_medium_missinganswer, 10, 1, 1, 1);

        TSMediumMissingAnswerSpinBox = new QDoubleSpinBox(TSScoringSystemGroupBox);
        TSMediumMissingAnswerSpinBox->setObjectName(QString::fromUtf8("TSMediumMissingAnswerSpinBox"));
        TSMediumMissingAnswerSpinBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(TSMediumMissingAnswerSpinBox->sizePolicy().hasHeightForWidth());
        TSMediumMissingAnswerSpinBox->setSizePolicy(sizePolicy1);
        TSMediumMissingAnswerSpinBox->setMinimum(-9);
        TSMediumMissingAnswerSpinBox->setMaximum(0);
        TSMediumMissingAnswerSpinBox->setSingleStep(0.1);

        gridLayout3->addWidget(TSMediumMissingAnswerSpinBox, 10, 2, 1, 1);

        label_difficult_correctanswer = new QLabel(TSScoringSystemGroupBox);
        label_difficult_correctanswer->setObjectName(QString::fromUtf8("label_difficult_correctanswer"));
        label_difficult_correctanswer->setEnabled(false);

        gridLayout3->addWidget(label_difficult_correctanswer, 12, 1, 1, 1);

        TSDifficultCorrectAnswerSpinBox = new QDoubleSpinBox(TSScoringSystemGroupBox);
        TSDifficultCorrectAnswerSpinBox->setObjectName(QString::fromUtf8("TSDifficultCorrectAnswerSpinBox"));
        TSDifficultCorrectAnswerSpinBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(TSDifficultCorrectAnswerSpinBox->sizePolicy().hasHeightForWidth());
        TSDifficultCorrectAnswerSpinBox->setSizePolicy(sizePolicy1);
        TSDifficultCorrectAnswerSpinBox->setMaximum(9);
        TSDifficultCorrectAnswerSpinBox->setValue(1);

        gridLayout3->addWidget(TSDifficultCorrectAnswerSpinBox, 12, 2, 1, 1);

        label_difficult_incorrectanswer = new QLabel(TSScoringSystemGroupBox);
        label_difficult_incorrectanswer->setObjectName(QString::fromUtf8("label_difficult_incorrectanswer"));
        label_difficult_incorrectanswer->setEnabled(false);

        gridLayout3->addWidget(label_difficult_incorrectanswer, 13, 1, 1, 1);

        TSDifficultIncorrectAnswerSpinBox = new QDoubleSpinBox(TSScoringSystemGroupBox);
        TSDifficultIncorrectAnswerSpinBox->setObjectName(QString::fromUtf8("TSDifficultIncorrectAnswerSpinBox"));
        TSDifficultIncorrectAnswerSpinBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(TSDifficultIncorrectAnswerSpinBox->sizePolicy().hasHeightForWidth());
        TSDifficultIncorrectAnswerSpinBox->setSizePolicy(sizePolicy1);
        TSDifficultIncorrectAnswerSpinBox->setMinimum(-9);
        TSDifficultIncorrectAnswerSpinBox->setMaximum(0);
        TSDifficultIncorrectAnswerSpinBox->setSingleStep(0.1);

        gridLayout3->addWidget(TSDifficultIncorrectAnswerSpinBox, 13, 2, 1, 1);

        label_difficult_missinganswer = new QLabel(TSScoringSystemGroupBox);
        label_difficult_missinganswer->setObjectName(QString::fromUtf8("label_difficult_missinganswer"));
        label_difficult_missinganswer->setEnabled(false);

        gridLayout3->addWidget(label_difficult_missinganswer, 14, 1, 1, 1);

        TSDifficultMissingAnswerSpinBox = new QDoubleSpinBox(TSScoringSystemGroupBox);
        TSDifficultMissingAnswerSpinBox->setObjectName(QString::fromUtf8("TSDifficultMissingAnswerSpinBox"));
        TSDifficultMissingAnswerSpinBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(TSDifficultMissingAnswerSpinBox->sizePolicy().hasHeightForWidth());
        TSDifficultMissingAnswerSpinBox->setSizePolicy(sizePolicy1);
        TSDifficultMissingAnswerSpinBox->setMinimum(-9);
        TSDifficultMissingAnswerSpinBox->setMaximum(0);
        TSDifficultMissingAnswerSpinBox->setSingleStep(0.1);

        gridLayout3->addWidget(TSDifficultMissingAnswerSpinBox, 14, 2, 1, 1);

        label_easy_icon1 = new QLabel(TSScoringSystemGroupBox);
        label_easy_icon1->setObjectName(QString::fromUtf8("label_easy_icon1"));
        label_easy_icon1->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_easy_icon1->sizePolicy().hasHeightForWidth());
        label_easy_icon1->setSizePolicy(sizePolicy3);
        label_easy_icon1->setPixmap(QPixmap(QString::fromUtf8(":/images/images/easy.png")));

        gridLayout3->addWidget(label_easy_icon1, 4, 0, 1, 1);

        label_easy_icon2 = new QLabel(TSScoringSystemGroupBox);
        label_easy_icon2->setObjectName(QString::fromUtf8("label_easy_icon2"));
        label_easy_icon2->setEnabled(false);
        sizePolicy3.setHeightForWidth(label_easy_icon2->sizePolicy().hasHeightForWidth());
        label_easy_icon2->setSizePolicy(sizePolicy3);
        label_easy_icon2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/easy.png")));

        gridLayout3->addWidget(label_easy_icon2, 5, 0, 1, 1);

        label_easy_icon3 = new QLabel(TSScoringSystemGroupBox);
        label_easy_icon3->setObjectName(QString::fromUtf8("label_easy_icon3"));
        label_easy_icon3->setEnabled(false);
        sizePolicy3.setHeightForWidth(label_easy_icon3->sizePolicy().hasHeightForWidth());
        label_easy_icon3->setSizePolicy(sizePolicy3);
        label_easy_icon3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/easy.png")));

        gridLayout3->addWidget(label_easy_icon3, 6, 0, 1, 1);

        label_medium_icon1 = new QLabel(TSScoringSystemGroupBox);
        label_medium_icon1->setObjectName(QString::fromUtf8("label_medium_icon1"));
        label_medium_icon1->setEnabled(false);
        sizePolicy3.setHeightForWidth(label_medium_icon1->sizePolicy().hasHeightForWidth());
        label_medium_icon1->setSizePolicy(sizePolicy3);
        label_medium_icon1->setPixmap(QPixmap(QString::fromUtf8(":/images/images/medium.png")));

        gridLayout3->addWidget(label_medium_icon1, 8, 0, 1, 1);

        label_medium_icon2 = new QLabel(TSScoringSystemGroupBox);
        label_medium_icon2->setObjectName(QString::fromUtf8("label_medium_icon2"));
        label_medium_icon2->setEnabled(false);
        sizePolicy3.setHeightForWidth(label_medium_icon2->sizePolicy().hasHeightForWidth());
        label_medium_icon2->setSizePolicy(sizePolicy3);
        label_medium_icon2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/medium.png")));

        gridLayout3->addWidget(label_medium_icon2, 9, 0, 1, 1);

        label_medium_icon3 = new QLabel(TSScoringSystemGroupBox);
        label_medium_icon3->setObjectName(QString::fromUtf8("label_medium_icon3"));
        label_medium_icon3->setEnabled(false);
        sizePolicy3.setHeightForWidth(label_medium_icon3->sizePolicy().hasHeightForWidth());
        label_medium_icon3->setSizePolicy(sizePolicy3);
        label_medium_icon3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/medium.png")));

        gridLayout3->addWidget(label_medium_icon3, 10, 0, 1, 1);

        label_difficult_icon1 = new QLabel(TSScoringSystemGroupBox);
        label_difficult_icon1->setObjectName(QString::fromUtf8("label_difficult_icon1"));
        label_difficult_icon1->setEnabled(false);
        sizePolicy3.setHeightForWidth(label_difficult_icon1->sizePolicy().hasHeightForWidth());
        label_difficult_icon1->setSizePolicy(sizePolicy3);
        label_difficult_icon1->setPixmap(QPixmap(QString::fromUtf8(":/images/images/difficult.png")));

        gridLayout3->addWidget(label_difficult_icon1, 12, 0, 1, 1);

        label_difficult_icon2 = new QLabel(TSScoringSystemGroupBox);
        label_difficult_icon2->setObjectName(QString::fromUtf8("label_difficult_icon2"));
        label_difficult_icon2->setEnabled(false);
        sizePolicy3.setHeightForWidth(label_difficult_icon2->sizePolicy().hasHeightForWidth());
        label_difficult_icon2->setSizePolicy(sizePolicy3);
        label_difficult_icon2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/difficult.png")));

        gridLayout3->addWidget(label_difficult_icon2, 13, 0, 1, 1);

        label_difficult_icon3 = new QLabel(TSScoringSystemGroupBox);
        label_difficult_icon3->setObjectName(QString::fromUtf8("label_difficult_icon3"));
        label_difficult_icon3->setEnabled(false);
        sizePolicy3.setHeightForWidth(label_difficult_icon3->sizePolicy().hasHeightForWidth());
        label_difficult_icon3->setSizePolicy(sizePolicy3);
        label_difficult_icon3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/difficult.png")));

        gridLayout3->addWidget(label_difficult_icon3, 14, 0, 1, 1);

        spacerItem11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem11, 11, 0, 1, 3);

        spacerItem12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem12, 7, 0, 1, 3);

        spacerItem13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem13, 3, 0, 1, 3);

        spacerItem14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem14, 1, 0, 1, 3);


        gridLayout2->addWidget(TSScoringSystemGroupBox, 0, 1, 1, 1);

        TSCommonSettingsGroupBox = new QGroupBox(testSettingsPage);
        TSCommonSettingsGroupBox->setObjectName(QString::fromUtf8("TSCommonSettingsGroupBox"));
        sizePolicy1.setHeightForWidth(TSCommonSettingsGroupBox->sizePolicy().hasHeightForWidth());
        TSCommonSettingsGroupBox->setSizePolicy(sizePolicy1);
        gridLayout4 = new QGridLayout(TSCommonSettingsGroupBox);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setHorizontalSpacing(9);
        gridLayout4->setVerticalSpacing(6);
        label_test_name = new QLabel(TSCommonSettingsGroupBox);
        label_test_name->setObjectName(QString::fromUtf8("label_test_name"));
        label_test_name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(label_test_name, 0, 0, 1, 1);

        TSCustomTestNameCheckBox = new QCheckBox(TSCommonSettingsGroupBox);
        TSCustomTestNameCheckBox->setObjectName(QString::fromUtf8("TSCustomTestNameCheckBox"));

        gridLayout4->addWidget(TSCustomTestNameCheckBox, 0, 1, 1, 1);

        TSTestNameLineEdit = new QLineEdit(TSCommonSettingsGroupBox);
        TSTestNameLineEdit->setObjectName(QString::fromUtf8("TSTestNameLineEdit"));
        TSTestNameLineEdit->setEnabled(false);

        gridLayout4->addWidget(TSTestNameLineEdit, 0, 2, 1, 2);

        label_allow_groups = new QLabel(TSCommonSettingsGroupBox);
        label_allow_groups->setObjectName(QString::fromUtf8("label_allow_groups"));
        label_allow_groups->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(label_allow_groups, 1, 0, 1, 1);

        TSGroupsCheckBox = new QCheckBox(TSCommonSettingsGroupBox);
        TSGroupsCheckBox->setObjectName(QString::fromUtf8("TSGroupsCheckBox"));

        gridLayout4->addWidget(TSGroupsCheckBox, 1, 1, 1, 3);

        label_qnum = new QLabel(TSCommonSettingsGroupBox);
        label_qnum->setObjectName(QString::fromUtf8("label_qnum"));
        label_qnum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(label_qnum, 2, 0, 1, 1);

        TSMaxQnumCheckBox = new QCheckBox(TSCommonSettingsGroupBox);
        TSMaxQnumCheckBox->setObjectName(QString::fromUtf8("TSMaxQnumCheckBox"));

        gridLayout4->addWidget(TSMaxQnumCheckBox, 2, 1, 1, 1);

        TSQnumSpinBox = new MTSpinBox(TSCommonSettingsGroupBox);
        TSQnumSpinBox->setObjectName(QString::fromUtf8("TSQnumSpinBox"));
        TSQnumSpinBox->setMinimumSize(QSize(54, 0));
        TSQnumSpinBox->setMinimum(1);
        TSQnumSpinBox->setValue(10);

        gridLayout4->addWidget(TSQnumSpinBox, 2, 2, 1, 1);

        label_passmark = new QLabel(TSCommonSettingsGroupBox);
        label_passmark->setObjectName(QString::fromUtf8("label_passmark"));
        label_passmark->setMinimumSize(QSize(130, 0));
        label_passmark->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(label_passmark, 2, 3, 1, 1);

        label_testtime = new QLabel(TSCommonSettingsGroupBox);
        label_testtime->setObjectName(QString::fromUtf8("label_testtime"));
        label_testtime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(label_testtime, 3, 0, 1, 1);

        rbtnTestTime = new QRadioButton(TSCommonSettingsGroupBox);
        rbtnTestTime->setObjectName(QString::fromUtf8("rbtnTestTime"));
        rbtnTestTime->setChecked(true);

        gridLayout4->addWidget(rbtnTestTime, 3, 1, 1, 1);

        TSTestTimeEdit = new QTimeEdit(TSCommonSettingsGroupBox);
        TSTestTimeEdit->setObjectName(QString::fromUtf8("TSTestTimeEdit"));

        gridLayout4->addWidget(TSTestTimeEdit, 3, 2, 1, 1);

        rbtnQuestionTime = new QRadioButton(TSCommonSettingsGroupBox);
        rbtnQuestionTime->setObjectName(QString::fromUtf8("rbtnQuestionTime"));

        gridLayout4->addWidget(rbtnQuestionTime, 4, 1, 1, 1);

        TSQuestionTimeEdit = new QTimeEdit(TSCommonSettingsGroupBox);
        TSQuestionTimeEdit->setObjectName(QString::fromUtf8("TSQuestionTimeEdit"));
        TSQuestionTimeEdit->setEnabled(false);

        gridLayout4->addWidget(TSQuestionTimeEdit, 4, 2, 1, 1);

        label_server_port = new QLabel(TSCommonSettingsGroupBox);
        label_server_port->setObjectName(QString::fromUtf8("label_server_port"));
        label_server_port->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(label_server_port, 5, 0, 1, 1);

        TSCustomServerPortCheckBox = new QCheckBox(TSCommonSettingsGroupBox);
        TSCustomServerPortCheckBox->setObjectName(QString::fromUtf8("TSCustomServerPortCheckBox"));

        gridLayout4->addWidget(TSCustomServerPortCheckBox, 5, 1, 1, 1);

        TSCustomServerPortSpinBox = new QSpinBox(TSCommonSettingsGroupBox);
        TSCustomServerPortSpinBox->setObjectName(QString::fromUtf8("TSCustomServerPortSpinBox"));
        TSCustomServerPortSpinBox->setEnabled(false);
        TSCustomServerPortSpinBox->setMaximum(9999999);
        TSCustomServerPortSpinBox->setValue(7777);

        gridLayout4->addWidget(TSCustomServerPortSpinBox, 5, 2, 1, 1);

        btnStartServer = new QPushButton(TSCommonSettingsGroupBox);
        btnStartServer->setObjectName(QString::fromUtf8("btnStartServer"));
        btnStartServer->setIcon(icon26);
        btnStartServer->setIconSize(QSize(16, 16));

        gridLayout4->addWidget(btnStartServer, 5, 6, 1, 1);

        TSPassMarkSpinBox = new MTSpinBox(TSCommonSettingsGroupBox);
        TSPassMarkSpinBox->setObjectName(QString::fromUtf8("TSPassMarkSpinBox"));
        TSPassMarkSpinBox->setMaximum(10);

        gridLayout4->addWidget(TSPassMarkSpinBox, 2, 4, 1, 1);

        TSHideQuestionNamesCheckBox = new QCheckBox(TSCommonSettingsGroupBox);
        TSHideQuestionNamesCheckBox->setObjectName(QString::fromUtf8("TSHideQuestionNamesCheckBox"));

        gridLayout4->addWidget(TSHideQuestionNamesCheckBox, 3, 4, 1, 3);

        TSHideCorrectAnswersCheckBox = new QCheckBox(TSCommonSettingsGroupBox);
        TSHideCorrectAnswersCheckBox->setObjectName(QString::fromUtf8("TSHideCorrectAnswersCheckBox"));

        gridLayout4->addWidget(TSHideCorrectAnswersCheckBox, 4, 4, 1, 3);

        label_other_settings = new QLabel(TSCommonSettingsGroupBox);
        label_other_settings->setObjectName(QString::fromUtf8("label_other_settings"));
        label_other_settings->setMinimumSize(QSize(130, 0));
        label_other_settings->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(label_other_settings, 3, 3, 1, 1);

        TSShuffleAnswersCheckBox = new QCheckBox(TSCommonSettingsGroupBox);
        TSShuffleAnswersCheckBox->setObjectName(QString::fromUtf8("TSShuffleAnswersCheckBox"));

        gridLayout4->addWidget(TSShuffleAnswersCheckBox, 1, 4, 1, 3);

        spacerItem15 = new QSpacerItem(261, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem15, 2, 5, 1, 1);

        TSDoNotPrintResultsCheckBox = new QCheckBox(TSCommonSettingsGroupBox);
        TSDoNotPrintResultsCheckBox->setObjectName(QString::fromUtf8("TSDoNotPrintResultsCheckBox"));

        gridLayout4->addWidget(TSDoNotPrintResultsCheckBox, 0, 4, 1, 3);


        gridLayout2->addWidget(TSCommonSettingsGroupBox, 1, 0, 1, 2);

        mainStackedWidget->addWidget(testSettingsPage);
        serverModePage = new QWidget();
        serverModePage->setObjectName(QString::fromUtf8("serverModePage"));
        vboxLayout9 = new QVBoxLayout(serverModePage);
        vboxLayout9->setSpacing(6);
        vboxLayout9->setContentsMargins(6, 6, 6, 6);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        SMInfoGroupBox = new QGroupBox(serverModePage);
        SMInfoGroupBox->setObjectName(QString::fromUtf8("SMInfoGroupBox"));
        hboxLayout14 = new QHBoxLayout(SMInfoGroupBox);
        hboxLayout14->setSpacing(6);
        hboxLayout14->setContentsMargins(9, 9, 9, 9);
        hboxLayout14->setObjectName(QString::fromUtf8("hboxLayout14"));
        SMIPortLabel = new QLabel(SMInfoGroupBox);
        SMIPortLabel->setObjectName(QString::fromUtf8("SMIPortLabel"));
        SMIPortLabel->setWordWrap(true);

        hboxLayout14->addWidget(SMIPortLabel);


        vboxLayout9->addWidget(SMInfoGroupBox);

        hboxLayout15 = new QHBoxLayout();
        hboxLayout15->setSpacing(6);
        hboxLayout15->setObjectName(QString::fromUtf8("hboxLayout15"));
        SMClientsGroupBox = new QGroupBox(serverModePage);
        SMClientsGroupBox->setObjectName(QString::fromUtf8("SMClientsGroupBox"));
        SMClientsGroupBox->setMaximumSize(QSize(200, 16777215));
        vboxLayout10 = new QVBoxLayout(SMClientsGroupBox);
        vboxLayout10->setSpacing(6);
        vboxLayout10->setContentsMargins(9, 9, 9, 9);
        vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
        SMLCListWidget = new QListWidget(SMClientsGroupBox);
        SMLCListWidget->setObjectName(QString::fromUtf8("SMLCListWidget"));

        vboxLayout10->addWidget(SMLCListWidget);


        hboxLayout15->addWidget(SMClientsGroupBox);

        SMSelectedClientGroupBox = new QGroupBox(serverModePage);
        SMSelectedClientGroupBox->setObjectName(QString::fromUtf8("SMSelectedClientGroupBox"));
        SMSelectedClientGroupBox->setEnabled(false);
        gridLayout5 = new QGridLayout(SMSelectedClientGroupBox);
        gridLayout5->setSpacing(6);
        gridLayout5->setContentsMargins(9, 9, 9, 9);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        SMSC_label_4 = new QLabel(SMSelectedClientGroupBox);
        SMSC_label_4->setObjectName(QString::fromUtf8("SMSC_label_4"));
        SMSC_label_4->setTextFormat(Qt::RichText);

        gridLayout5->addWidget(SMSC_label_4, 0, 0, 1, 1);

        SMSCNameLabel = new QLabel(SMSelectedClientGroupBox);
        SMSCNameLabel->setObjectName(QString::fromUtf8("SMSCNameLabel"));

        gridLayout5->addWidget(SMSCNameLabel, 0, 1, 1, 1);

        spacerItem16 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacerItem16, 0, 2, 1, 1);

        SMSC_label_1 = new QLabel(SMSelectedClientGroupBox);
        SMSC_label_1->setObjectName(QString::fromUtf8("SMSC_label_1"));
        SMSC_label_1->setTextFormat(Qt::RichText);

        gridLayout5->addWidget(SMSC_label_1, 1, 0, 1, 1);

        SMSCStatusLabel = new QLabel(SMSelectedClientGroupBox);
        SMSCStatusLabel->setObjectName(QString::fromUtf8("SMSCStatusLabel"));

        gridLayout5->addWidget(SMSCStatusLabel, 1, 1, 1, 1);

        spacerItem17 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacerItem17, 1, 2, 1, 1);

        SMSC_label_2 = new QLabel(SMSelectedClientGroupBox);
        SMSC_label_2->setObjectName(QString::fromUtf8("SMSC_label_2"));
        SMSC_label_2->setTextFormat(Qt::RichText);

        gridLayout5->addWidget(SMSC_label_2, 2, 0, 1, 1);

        SMSCScoreLabel = new QLabel(SMSelectedClientGroupBox);
        SMSCScoreLabel->setObjectName(QString::fromUtf8("SMSCScoreLabel"));

        gridLayout5->addWidget(SMSCScoreLabel, 2, 1, 1, 1);

        spacerItem18 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacerItem18, 2, 2, 1, 1);

        SMSC_label_3 = new QLabel(SMSelectedClientGroupBox);
        SMSC_label_3->setObjectName(QString::fromUtf8("SMSC_label_3"));
        SMSC_label_3->setTextFormat(Qt::RichText);

        gridLayout5->addWidget(SMSC_label_3, 3, 0, 1, 3);

        SMSCResultsTableWidget = new QTableWidget(SMSelectedClientGroupBox);
        if (SMSCResultsTableWidget->columnCount() < 4)
            SMSCResultsTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        SMSCResultsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        SMSCResultsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        SMSCResultsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        SMSCResultsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        SMSCResultsTableWidget->setObjectName(QString::fromUtf8("SMSCResultsTableWidget"));

        gridLayout5->addWidget(SMSCResultsTableWidget, 4, 0, 1, 3);


        hboxLayout15->addWidget(SMSelectedClientGroupBox);


        vboxLayout9->addLayout(hboxLayout15);

        SMLogGroupBox = new QGroupBox(serverModePage);
        SMLogGroupBox->setObjectName(QString::fromUtf8("SMLogGroupBox"));
        SMLogGroupBox->setMinimumSize(QSize(0, 70));
        SMLogGroupBox->setMaximumSize(QSize(16777215, 175));
        vboxLayout11 = new QVBoxLayout(SMLogGroupBox);
        vboxLayout11->setSpacing(6);
        vboxLayout11->setContentsMargins(9, 9, 9, 9);
        vboxLayout11->setObjectName(QString::fromUtf8("vboxLayout11"));
        SMSLListWidget = new QListWidget(SMLogGroupBox);
        SMSLListWidget->setObjectName(QString::fromUtf8("SMSLListWidget"));

        vboxLayout11->addWidget(SMSLListWidget);


        vboxLayout9->addWidget(SMLogGroupBox);

        mainStackedWidget->addWidget(serverModePage);
        savedSessionsPage = new QWidget();
        savedSessionsPage->setObjectName(QString::fromUtf8("savedSessionsPage"));
        hboxLayout16 = new QHBoxLayout(savedSessionsPage);
        hboxLayout16->setSpacing(6);
        hboxLayout16->setContentsMargins(6, 6, 6, 6);
        hboxLayout16->setObjectName(QString::fromUtf8("hboxLayout16"));
        vboxLayout12 = new QVBoxLayout();
        vboxLayout12->setSpacing(0);
        vboxLayout12->setObjectName(QString::fromUtf8("vboxLayout12"));
        SVLSGroupBox = new QGroupBox(savedSessionsPage);
        SVLSGroupBox->setObjectName(QString::fromUtf8("SVLSGroupBox"));
        SVLSGroupBox->setMinimumSize(QSize(240, 0));
        SVLSGroupBox->setMaximumSize(QSize(240, 16777215));
        vboxLayout13 = new QVBoxLayout(SVLSGroupBox);
        vboxLayout13->setSpacing(6);
        vboxLayout13->setContentsMargins(9, 9, 9, 9);
        vboxLayout13->setObjectName(QString::fromUtf8("vboxLayout13"));
        hboxLayout17 = new QHBoxLayout();
        hboxLayout17->setSpacing(6);
        hboxLayout17->setObjectName(QString::fromUtf8("hboxLayout17"));
        label_search_sessions = new QLabel(SVLSGroupBox);
        label_search_sessions->setObjectName(QString::fromUtf8("label_search_sessions"));

        hboxLayout17->addWidget(label_search_sessions);

        SVLSSearchLineEdit = new ExtendedLineEdit(SVLSGroupBox);
        SVLSSearchLineEdit->setObjectName(QString::fromUtf8("SVLSSearchLineEdit"));

        hboxLayout17->addWidget(SVLSSearchLineEdit);


        vboxLayout13->addLayout(hboxLayout17);

        SVLSListWidget = new MTListWidget(SVLSGroupBox);
        SVLSListWidget->setObjectName(QString::fromUtf8("SVLSListWidget"));

        vboxLayout13->addWidget(SVLSListWidget);

        label_archived_sessions = new QLabel(SVLSGroupBox);
        label_archived_sessions->setObjectName(QString::fromUtf8("label_archived_sessions"));

        vboxLayout13->addWidget(label_archived_sessions);

        SVLASListWidget = new MTListWidget(SVLSGroupBox);
        SVLASListWidget->setObjectName(QString::fromUtf8("SVLASListWidget"));

        vboxLayout13->addWidget(SVLASListWidget);


        vboxLayout12->addWidget(SVLSGroupBox);


        hboxLayout16->addLayout(vboxLayout12);

        SVSelectedSessionWidget = new QWidget(savedSessionsPage);
        SVSelectedSessionWidget->setObjectName(QString::fromUtf8("SVSelectedSessionWidget"));
        SVSelectedSessionWidget->setEnabled(false);
        vboxLayout14 = new QVBoxLayout(SVSelectedSessionWidget);
        vboxLayout14->setSpacing(6);
        vboxLayout14->setContentsMargins(0, 0, 0, 0);
        vboxLayout14->setObjectName(QString::fromUtf8("vboxLayout14"));
        SVCSGroupBox = new QGroupBox(SVSelectedSessionWidget);
        SVCSGroupBox->setObjectName(QString::fromUtf8("SVCSGroupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(SVCSGroupBox->sizePolicy().hasHeightForWidth());
        SVCSGroupBox->setSizePolicy(sizePolicy4);
        gridLayout6 = new QGridLayout(SVCSGroupBox);
        gridLayout6->setSpacing(6);
        gridLayout6->setContentsMargins(9, 9, 9, 9);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        label_current_session_name = new QLabel(SVCSGroupBox);
        label_current_session_name->setObjectName(QString::fromUtf8("label_current_session_name"));
        label_current_session_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout6->addWidget(label_current_session_name, 0, 0, 1, 1);

        SVNameLabel = new QLabel(SVCSGroupBox);
        SVNameLabel->setObjectName(QString::fromUtf8("SVNameLabel"));
        SVNameLabel->setMinimumSize(QSize(150, 0));
        SVNameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout6->addWidget(SVNameLabel, 0, 1, 1, 1);

        label_current_session_passmark = new QLabel(SVCSGroupBox);
        label_current_session_passmark->setObjectName(QString::fromUtf8("label_current_session_passmark"));
        label_current_session_passmark->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout6->addWidget(label_current_session_passmark, 0, 2, 2, 1);

        SVPassMarkLabel = new QLabel(SVCSGroupBox);
        SVPassMarkLabel->setObjectName(QString::fromUtf8("SVPassMarkLabel"));
        SVPassMarkLabel->setMinimumSize(QSize(50, 0));
        SVPassMarkLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout6->addWidget(SVPassMarkLabel, 0, 3, 2, 1);

        label_overall_results = new QLabel(SVCSGroupBox);
        label_overall_results->setObjectName(QString::fromUtf8("label_overall_results"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_overall_results->sizePolicy().hasHeightForWidth());
        label_overall_results->setSizePolicy(sizePolicy5);
        label_overall_results->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout6->addWidget(label_overall_results, 0, 4, 1, 1);

        label_overall_score_bad = new QLabel(SVCSGroupBox);
        label_overall_score_bad->setObjectName(QString::fromUtf8("label_overall_score_bad"));
        label_overall_score_bad->setMaximumSize(QSize(75, 16777215));
        label_overall_score_bad->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout6->addWidget(label_overall_score_bad, 0, 5, 1, 1);

        label_overall_score_good = new QLabel(SVCSGroupBox);
        label_overall_score_good->setObjectName(QString::fromUtf8("label_overall_score_good"));
        label_overall_score_good->setMaximumSize(QSize(75, 16777215));
        label_overall_score_good->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout6->addWidget(label_overall_score_good, 0, 6, 1, 1);

        label_current_session_datetime = new QLabel(SVCSGroupBox);
        label_current_session_datetime->setObjectName(QString::fromUtf8("label_current_session_datetime"));
        label_current_session_datetime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout6->addWidget(label_current_session_datetime, 1, 0, 1, 1);

        SVDateTimeLabel = new QLabel(SVCSGroupBox);
        SVDateTimeLabel->setObjectName(QString::fromUtf8("SVDateTimeLabel"));
        SVDateTimeLabel->setMinimumSize(QSize(150, 0));
        SVDateTimeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout6->addWidget(SVDateTimeLabel, 1, 1, 1, 1);

        SVOverallResultsLabel = new QLabel(SVCSGroupBox);
        SVOverallResultsLabel->setObjectName(QString::fromUtf8("SVOverallResultsLabel"));
        SVOverallResultsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout6->addWidget(SVOverallResultsLabel, 1, 4, 1, 1);

        SVOverallResultsProgressBar = new QProgressBar(SVCSGroupBox);
        SVOverallResultsProgressBar->setObjectName(QString::fromUtf8("SVOverallResultsProgressBar"));
        SVOverallResultsProgressBar->setMaximumSize(QSize(156, 16777215));
        SVOverallResultsProgressBar->setValue(24);
        SVOverallResultsProgressBar->setAlignment(Qt::AlignHCenter);
        SVOverallResultsProgressBar->setTextVisible(false);
        SVOverallResultsProgressBar->setOrientation(Qt::Horizontal);

        gridLayout6->addWidget(SVOverallResultsProgressBar, 1, 5, 1, 2);


        vboxLayout14->addWidget(SVCSGroupBox);

        SVSplitter = new QSplitter(SVSelectedSessionWidget);
        SVSplitter->setObjectName(QString::fromUtf8("SVSplitter"));
        SVSplitter->setOrientation(Qt::Vertical);
        SVSplitter->setOpaqueResize(false);
        layoutWidget = new QWidget(SVSplitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        hboxLayout18 = new QHBoxLayout(layoutWidget);
        hboxLayout18->setSpacing(6);
        hboxLayout18->setContentsMargins(9, 9, 9, 9);
        hboxLayout18->setObjectName(QString::fromUtf8("hboxLayout18"));
        hboxLayout18->setContentsMargins(0, 0, 0, 0);
        SVLCGroupBox = new QGroupBox(layoutWidget);
        SVLCGroupBox->setObjectName(QString::fromUtf8("SVLCGroupBox"));
        SVLCGroupBox->setMinimumSize(QSize(200, 0));
        SVLCGroupBox->setMaximumSize(QSize(200, 16777215));
        vboxLayout15 = new QVBoxLayout(SVLCGroupBox);
        vboxLayout15->setSpacing(6);
        vboxLayout15->setContentsMargins(9, 9, 9, 9);
        vboxLayout15->setObjectName(QString::fromUtf8("vboxLayout15"));
        SVLCListWidget = new QListWidget(SVLCGroupBox);
        SVLCListWidget->setObjectName(QString::fromUtf8("SVLCListWidget"));

        vboxLayout15->addWidget(SVLCListWidget);


        hboxLayout18->addWidget(SVLCGroupBox);

        SVStudentTabWidget = new QTabWidget(layoutWidget);
        SVStudentTabWidget->setObjectName(QString::fromUtf8("SVStudentTabWidget"));
        selectedStudentTab = new QWidget();
        selectedStudentTab->setObjectName(QString::fromUtf8("selectedStudentTab"));
        gridLayout7 = new QGridLayout(selectedStudentTab);
        gridLayout7->setSpacing(6);
        gridLayout7->setContentsMargins(9, 9, 9, 9);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        SVStudent_label_1 = new QLabel(selectedStudentTab);
        SVStudent_label_1->setObjectName(QString::fromUtf8("SVStudent_label_1"));
        SVStudent_label_1->setTextFormat(Qt::RichText);

        gridLayout7->addWidget(SVStudent_label_1, 0, 0, 1, 1);

        SVStudentNameLabel = new QLabel(selectedStudentTab);
        SVStudentNameLabel->setObjectName(QString::fromUtf8("SVStudentNameLabel"));

        gridLayout7->addWidget(SVStudentNameLabel, 0, 1, 1, 1);

        spacerItem19 = new QSpacerItem(16, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout7->addItem(spacerItem19, 0, 2, 1, 1);

        SVStudent_label_2 = new QLabel(selectedStudentTab);
        SVStudent_label_2->setObjectName(QString::fromUtf8("SVStudent_label_2"));
        SVStudent_label_2->setTextFormat(Qt::RichText);

        gridLayout7->addWidget(SVStudent_label_2, 1, 0, 1, 1);

        SVStudentScoreLabel = new QLabel(selectedStudentTab);
        SVStudentScoreLabel->setObjectName(QString::fromUtf8("SVStudentScoreLabel"));

        gridLayout7->addWidget(SVStudentScoreLabel, 1, 1, 1, 1);

        spacerItem20 = new QSpacerItem(16, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout7->addItem(spacerItem20, 1, 2, 1, 1);

        SVStudent_label_3 = new QLabel(selectedStudentTab);
        SVStudent_label_3->setObjectName(QString::fromUtf8("SVStudent_label_3"));
        SVStudent_label_3->setTextFormat(Qt::RichText);

        gridLayout7->addWidget(SVStudent_label_3, 2, 0, 1, 3);

        SVStudentResultsTableWidget = new QTableWidget(selectedStudentTab);
        if (SVStudentResultsTableWidget->columnCount() < 4)
            SVStudentResultsTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        SVStudentResultsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        SVStudentResultsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        SVStudentResultsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        SVStudentResultsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        SVStudentResultsTableWidget->setObjectName(QString::fromUtf8("SVStudentResultsTableWidget"));

        gridLayout7->addWidget(SVStudentResultsTableWidget, 3, 0, 1, 3);

        SVStudentTabWidget->addTab(selectedStudentTab, QString());
        passMarkDetailsTab = new QWidget();
        passMarkDetailsTab->setObjectName(QString::fromUtf8("passMarkDetailsTab"));
        vboxLayout16 = new QVBoxLayout(passMarkDetailsTab);
        vboxLayout16->setSpacing(6);
        vboxLayout16->setContentsMargins(9, 9, 9, 9);
        vboxLayout16->setObjectName(QString::fromUtf8("vboxLayout16"));
        hboxLayout19 = new QHBoxLayout();
        hboxLayout19->setSpacing(6);
        hboxLayout19->setObjectName(QString::fromUtf8("hboxLayout19"));
        label_search_details = new QLabel(passMarkDetailsTab);
        label_search_details->setObjectName(QString::fromUtf8("label_search_details"));

        hboxLayout19->addWidget(label_search_details);

        SVSearchDetailsLineEdit = new ExtendedLineEdit(passMarkDetailsTab);
        SVSearchDetailsLineEdit->setObjectName(QString::fromUtf8("SVSearchDetailsLineEdit"));

        hboxLayout19->addWidget(SVSearchDetailsLineEdit);


        vboxLayout16->addLayout(hboxLayout19);

        SVPassMarkTableWidget = new MTTableWidget(passMarkDetailsTab);
        if (SVPassMarkTableWidget->columnCount() < 2)
            SVPassMarkTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        SVPassMarkTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        SVPassMarkTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        SVPassMarkTableWidget->setObjectName(QString::fromUtf8("SVPassMarkTableWidget"));
        SVPassMarkTableWidget->setShowGrid(false);

        vboxLayout16->addWidget(SVPassMarkTableWidget);

        SVStudentTabWidget->addTab(passMarkDetailsTab, QString());
        scoringSystemTab = new QWidget();
        scoringSystemTab->setObjectName(QString::fromUtf8("scoringSystemTab"));
        vboxLayout17 = new QVBoxLayout(scoringSystemTab);
        vboxLayout17->setSpacing(6);
        vboxLayout17->setContentsMargins(9, 9, 9, 9);
        vboxLayout17->setObjectName(QString::fromUtf8("vboxLayout17"));
        SVScoringSystemTableWidget = new QTableWidget(scoringSystemTab);
        if (SVScoringSystemTableWidget->columnCount() < 2)
            SVScoringSystemTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        if (SVScoringSystemTableWidget->rowCount() < 10)
            SVScoringSystemTableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setIcon(icon12);
        SVScoringSystemTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setIcon(icon12);
        SVScoringSystemTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setIcon(icon12);
        SVScoringSystemTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setIcon(icon13);
        SVScoringSystemTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setIcon(icon13);
        SVScoringSystemTableWidget->setVerticalHeaderItem(5, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setIcon(icon13);
        SVScoringSystemTableWidget->setVerticalHeaderItem(6, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setIcon(icon14);
        SVScoringSystemTableWidget->setVerticalHeaderItem(7, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setIcon(icon14);
        SVScoringSystemTableWidget->setVerticalHeaderItem(8, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setIcon(icon14);
        SVScoringSystemTableWidget->setVerticalHeaderItem(9, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setItem(0, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setItem(1, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setItem(2, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setItem(3, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setItem(4, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setItem(5, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setItem(6, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setItem(7, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setItem(8, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        SVScoringSystemTableWidget->setItem(9, 0, __qtablewidgetitem34);
        SVScoringSystemTableWidget->setObjectName(QString::fromUtf8("SVScoringSystemTableWidget"));

        vboxLayout17->addWidget(SVScoringSystemTableWidget);

        SVStudentTabWidget->addTab(scoringSystemTab, QString());

        hboxLayout18->addWidget(SVStudentTabWidget);

        SVSplitter->addWidget(layoutWidget);
        SVLogGroupBox = new QGroupBox(SVSplitter);
        SVLogGroupBox->setObjectName(QString::fromUtf8("SVLogGroupBox"));
        SVLogGroupBox->setMinimumSize(QSize(0, 70));
        SVLogGroupBox->setMaximumSize(QSize(16777215, 175));
        vboxLayout18 = new QVBoxLayout(SVLogGroupBox);
        vboxLayout18->setSpacing(6);
        vboxLayout18->setContentsMargins(9, 9, 9, 9);
        vboxLayout18->setObjectName(QString::fromUtf8("vboxLayout18"));
        SVLogListWidget = new QListWidget(SVLogGroupBox);
        SVLogListWidget->setObjectName(QString::fromUtf8("SVLogListWidget"));

        vboxLayout18->addWidget(SVLogListWidget);

        SVSplitter->addWidget(SVLogGroupBox);

        vboxLayout14->addWidget(SVSplitter);


        hboxLayout16->addWidget(SVSelectedSessionWidget);

        mainStackedWidget->addWidget(savedSessionsPage);
        classesPage = new QWidget();
        classesPage->setObjectName(QString::fromUtf8("classesPage"));
        gridLayout8 = new QGridLayout(classesPage);
        gridLayout8->setSpacing(6);
        gridLayout8->setContentsMargins(6, 6, 6, 6);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        CLLCGroupBox = new QGroupBox(classesPage);
        CLLCGroupBox->setObjectName(QString::fromUtf8("CLLCGroupBox"));
        CLLCGroupBox->setMinimumSize(QSize(240, 0));
        CLLCGroupBox->setMaximumSize(QSize(240, 16777215));
        vboxLayout19 = new QVBoxLayout(CLLCGroupBox);
        vboxLayout19->setSpacing(6);
        vboxLayout19->setContentsMargins(9, 9, 9, 9);
        vboxLayout19->setObjectName(QString::fromUtf8("vboxLayout19"));
        hboxLayout20 = new QHBoxLayout();
        hboxLayout20->setSpacing(6);
        hboxLayout20->setObjectName(QString::fromUtf8("hboxLayout20"));
        label_search_classes = new QLabel(CLLCGroupBox);
        label_search_classes->setObjectName(QString::fromUtf8("label_search_classes"));

        hboxLayout20->addWidget(label_search_classes);

        CLLCSearchLineEdit = new ExtendedLineEdit(CLLCGroupBox);
        CLLCSearchLineEdit->setObjectName(QString::fromUtf8("CLLCSearchLineEdit"));

        hboxLayout20->addWidget(CLLCSearchLineEdit);


        vboxLayout19->addLayout(hboxLayout20);

        CLLCListWidget = new MTListWidget(CLLCGroupBox);
        CLLCListWidget->setObjectName(QString::fromUtf8("CLLCListWidget"));

        vboxLayout19->addWidget(CLLCListWidget);

        hboxLayout21 = new QHBoxLayout();
        hboxLayout21->setSpacing(6);
        hboxLayout21->setObjectName(QString::fromUtf8("hboxLayout21"));
        tbtnAdd_class = new MTToolButton(CLLCGroupBox);
        tbtnAdd_class->setObjectName(QString::fromUtf8("tbtnAdd_class"));
        tbtnAdd_class->setIconSize(QSize(16, 16));
        tbtnAdd_class->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout21->addWidget(tbtnAdd_class);

        spacerItem21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout21->addItem(spacerItem21);

        tbtnDelete_class = new MTToolButton(CLLCGroupBox);
        tbtnDelete_class->setObjectName(QString::fromUtf8("tbtnDelete_class"));
        tbtnDelete_class->setIconSize(QSize(16, 16));
        tbtnDelete_class->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout21->addWidget(tbtnDelete_class);


        vboxLayout19->addLayout(hboxLayout21);


        gridLayout8->addWidget(CLLCGroupBox, 0, 0, 2, 1);

        CLSCGroupBox = new QGroupBox(classesPage);
        CLSCGroupBox->setObjectName(QString::fromUtf8("CLSCGroupBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(CLSCGroupBox->sizePolicy().hasHeightForWidth());
        CLSCGroupBox->setSizePolicy(sizePolicy6);
        gridLayout9 = new QGridLayout(CLSCGroupBox);
        gridLayout9->setSpacing(6);
        gridLayout9->setContentsMargins(9, 9, 9, 9);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        CLSCNameLabel = new QLabel(CLSCGroupBox);
        CLSCNameLabel->setObjectName(QString::fromUtf8("CLSCNameLabel"));
        CLSCNameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout9->addWidget(CLSCNameLabel, 0, 0, 1, 1);

        CLSCNameLineEdit = new QLineEdit(CLSCGroupBox);
        CLSCNameLineEdit->setObjectName(QString::fromUtf8("CLSCNameLineEdit"));

        gridLayout9->addWidget(CLSCNameLineEdit, 0, 1, 1, 1);

        CLSCFirstYearLabel = new QLabel(CLSCGroupBox);
        CLSCFirstYearLabel->setObjectName(QString::fromUtf8("CLSCFirstYearLabel"));
        CLSCFirstYearLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout9->addWidget(CLSCFirstYearLabel, 0, 3, 1, 1);

        CLSCFirstYearSpinBox = new MTSpinBox(CLSCGroupBox);
        CLSCFirstYearSpinBox->setObjectName(QString::fromUtf8("CLSCFirstYearSpinBox"));
        CLSCFirstYearSpinBox->setMinimum(1900);
        CLSCFirstYearSpinBox->setMaximum(3000);
        CLSCFirstYearSpinBox->setValue(2007);

        gridLayout9->addWidget(CLSCFirstYearSpinBox, 0, 4, 1, 1);

        CLSCLastYearLabel = new QLabel(CLSCGroupBox);
        CLSCLastYearLabel->setObjectName(QString::fromUtf8("CLSCLastYearLabel"));
        CLSCLastYearLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout9->addWidget(CLSCLastYearLabel, 0, 6, 1, 1);

        CLSCLastYearSpinBox = new MTSpinBox(CLSCGroupBox);
        CLSCLastYearSpinBox->setObjectName(QString::fromUtf8("CLSCLastYearSpinBox"));
        CLSCLastYearSpinBox->setMinimum(1900);
        CLSCLastYearSpinBox->setMaximum(3000);
        CLSCLastYearSpinBox->setValue(2011);

        gridLayout9->addWidget(CLSCLastYearSpinBox, 0, 7, 1, 1);

        spacerItem22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout9->addItem(spacerItem22, 0, 2, 1, 1);

        spacerItem23 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout9->addItem(spacerItem23, 0, 5, 1, 1);

        CLSCNumStudentsTextLabel = new QLabel(CLSCGroupBox);
        CLSCNumStudentsTextLabel->setObjectName(QString::fromUtf8("CLSCNumStudentsTextLabel"));
        CLSCNumStudentsTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout9->addWidget(CLSCNumStudentsTextLabel, 1, 0, 1, 1);

        CLSCNumStudentsLabel = new QLabel(CLSCGroupBox);
        CLSCNumStudentsLabel->setObjectName(QString::fromUtf8("CLSCNumStudentsLabel"));

        gridLayout9->addWidget(CLSCNumStudentsLabel, 1, 1, 1, 1);

        CLSCAverageTextLabel = new QLabel(CLSCGroupBox);
        CLSCAverageTextLabel->setObjectName(QString::fromUtf8("CLSCAverageTextLabel"));
        CLSCAverageTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout9->addWidget(CLSCAverageTextLabel, 1, 6, 1, 1);

        CLSCAverageLabel = new QLabel(CLSCGroupBox);
        CLSCAverageLabel->setObjectName(QString::fromUtf8("CLSCAverageLabel"));

        gridLayout9->addWidget(CLSCAverageLabel, 1, 7, 1, 1);

        tbtnApplyClassChanges = new QToolButton(CLSCGroupBox);
        tbtnApplyClassChanges->setObjectName(QString::fromUtf8("tbtnApplyClassChanges"));
        tbtnApplyClassChanges->setIcon(icon22);
        tbtnApplyClassChanges->setIconSize(QSize(16, 16));

        gridLayout9->addWidget(tbtnApplyClassChanges, 0, 8, 1, 1);


        gridLayout8->addWidget(CLSCGroupBox, 0, 1, 1, 2);

        CLLSGroupBox = new QGroupBox(classesPage);
        CLLSGroupBox->setObjectName(QString::fromUtf8("CLLSGroupBox"));
        CLLSGroupBox->setMinimumSize(QSize(200, 0));
        CLLSGroupBox->setMaximumSize(QSize(200, 16777215));
        vboxLayout20 = new QVBoxLayout(CLLSGroupBox);
        vboxLayout20->setSpacing(6);
        vboxLayout20->setContentsMargins(9, 9, 9, 9);
        vboxLayout20->setObjectName(QString::fromUtf8("vboxLayout20"));
        hboxLayout22 = new QHBoxLayout();
        hboxLayout22->setSpacing(6);
        hboxLayout22->setObjectName(QString::fromUtf8("hboxLayout22"));
        label_search_class_students = new QLabel(CLLSGroupBox);
        label_search_class_students->setObjectName(QString::fromUtf8("label_search_class_students"));

        hboxLayout22->addWidget(label_search_class_students);

        CLLSSearchLineEdit = new ExtendedLineEdit(CLLSGroupBox);
        CLLSSearchLineEdit->setObjectName(QString::fromUtf8("CLLSSearchLineEdit"));

        hboxLayout22->addWidget(CLLSSearchLineEdit);


        vboxLayout20->addLayout(hboxLayout22);

        CLLSListWidget = new MTListWidget(CLLSGroupBox);
        CLLSListWidget->setObjectName(QString::fromUtf8("CLLSListWidget"));

        vboxLayout20->addWidget(CLLSListWidget);

        hboxLayout23 = new QHBoxLayout();
        hboxLayout23->setSpacing(6);
        hboxLayout23->setObjectName(QString::fromUtf8("hboxLayout23"));
        tbtnAdd_student = new MTToolButton(CLLSGroupBox);
        tbtnAdd_student->setObjectName(QString::fromUtf8("tbtnAdd_student"));
        tbtnAdd_student->setIconSize(QSize(16, 16));
        tbtnAdd_student->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout23->addWidget(tbtnAdd_student);

        spacerItem24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout23->addItem(spacerItem24);

        tbtnDelete_student = new MTToolButton(CLLSGroupBox);
        tbtnDelete_student->setObjectName(QString::fromUtf8("tbtnDelete_student"));
        tbtnDelete_student->setIconSize(QSize(16, 16));
        tbtnDelete_student->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout23->addWidget(tbtnDelete_student);


        vboxLayout20->addLayout(hboxLayout23);


        gridLayout8->addWidget(CLLSGroupBox, 1, 1, 2, 1);

        CLSSGroupBox = new QGroupBox(classesPage);
        CLSSGroupBox->setObjectName(QString::fromUtf8("CLSSGroupBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(CLSSGroupBox->sizePolicy().hasHeightForWidth());
        CLSSGroupBox->setSizePolicy(sizePolicy7);
        vboxLayout21 = new QVBoxLayout(CLSSGroupBox);
        vboxLayout21->setSpacing(6);
        vboxLayout21->setContentsMargins(9, 9, 9, 9);
        vboxLayout21->setObjectName(QString::fromUtf8("vboxLayout21"));
        hboxLayout24 = new QHBoxLayout();
        hboxLayout24->setSpacing(6);
        hboxLayout24->setObjectName(QString::fromUtf8("hboxLayout24"));
        CLSSNameLabel = new QLabel(CLSSGroupBox);
        CLSSNameLabel->setObjectName(QString::fromUtf8("CLSSNameLabel"));
        CLSSNameLabel->setTextFormat(Qt::RichText);

        hboxLayout24->addWidget(CLSSNameLabel);

        CLSSNameLineEdit = new QLineEdit(CLSSGroupBox);
        CLSSNameLineEdit->setObjectName(QString::fromUtf8("CLSSNameLineEdit"));

        hboxLayout24->addWidget(CLSSNameLineEdit);

        tbtnSaveMemberName = new QToolButton(CLSSGroupBox);
        tbtnSaveMemberName->setObjectName(QString::fromUtf8("tbtnSaveMemberName"));
        tbtnSaveMemberName->setIcon(icon22);
        tbtnSaveMemberName->setIconSize(QSize(16, 16));

        hboxLayout24->addWidget(tbtnSaveMemberName);

        spacerItem25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout24->addItem(spacerItem25);

        CLSSAverageTextLabel = new QLabel(CLSSGroupBox);
        CLSSAverageTextLabel->setObjectName(QString::fromUtf8("CLSSAverageTextLabel"));
        CLSSAverageTextLabel->setTextFormat(Qt::RichText);

        hboxLayout24->addWidget(CLSSAverageTextLabel);

        CLSSAverageLabel = new QLabel(CLSSGroupBox);
        CLSSAverageLabel->setObjectName(QString::fromUtf8("CLSSAverageLabel"));

        hboxLayout24->addWidget(CLSSAverageLabel);


        vboxLayout21->addLayout(hboxLayout24);

        CLSSResultsLabel = new QLabel(CLSSGroupBox);
        CLSSResultsLabel->setObjectName(QString::fromUtf8("CLSSResultsLabel"));
        CLSSResultsLabel->setTextFormat(Qt::RichText);

        vboxLayout21->addWidget(CLSSResultsLabel);

        CLSSResultsTableWidget = new MTTableWidget(CLSSGroupBox);
        if (CLSSResultsTableWidget->columnCount() < 3)
            CLSSResultsTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        CLSSResultsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        CLSSResultsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        CLSSResultsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem37);
        CLSSResultsTableWidget->setObjectName(QString::fromUtf8("CLSSResultsTableWidget"));

        vboxLayout21->addWidget(CLSSResultsTableWidget);

        hboxLayout25 = new QHBoxLayout();
        hboxLayout25->setSpacing(6);
        hboxLayout25->setObjectName(QString::fromUtf8("hboxLayout25"));
        tbtnAddSession = new QToolButton(CLSSGroupBox);
        tbtnAddSession->setObjectName(QString::fromUtf8("tbtnAddSession"));
        tbtnAddSession->setIcon(icon54);
        tbtnAddSession->setIconSize(QSize(16, 16));
        tbtnAddSession->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout25->addWidget(tbtnAddSession);

        spacerItem26 = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout25->addItem(spacerItem26);

        tbtnRemoveSession = new QToolButton(CLSSGroupBox);
        tbtnRemoveSession->setObjectName(QString::fromUtf8("tbtnRemoveSession"));
        tbtnRemoveSession->setIcon(icon55);
        tbtnRemoveSession->setIconSize(QSize(16, 16));
        tbtnRemoveSession->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout25->addWidget(tbtnRemoveSession);


        vboxLayout21->addLayout(hboxLayout25);


        gridLayout8->addWidget(CLSSGroupBox, 1, 2, 2, 1);

        CLLSSGroupBox = new QGroupBox(classesPage);
        CLLSSGroupBox->setObjectName(QString::fromUtf8("CLLSSGroupBox"));
        CLLSSGroupBox->setMinimumSize(QSize(240, 0));
        CLLSSGroupBox->setMaximumSize(QSize(240, 16777215));
        vboxLayout22 = new QVBoxLayout(CLLSSGroupBox);
        vboxLayout22->setSpacing(6);
        vboxLayout22->setContentsMargins(9, 9, 9, 9);
        vboxLayout22->setObjectName(QString::fromUtf8("vboxLayout22"));
        hboxLayout26 = new QHBoxLayout();
        hboxLayout26->setSpacing(6);
        hboxLayout26->setObjectName(QString::fromUtf8("hboxLayout26"));
        label_search_class_sessions = new QLabel(CLLSSGroupBox);
        label_search_class_sessions->setObjectName(QString::fromUtf8("label_search_class_sessions"));

        hboxLayout26->addWidget(label_search_class_sessions);

        CLLSSSearchLineEdit = new ExtendedLineEdit(CLLSSGroupBox);
        CLLSSSearchLineEdit->setObjectName(QString::fromUtf8("CLLSSSearchLineEdit"));

        hboxLayout26->addWidget(CLLSSSearchLineEdit);


        vboxLayout22->addLayout(hboxLayout26);

        CLLSSListWidget = new MTListWidget(CLLSSGroupBox);
        CLLSSListWidget->setObjectName(QString::fromUtf8("CLLSSListWidget"));

        vboxLayout22->addWidget(CLLSSListWidget);

        hboxLayout27 = new QHBoxLayout();
        hboxLayout27->setSpacing(6);
        hboxLayout27->setObjectName(QString::fromUtf8("hboxLayout27"));
        tbtnAdd_session = new MTToolButton(CLLSSGroupBox);
        tbtnAdd_session->setObjectName(QString::fromUtf8("tbtnAdd_session"));
        tbtnAdd_session->setIconSize(QSize(16, 16));
        tbtnAdd_session->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout27->addWidget(tbtnAdd_session);

        spacerItem27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout27->addItem(spacerItem27);

        tbtnDelete_session = new MTToolButton(CLLSSGroupBox);
        tbtnDelete_session->setObjectName(QString::fromUtf8("tbtnDelete_session"));
        tbtnDelete_session->setIconSize(QSize(16, 16));
        tbtnDelete_session->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout27->addWidget(tbtnDelete_session);


        vboxLayout22->addLayout(hboxLayout27);


        gridLayout8->addWidget(CLLSSGroupBox, 2, 0, 1, 1);

        mainStackedWidget->addWidget(classesPage);

        gridLayout->addWidget(mainStackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 860, 22));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuSession = new QMenu(menubar);
        menuSession->setObjectName(QString::fromUtf8("menuSession"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuQuestion = new QMenu(menubar);
        menuQuestion->setObjectName(QString::fromUtf8("menuQuestion"));
        menuAttachments = new QMenu(menuQuestion);
        menuAttachments->setObjectName(QString::fromUtf8("menuAttachments"));
        QIcon icon59;
        icon59.addFile(QString::fromUtf8(":/images/images/attachment.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuAttachments->setIcon(icon59);
        menuServer = new QMenu(menubar);
        menuServer->setObjectName(QString::fromUtf8("menuServer"));
        menuDatabase = new QMenu(menubar);
        menuDatabase->setObjectName(QString::fromUtf8("menuDatabase"));
        menuSort_questions = new QMenu(menuDatabase);
        menuSort_questions->setObjectName(QString::fromUtf8("menuSort_questions"));
        menuFilter_LQ = new QMenu(menuDatabase);
        menuFilter_LQ->setObjectName(QString::fromUtf8("menuFilter_LQ"));
        QIcon icon60;
        icon60.addFile(QString::fromUtf8(":/images/images/filter.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuFilter_LQ->setIcon(icon60);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuClass = new QMenu(menubar);
        menuClass->setObjectName(QString::fromUtf8("menuClass"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setOrientation(Qt::Horizontal);
        toolBar->setIconSize(QSize(32, 32));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuDatabase->menuAction());
        menubar->addAction(menuQuestion->menuAction());
        menubar->addAction(menuServer->menuAction());
        menubar->addAction(menuSession->menuAction());
        menubar->addAction(menuClass->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionCheck_for_updates);
        menuHelp->addSeparator();
        menuHelp->addAction(actionDocumentation);
        menuHelp->addAction(actionAbout);
        menuSession->addAction(actionPrint);
        menuSession->addAction(actionPrint_session_summary);
        menuSession->addAction(actionPrint_all);
        menuSession->addSeparator();
        menuSession->addAction(actionExport_log);
        menuSession->addAction(actionDelete_log);
        menuSession->addSeparator();
        menuSession->addAction(actionArchive_session);
        menuSession->addAction(actionCopy_to_archive);
        menuSession->addAction(actionRestore_session);
        menuSession->addAction(actionCopy_from_archive);
        menuView->addAction(actionEdit_questions);
        menuView->addAction(actionEdit_comments);
        menuView->addAction(actionEdit_flags);
        menuView->addAction(actionEdit_test);
        menuView->addAction(actionSaved_sessions);
        menuView->addAction(actionEdit_classes);
        menuView->addSeparator();
        menuView->addAction(actionShow_DBI);
        menuView->addSeparator();
        menuView->addAction(actionChange_language);
        menuQuestion->addAction(actionAdd);
        menuQuestion->addAction(actionDuplicate);
        menuQuestion->addAction(actionDelete);
        menuQuestion->addAction(actionHide);
        menuQuestion->addSeparator();
        menuQuestion->addAction(actionMove_to_top);
        menuQuestion->addAction(actionMove_up);
        menuQuestion->addAction(actionMove_down);
        menuQuestion->addAction(actionMove_to_bottom);
        menuQuestion->addSeparator();
        menuQuestion->addAction(menuAttachments->menuAction());
        menuQuestion->addSeparator();
        menuQuestion->addAction(actionApply);
        menuQuestion->addAction(actionDiscard);
        menuAttachments->addAction(actionAdd_SVG);
        menuAttachments->addAction(actionRemove_SVG);
        menuAttachments->addAction(actionEdit_SVG);
        menuAttachments->addAction(actionExport_SVG);
        menuServer->addAction(actionStart_server);
        menuServer->addAction(actionStop_server);
        menuServer->addSeparator();
        menuServer->addAction(actionRun_Test_Writer);
        menuServer->addSeparator();
        menuServer->addAction(actionExport_test);
        menuServer->addAction(actionAdd_offline_client);
        menuServer->addAction(actionAdd_offline_clients);
        menuServer->addAction(actionExport_log);
        menuServer->addSeparator();
        menuServer->addAction(actionQuickPrint);
        menuServer->addAction(actionPrint);
        menuServer->addSeparator();
        menuServer->addAction(actionSave_session);
        menuDatabase->addAction(actionShow_hidden);
        menuDatabase->addAction(menuSort_questions->menuAction());
        menuDatabase->addAction(menuFilter_LQ->menuAction());
        menuDatabase->addSeparator();
        menuDatabase->addAction(actionOverall_statistics);
        menuDatabase->addAction(actionPrint_questions);
        menuDatabase->addSeparator();
        menuDatabase->addAction(actionUse_last_save_date);
        menuSort_questions->addAction(actionFrom_A_to_Z);
        menuSort_questions->addAction(actionFrom_Z_to_A);
        menuSort_questions->addAction(actionBy_flag);
        menuFilter_LQ->addAction(actionShow_all);
        menuFilter_LQ->addAction(actionShow_easy);
        menuFilter_LQ->addAction(actionShow_medium);
        menuFilter_LQ->addAction(actionShow_difficult);
        menuFilter_LQ->addAction(actionShow_flag);
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionSave_a_copy);
        menuFile->addAction(actionSave_a_backup);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addAction(actionQuit);
        menuClass->addAction(actionAdd_class);
        menuClass->addAction(actionDelete_class);
        menuClass->addAction(actionPrint_class_summary);
        menuClass->addSeparator();
        menuClass->addAction(actionAdd_student);
        menuClass->addAction(actionDelete_student);
        menuClass->addAction(actionPrint);
        menuClass->addAction(actionPrint_all);
        menuClass->addSeparator();
        menuClass->addAction(actionAdd_session);
        menuClass->addAction(actionDelete_session);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionEdit_questions);
        toolBar->addAction(actionEdit_comments);
        toolBar->addAction(actionEdit_flags);
        toolBar->addAction(actionEdit_test);
        toolBar->addAction(actionSaved_sessions);
        toolBar->addAction(actionEdit_classes);
        toolBar->addSeparator();
        toolBar->addAction(actionAdd);
        toolBar->addAction(actionDuplicate);
        toolBar->addAction(actionDelete);
        toolBar->addSeparator();
        toolBar->addAction(actionQuickPrint);
        toolBar->addAction(actionPrint);

        retranslateUi(MainWindow);
        QObject::connect(LQFlagRadioButton, SIGNAL(toggled(bool)), LQFlagComboBox, SLOT(setVisible(bool)));
        QObject::connect(rbtnQuestionTime, SIGNAL(toggled(bool)), TSQuestionTimeEdit, SLOT(setEnabled(bool)));
        QObject::connect(rbtnTestTime, SIGNAL(toggled(bool)), TSTestTimeEdit, SLOT(setEnabled(bool)));
        QObject::connect(TSMaxQnumCheckBox, SIGNAL(toggled(bool)), TSQnumSpinBox, SLOT(setDisabled(bool)));
        QObject::connect(TSCustomTestNameCheckBox, SIGNAL(toggled(bool)), TSTestNameLineEdit, SLOT(setEnabled(bool)));
        QObject::connect(TSCustomServerPortCheckBox, SIGNAL(toggled(bool)), TSCustomServerPortSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), TSMediumCorrectAnswerSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), TSMediumIncorrectAnswerSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), TSMediumMissingAnswerSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), TSDifficultCorrectAnswerSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), TSDifficultIncorrectAnswerSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), TSDifficultMissingAnswerSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_medium_correctanswer, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_medium_incorrectanswer, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_medium_missinganswer, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_difficult_correctanswer, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_difficult_incorrectanswer, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_difficult_missinganswer, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_easy_icon1, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_easy_icon2, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_easy_icon3, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_medium_icon1, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_medium_icon2, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_medium_icon3, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_difficult_icon1, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_difficult_icon2, SLOT(setEnabled(bool)));
        QObject::connect(TSSeparateSettingsForDifficultyLevelsCheckBox, SIGNAL(toggled(bool)), label_difficult_icon3, SLOT(setEnabled(bool)));

        mainStackedWidget->setCurrentIndex(0);
        SVStudentTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "iTestServer", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "&New", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "Create a new database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionNew->setStatusTip(QApplication::translate("MainWindow", "Create a new database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionNew->setWhatsThis(QApplication::translate("MainWindow", "Create a new database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open a database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("MainWindow", "Open a database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionOpen->setWhatsThis(QApplication::translate("MainWindow", "Open a database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "Save the open database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSave->setStatusTip(QApplication::translate("MainWindow", "Save the open database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionSave->setWhatsThis(QApplication::translate("MainWindow", "Save the open database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save &as", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionSave_as->setStatusTip(QApplication::translate("MainWindow", "Save as", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionSave_as->setWhatsThis(QApplication::translate("MainWindow", "Save as", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionSave_as->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("MainWindow", "&Close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("MainWindow", "Close the open database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionClose->setStatusTip(QApplication::translate("MainWindow", "Close the open database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionClose->setWhatsThis(QApplication::translate("MainWindow", "Close the open database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("MainWindow", "Quit iTest", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionQuit->setStatusTip(QApplication::translate("MainWindow", "Quit iTest", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionQuit->setWhatsThis(QApplication::translate("MainWindow", "Quit iTest", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionEdit_flags->setText(QApplication::translate("MainWindow", "&Flags", 0, QApplication::UnicodeUTF8));
        actionEdit_flags->setIconText(QApplication::translate("MainWindow", "Flags", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEdit_flags->setToolTip(QApplication::translate("MainWindow", "Edit flags", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionEdit_flags->setStatusTip(QApplication::translate("MainWindow", "Edit flags", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionEdit_flags->setWhatsThis(QApplication::translate("MainWindow", "Edit flags", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionEdit_test->setText(QApplication::translate("MainWindow", "&Server mode", 0, QApplication::UnicodeUTF8));
        actionEdit_test->setIconText(QApplication::translate("MainWindow", "Server mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEdit_test->setToolTip(QApplication::translate("MainWindow", "Edit test settings and start the server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionEdit_test->setStatusTip(QApplication::translate("MainWindow", "Edit test settings and start the server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionEdit_test->setWhatsThis(QApplication::translate("MainWindow", "Edit test settings and start the server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "About iTest", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionAbout->setStatusTip(QApplication::translate("MainWindow", "About iTest", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionAbout->setWhatsThis(QApplication::translate("MainWindow", "About iTest", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionFrom_A_to_Z->setText(QApplication::translate("MainWindow", "From &A to Z", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionFrom_A_to_Z->setStatusTip(QApplication::translate("MainWindow", "Sort questions from A to Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionFrom_A_to_Z->setWhatsThis(QApplication::translate("MainWindow", "Sort questions from A to Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionFrom_A_to_Z->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+Up", 0, QApplication::UnicodeUTF8));
        actionFrom_Z_to_A->setText(QApplication::translate("MainWindow", "From &Z to A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionFrom_Z_to_A->setStatusTip(QApplication::translate("MainWindow", "Sort questions from Z to A", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionFrom_Z_to_A->setWhatsThis(QApplication::translate("MainWindow", "Sort questions from Z to A", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionFrom_Z_to_A->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+Down", 0, QApplication::UnicodeUTF8));
        actionShow_all->setText(QApplication::translate("MainWindow", "Show &all questions", 0, QApplication::UnicodeUTF8));
        actionShow_all->setIconText(QApplication::translate("MainWindow", "Show all questions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShow_all->setToolTip(QApplication::translate("MainWindow", "Show all questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionShow_all->setStatusTip(QApplication::translate("MainWindow", "Show all questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionShow_all->setWhatsThis(QApplication::translate("MainWindow", "Show all questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionShow_easy->setText(QApplication::translate("MainWindow", "Show &easy questions only", 0, QApplication::UnicodeUTF8));
        actionShow_easy->setIconText(QApplication::translate("MainWindow", "Show easy questions only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionShow_easy->setStatusTip(QApplication::translate("MainWindow", "Show easy questions only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionShow_easy->setWhatsThis(QApplication::translate("MainWindow", "Show easy questions only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionShow_medium->setText(QApplication::translate("MainWindow", "Show questions with &medium difficulty only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionShow_medium->setStatusTip(QApplication::translate("MainWindow", "Show questions with medium difficulty only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionShow_medium->setWhatsThis(QApplication::translate("MainWindow", "Show questions with medium difficulty only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionShow_difficult->setText(QApplication::translate("MainWindow", "Show &difficult questions only", 0, QApplication::UnicodeUTF8));
        actionShow_difficult->setIconText(QApplication::translate("MainWindow", "Show difficult questions only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionShow_difficult->setStatusTip(QApplication::translate("MainWindow", "Show difficult questions only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionShow_difficult->setWhatsThis(QApplication::translate("MainWindow", "Show difficult questions only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionShow_DBI->setText(QApplication::translate("MainWindow", "Show database &information", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionShow_DBI->setStatusTip(QApplication::translate("MainWindow", "Show database information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionShow_DBI->setWhatsThis(QApplication::translate("MainWindow", "Show database information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionShow_DBI->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionShow_flag->setText(QApplication::translate("MainWindow", "Show questions with the selected &flag only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionShow_flag->setStatusTip(QApplication::translate("MainWindow", "Show questions with the selected flag only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionShow_flag->setWhatsThis(QApplication::translate("MainWindow", "Show questions with the selected flag only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionMove_up->setText(QApplication::translate("MainWindow", "Move &up", 0, QApplication::UnicodeUTF8));
        actionMove_up->setIconText(QApplication::translate("MainWindow", "Move up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMove_up->setToolTip(QApplication::translate("MainWindow", "Move the selected question up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionMove_up->setStatusTip(QApplication::translate("MainWindow", "Move the selected question up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionMove_up->setWhatsThis(QApplication::translate("MainWindow", "Move the selected question up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionMove_up->setShortcut(QApplication::translate("MainWindow", "Ctrl+Up", 0, QApplication::UnicodeUTF8));
        actionMove_down->setText(QApplication::translate("MainWindow", "Move do&wn", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMove_down->setToolTip(QApplication::translate("MainWindow", "Move the selected question down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionMove_down->setStatusTip(QApplication::translate("MainWindow", "Move the selected question down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionMove_down->setWhatsThis(QApplication::translate("MainWindow", "Move the selected question down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionMove_down->setShortcut(QApplication::translate("MainWindow", "Ctrl+Down", 0, QApplication::UnicodeUTF8));
        actionEdit_comments->setText(QApplication::translate("MainWindow", "Co&mments", 0, QApplication::UnicodeUTF8));
        actionEdit_comments->setIconText(QApplication::translate("MainWindow", "Comments", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEdit_comments->setToolTip(QApplication::translate("MainWindow", "Edit comments", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionEdit_comments->setStatusTip(QApplication::translate("MainWindow", "Edit comments", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionEdit_comments->setWhatsThis(QApplication::translate("MainWindow", "Edit comments", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionUse_last_save_date->setText(QApplication::translate("MainWindow", "&Use last save date", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionUse_last_save_date->setStatusTip(QApplication::translate("MainWindow", "Use last save date", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionUse_last_save_date->setWhatsThis(QApplication::translate("MainWindow", "Use last save date", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionAdd->setText(QApplication::translate("MainWindow", "&Add", 0, QApplication::UnicodeUTF8));
        actionAdd->setIconText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAdd->setToolTip(QApplication::translate("MainWindow", "Add a question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionAdd->setStatusTip(QApplication::translate("MainWindow", "Add a question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionAdd->setWhatsThis(QApplication::translate("MainWindow", "Add a question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionAdd->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+A", 0, QApplication::UnicodeUTF8));
        actionDuplicate->setText(QApplication::translate("MainWindow", "Dupli&cate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDuplicate->setToolTip(QApplication::translate("MainWindow", "Duplicate the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDuplicate->setStatusTip(QApplication::translate("MainWindow", "Duplicate the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionDuplicate->setWhatsThis(QApplication::translate("MainWindow", "Duplicate the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionDuplicate->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+C", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("MainWindow", "&Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("MainWindow", "Delete the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDelete->setStatusTip(QApplication::translate("MainWindow", "Delete the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionDelete->setWhatsThis(QApplication::translate("MainWindow", "Delete the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionDelete->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+D", 0, QApplication::UnicodeUTF8));
        actionMove_to_top->setText(QApplication::translate("MainWindow", "Move to &top", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMove_to_top->setToolTip(QApplication::translate("MainWindow", "Move the selected question to the top", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionMove_to_top->setStatusTip(QApplication::translate("MainWindow", "Move the selected question to the top", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionMove_to_top->setWhatsThis(QApplication::translate("MainWindow", "Move the selected question to the top", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionMove_to_top->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Up", 0, QApplication::UnicodeUTF8));
        actionMove_to_bottom->setText(QApplication::translate("MainWindow", "Move to &bottom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMove_to_bottom->setToolTip(QApplication::translate("MainWindow", "Move the selected question to the bottom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionMove_to_bottom->setStatusTip(QApplication::translate("MainWindow", "Move the selected question to the bottom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionMove_to_bottom->setWhatsThis(QApplication::translate("MainWindow", "Move the selected question to the bottom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionMove_to_bottom->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Down", 0, QApplication::UnicodeUTF8));
        actionApply->setText(QApplication::translate("MainWindow", "Appl&y changes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionApply->setToolTip(QApplication::translate("MainWindow", "Apply any changes you have made to the question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionApply->setStatusTip(QApplication::translate("MainWindow", "Apply any changes you have made to the question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionApply->setWhatsThis(QApplication::translate("MainWindow", "Apply any changes you have made to the question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionApply->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+A", 0, QApplication::UnicodeUTF8));
        actionDiscard->setText(QApplication::translate("MainWindow", "Di&scard changes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDiscard->setToolTip(QApplication::translate("MainWindow", "Discard any changes you have made to the question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDiscard->setStatusTip(QApplication::translate("MainWindow", "Discard any changes you have made to the question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionDiscard->setWhatsThis(QApplication::translate("MainWindow", "Discard any changes you have made to the question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionDiscard->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+D", 0, QApplication::UnicodeUTF8));
        actionEdit_questions->setText(QApplication::translate("MainWindow", "&Questions", 0, QApplication::UnicodeUTF8));
        actionEdit_questions->setIconText(QApplication::translate("MainWindow", "Questions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEdit_questions->setToolTip(QApplication::translate("MainWindow", "Edit questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionEdit_questions->setStatusTip(QApplication::translate("MainWindow", "Edit questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionEdit_questions->setWhatsThis(QApplication::translate("MainWindow", "Edit questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionAdd_offline_client->setText(QApplication::translate("MainWindow", "&Add off-line client", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAdd_offline_client->setToolTip(QApplication::translate("MainWindow", "Add off-line client", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionAdd_offline_client->setStatusTip(QApplication::translate("MainWindow", "Add off-line client", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionAdd_offline_client->setWhatsThis(QApplication::translate("MainWindow", "Add off-line client", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionStop_server->setText(QApplication::translate("MainWindow", "Stop se&rver", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStop_server->setToolTip(QApplication::translate("MainWindow", "Stop the server and return to test settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionStop_server->setStatusTip(QApplication::translate("MainWindow", "Stop the server and return to test settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionStop_server->setWhatsThis(QApplication::translate("MainWindow", "Stop the server and return to test settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionStart_server->setText(QApplication::translate("MainWindow", "S&tart server", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStart_server->setToolTip(QApplication::translate("MainWindow", "Proceed to testing mode using this computer as a server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionStart_server->setStatusTip(QApplication::translate("MainWindow", "Proceed to testing mode using this computer as a server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionStart_server->setWhatsThis(QApplication::translate("MainWindow", "Proceed to testing mode using this computer as a server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionExport_log->setText(QApplication::translate("MainWindow", "Export &log", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExport_log->setToolTip(QApplication::translate("MainWindow", "Export server log", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionExport_log->setStatusTip(QApplication::translate("MainWindow", "Export server log", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionExport_log->setWhatsThis(QApplication::translate("MainWindow", "Export server log", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionSave_session->setText(QApplication::translate("MainWindow", "Save sessio&n", 0, QApplication::UnicodeUTF8));
        actionSave_session->setIconText(QApplication::translate("MainWindow", "Save session", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave_session->setToolTip(QApplication::translate("MainWindow", "Save the current session for later viewing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSave_session->setStatusTip(QApplication::translate("MainWindow", "Save the current session for later viewing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionSave_session->setWhatsThis(QApplication::translate("MainWindow", "Save the current session for later viewing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionQuickPrint->setText(QApplication::translate("MainWindow", "&QuickPrint", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionQuickPrint->setStatusTip(QApplication::translate("MainWindow", "Print the selected client's results using the current printer settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionQuickPrint->setWhatsThis(QApplication::translate("MainWindow", "Print the selected client's results using the current printer settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionQuickPrint->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionPrint->setText(QApplication::translate("MainWindow", "&Print", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionPrint->setStatusTip(QApplication::translate("MainWindow", "Print the selected client's results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPrint->setWhatsThis(QApplication::translate("MainWindow", "Print the selected client's results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionPrint->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+P", 0, QApplication::UnicodeUTF8));
        actionExport_test->setText(QApplication::translate("MainWindow", "&Export test", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExport_test->setToolTip(QApplication::translate("MainWindow", "Export off-line test session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionExport_test->setStatusTip(QApplication::translate("MainWindow", "Export off-line test session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionExport_test->setWhatsThis(QApplication::translate("MainWindow", "Export off-line test session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionAdd_offline_clients->setText(QApplication::translate("MainWindow", "Add off-line client&s", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionAdd_offline_clients->setStatusTip(QApplication::translate("MainWindow", "Add off-line clients", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionAdd_offline_clients->setWhatsThis(QApplication::translate("MainWindow", "Add off-line clients", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionSaved_sessions->setText(QApplication::translate("MainWindow", "Save&d sessions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaved_sessions->setToolTip(QApplication::translate("MainWindow", "View saved test sessions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSaved_sessions->setStatusTip(QApplication::translate("MainWindow", "View saved test sessions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionSaved_sessions->setWhatsThis(QApplication::translate("MainWindow", "View saved test sessions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionDelete_log->setText(QApplication::translate("MainWindow", "&Delete log", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDelete_log->setToolTip(QApplication::translate("MainWindow", "Delete the log for the selected session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDelete_log->setStatusTip(QApplication::translate("MainWindow", "Delete the log for the selected session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionDelete_log->setWhatsThis(QApplication::translate("MainWindow", "Delete the log for the selected session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionArchive_session->setText(QApplication::translate("MainWindow", "&Archive session", 0, QApplication::UnicodeUTF8));
        actionArchive_session->setIconText(QApplication::translate("MainWindow", "Archive session", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionArchive_session->setToolTip(QApplication::translate("MainWindow", "Archive the selected session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionArchive_session->setStatusTip(QApplication::translate("MainWindow", "Archive the selected session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionArchive_session->setWhatsThis(QApplication::translate("MainWindow", "Archive the selected session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionDocumentation->setText(QApplication::translate("MainWindow", "Documentation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDocumentation->setToolTip(QApplication::translate("MainWindow", "View online documentation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDocumentation->setStatusTip(QApplication::translate("MainWindow", "View online documentation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionDocumentation->setWhatsThis(QApplication::translate("MainWindow", "View online documentation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionCheck_for_updates->setText(QApplication::translate("MainWindow", "Check for updates", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCheck_for_updates->setToolTip(QApplication::translate("MainWindow", "Check if there is a new version available online", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCheck_for_updates->setStatusTip(QApplication::translate("MainWindow", "Check if there is a new version available online", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionCheck_for_updates->setWhatsThis(QApplication::translate("MainWindow", "Check if there is a new version available online", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionPrint_all->setText(QApplication::translate("MainWindow", "Print &all", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionPrint_all->setStatusTip(QApplication::translate("MainWindow", "Print the results of all students", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPrint_all->setWhatsThis(QApplication::translate("MainWindow", "Print the results of all students", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionPrint_session_summary->setText(QApplication::translate("MainWindow", "Print session &summary", 0, QApplication::UnicodeUTF8));
        actionPrint_session_summary->setIconText(QApplication::translate("MainWindow", "Print session summary", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPrint_session_summary->setToolTip(QApplication::translate("MainWindow", "Print session summary", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPrint_session_summary->setStatusTip(QApplication::translate("MainWindow", "Print a summary and statistics for the selected session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPrint_session_summary->setWhatsThis(QApplication::translate("MainWindow", "Print a summary and statistics for the selected session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionOverall_statistics->setText(QApplication::translate("MainWindow", "Overall statistics", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOverall_statistics->setToolTip(QApplication::translate("MainWindow", "Show overall statistics about the difficulty of questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionOverall_statistics->setStatusTip(QApplication::translate("MainWindow", "Show overall statistics about the difficulty of questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionOverall_statistics->setWhatsThis(QApplication::translate("MainWindow", "Show overall statistics about the difficulty of questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionChange_language->setText(QApplication::translate("MainWindow", "Change language", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionChange_language->setToolTip(QApplication::translate("MainWindow", "Change the language of the iTest interface", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionChange_language->setStatusTip(QApplication::translate("MainWindow", "Change the language of the iTest interface", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionChange_language->setWhatsThis(QApplication::translate("MainWindow", "Change the language of the iTest interface", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionRestore_session->setText(QApplication::translate("MainWindow", "&Restore session", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRestore_session->setToolTip(QApplication::translate("MainWindow", "Restore the selected session from the archive", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRestore_session->setStatusTip(QApplication::translate("MainWindow", "Restore the selected session from the archive", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionRestore_session->setWhatsThis(QApplication::translate("MainWindow", "Restore the selected session from the archive", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionCopy_to_archive->setText(QApplication::translate("MainWindow", "Copy to archive", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCopy_to_archive->setToolTip(QApplication::translate("MainWindow", "Copy the selected session to the archive", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCopy_to_archive->setStatusTip(QApplication::translate("MainWindow", "Copy the selected session to the archive", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionCopy_to_archive->setWhatsThis(QApplication::translate("MainWindow", "Copy the selected session to the archive", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionCopy_from_archive->setText(QApplication::translate("MainWindow", "Copy from archive", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCopy_from_archive->setToolTip(QApplication::translate("MainWindow", "Copy the selected session from the archive", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCopy_from_archive->setStatusTip(QApplication::translate("MainWindow", "Copy the selected session from the archive", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionCopy_from_archive->setWhatsThis(QApplication::translate("MainWindow", "Copy the selected session from the archive", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionSave_a_copy->setText(QApplication::translate("MainWindow", "Save a copy", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave_a_copy->setToolTip(QApplication::translate("MainWindow", "Save a copy of the database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSave_a_copy->setStatusTip(QApplication::translate("MainWindow", "Save a copy of the database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionSave_a_copy->setWhatsThis(QApplication::translate("MainWindow", "Save a copy of the database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionSave_a_backup->setText(QApplication::translate("MainWindow", "Save a backup", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave_a_backup->setToolTip(QApplication::translate("MainWindow", "Save a backup copy of the database with all the archived sessions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSave_a_backup->setStatusTip(QApplication::translate("MainWindow", "Save a backup copy of the database with all the archived sessions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionSave_a_backup->setWhatsThis(QApplication::translate("MainWindow", "Save a backup copy of the database with all the archived sessions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionShow_hidden->setText(QApplication::translate("MainWindow", "Show hidden questions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionShow_hidden->setStatusTip(QApplication::translate("MainWindow", "Show hidden questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionShow_hidden->setWhatsThis(QApplication::translate("MainWindow", "Show hidden questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionHide->setText(QApplication::translate("MainWindow", "&Hide", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHide->setToolTip(QApplication::translate("MainWindow", "Hide the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionHide->setStatusTip(QApplication::translate("MainWindow", "Hide the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionHide->setWhatsThis(QApplication::translate("MainWindow", "Hide the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionHide->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+H", 0, QApplication::UnicodeUTF8));
        actionRun_Test_Writer->setText(QApplication::translate("MainWindow", "Run iTestClient", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRun_Test_Writer->setToolTip(QApplication::translate("MainWindow", "Run iTestClient on this computer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRun_Test_Writer->setStatusTip(QApplication::translate("MainWindow", "Run iTestClient on this computer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionRun_Test_Writer->setWhatsThis(QApplication::translate("MainWindow", "Run iTestClient on this computer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionPrint_questions->setText(QApplication::translate("MainWindow", "Print questions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPrint_questions->setToolTip(QApplication::translate("MainWindow", "Select questions to print", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPrint_questions->setStatusTip(QApplication::translate("MainWindow", "Select questions to print", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPrint_questions->setWhatsThis(QApplication::translate("MainWindow", "Select questions to print", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionAdd_SVG->setText(QApplication::translate("MainWindow", "Add SVG", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAdd_SVG->setToolTip(QApplication::translate("MainWindow", "Add an attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionAdd_SVG->setStatusTip(QApplication::translate("MainWindow", "Add an attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionAdd_SVG->setWhatsThis(QApplication::translate("MainWindow", "Add an attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionRemove_SVG->setText(QApplication::translate("MainWindow", "Remove SVG", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRemove_SVG->setToolTip(QApplication::translate("MainWindow", "Remove the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRemove_SVG->setStatusTip(QApplication::translate("MainWindow", "Remove the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionRemove_SVG->setWhatsThis(QApplication::translate("MainWindow", "Remove the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionEdit_SVG->setText(QApplication::translate("MainWindow", "Edit SVG", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEdit_SVG->setToolTip(QApplication::translate("MainWindow", "Edit the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionEdit_SVG->setStatusTip(QApplication::translate("MainWindow", "Edit the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionEdit_SVG->setWhatsThis(QApplication::translate("MainWindow", "Edit the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionExport_SVG->setText(QApplication::translate("MainWindow", "Export SVG", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExport_SVG->setToolTip(QApplication::translate("MainWindow", "Export the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionExport_SVG->setStatusTip(QApplication::translate("MainWindow", "Export the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionExport_SVG->setWhatsThis(QApplication::translate("MainWindow", "Export the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionEdit_classes->setText(QApplication::translate("MainWindow", "&Classes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEdit_classes->setToolTip(QApplication::translate("MainWindow", "Edit classes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionEdit_classes->setStatusTip(QApplication::translate("MainWindow", "Edit classes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionEdit_classes->setWhatsThis(QApplication::translate("MainWindow", "Edit classes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionAdd_class->setText(QApplication::translate("MainWindow", "Add class", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionAdd_class->setStatusTip(QApplication::translate("MainWindow", "Create a new class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionAdd_class->setWhatsThis(QApplication::translate("MainWindow", "Create a new class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionDelete_class->setText(QApplication::translate("MainWindow", "Delete class", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionDelete_class->setStatusTip(QApplication::translate("MainWindow", "Delete the selected class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionDelete_class->setWhatsThis(QApplication::translate("MainWindow", "Delete the selected class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionAdd_student->setText(QApplication::translate("MainWindow", "Add student", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionAdd_student->setStatusTip(QApplication::translate("MainWindow", "Add a new student to the selected class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionAdd_student->setWhatsThis(QApplication::translate("MainWindow", "Add a new student to the selected class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionDelete_student->setText(QApplication::translate("MainWindow", "Delete student", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionDelete_student->setStatusTip(QApplication::translate("MainWindow", "Delete the selected student from the selected class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionDelete_student->setWhatsThis(QApplication::translate("MainWindow", "Delete the selected student from the selected class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionAdd_session->setText(QApplication::translate("MainWindow", "Add session", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionAdd_session->setStatusTip(QApplication::translate("MainWindow", "Add a session to the selected class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionAdd_session->setWhatsThis(QApplication::translate("MainWindow", "Add a session to the selected class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionDelete_session->setText(QApplication::translate("MainWindow", "Delete session", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionDelete_session->setStatusTip(QApplication::translate("MainWindow", "Delete the selected session from the selected class (the session will not be deleted from the database)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionDelete_session->setWhatsThis(QApplication::translate("MainWindow", "Delete the selected session from the selected class (the session will not be deleted from the database)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionPrint_class_summary->setText(QApplication::translate("MainWindow", "Print class summary", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionPrint_class_summary->setStatusTip(QApplication::translate("MainWindow", "Print a summary for the selected class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPrint_class_summary->setWhatsThis(QApplication::translate("MainWindow", "Print a summary for the selected class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionBy_flag->setText(QApplication::translate("MainWindow", "By flag", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionBy_flag->setStatusTip(QApplication::translate("MainWindow", "Sort questions by flag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionBy_flag->setWhatsThis(QApplication::translate("MainWindow", "Sort questions by flag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionBy_flag->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+Right", 0, QApplication::UnicodeUTF8));
        label_icon->setText(QString());
        label_icon_text->setText(QApplication::translate("MainWindow", "iTest", 0, QApplication::UnicodeUTF8));
        label_recent->setText(QApplication::translate("MainWindow", "Recent databases", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        recentDBsListWidget->setStatusTip(QApplication::translate("MainWindow", "Select a database you have used recently, create a new one or open another database.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        btnNew->setStatusTip(QApplication::translate("MainWindow", "Create a new database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btnNew->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btnOpenOther->setStatusTip(QApplication::translate("MainWindow", "Open another database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btnOpenOther->setText(QApplication::translate("MainWindow", "Open other...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btnOpenSelected->setStatusTip(QApplication::translate("MainWindow", "Open the selected database from the list above", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btnOpenSelected->setText(QApplication::translate("MainWindow", "Open selected", 0, QApplication::UnicodeUTF8));
        DBIGroupBox->setTitle(QApplication::translate("MainWindow", "Database information", 0, QApplication::UnicodeUTF8));
        DBIDatabaseNameLabel->setText(QApplication::translate("MainWindow", "Database name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        DBIDatabaseNameLineEdit->setStatusTip(QApplication::translate("MainWindow", "Database name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        DBIDateLabel->setText(QApplication::translate("MainWindow", "Date:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        DBIDateEdit->setStatusTip(QApplication::translate("MainWindow", "Database date", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        DBIDateEdit->setDisplayFormat(QApplication::translate("MainWindow", "yyyy.MM.dd - hh:mm", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        DBIUseLastSaveDateCheckBox->setStatusTip(QApplication::translate("MainWindow", "Use last save date", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        DBIUseLastSaveDateCheckBox->setText(QApplication::translate("MainWindow", "Use last save date", 0, QApplication::UnicodeUTF8));
        LQGroupBox->setTitle(QApplication::translate("MainWindow", "List of questions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LQAllRadioButton->setStatusTip(QApplication::translate("MainWindow", "Show all questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LQAllRadioButton->setText(QApplication::translate("MainWindow", "All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LQEasyRadioButton->setStatusTip(QApplication::translate("MainWindow", "Show easy questions only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LQEasyRadioButton->setText(QString());
#ifndef QT_NO_STATUSTIP
        LQMediumRadioButton->setStatusTip(QApplication::translate("MainWindow", "Show questions with medium difficulty only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LQMediumRadioButton->setText(QString());
#ifndef QT_NO_STATUSTIP
        LQDifficultRadioButton->setStatusTip(QApplication::translate("MainWindow", "Show difficult questions only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LQDifficultRadioButton->setText(QString());
#ifndef QT_NO_STATUSTIP
        LQFlagRadioButton->setStatusTip(QApplication::translate("MainWindow", "Show questions with the selected flag only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        LQFlagRadioButton->setText(QString());
#ifndef QT_NO_STATUSTIP
        LQFlagComboBox->setStatusTip(QApplication::translate("MainWindow", "Select the flag to filter the list below", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_search->setText(QApplication::translate("MainWindow", "Search:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        LQSearchLineEdit->setStatusTip(QApplication::translate("MainWindow", "Type a keyword to filter the list below", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        LQListWidget->setStatusTip(QApplication::translate("MainWindow", "Select a question to edit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        tbtnAddQuestion->setStatusTip(QApplication::translate("MainWindow", "Add a question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        tbtnDuplicateQuestion->setStatusTip(QApplication::translate("MainWindow", "Duplicate the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        tbtnDeleteQuestion->setStatusTip(QApplication::translate("MainWindow", "Delete the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        tbtnMoveUp->setStatusTip(QApplication::translate("MainWindow", "Move the selected question up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        tbtnMoveDown->setStatusTip(QApplication::translate("MainWindow", "Move the selected question down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SQGroupBox->setTitle(QApplication::translate("MainWindow", "Selected question", 0, QApplication::UnicodeUTF8));
        SQQuestionNameLabel->setText(QApplication::translate("MainWindow", "Question name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SQQuestionNameLineEdit->setStatusTip(QApplication::translate("MainWindow", "Name of the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SQFlagLabel->setText(QApplication::translate("MainWindow", "Flag:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SQFlagComboBox->setStatusTip(QApplication::translate("MainWindow", "Flag of the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SQGroupLabel->setText(QApplication::translate("MainWindow", "Group:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SQGroupLineEdit->setStatusTip(QApplication::translate("MainWindow", "Group of the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        tbtnSearchByGroup->setStatusTip(QApplication::translate("MainWindow", "Search the database for other questions in this group", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnSearchByGroup->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
        SQDifficultyLabel->setText(QApplication::translate("MainWindow", "Difficulty:", 0, QApplication::UnicodeUTF8));
        SQDifficultyComboBox->setItemText(0, QApplication::translate("MainWindow", "Easy", 0, QApplication::UnicodeUTF8));
        SQDifficultyComboBox->setItemText(1, QApplication::translate("MainWindow", "Medium", 0, QApplication::UnicodeUTF8));
        SQDifficultyComboBox->setItemText(2, QApplication::translate("MainWindow", "Difficult", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_STATUSTIP
        SQDifficultyComboBox->setStatusTip(QApplication::translate("MainWindow", "Difficulty of the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SQSVGLabel->setText(QApplication::translate("MainWindow", "Attachments (SVG):", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbtnAddSVG->setToolTip(QApplication::translate("MainWindow", "Add SVG", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tbtnAddSVG->setStatusTip(QApplication::translate("MainWindow", "Add an attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnAddSVG->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbtnRemoveSVG->setToolTip(QApplication::translate("MainWindow", "Remove SVG", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tbtnRemoveSVG->setStatusTip(QApplication::translate("MainWindow", "Remove the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnRemoveSVG->setText(QApplication::translate("MainWindow", "Remove", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbtnEditSVG->setToolTip(QApplication::translate("MainWindow", "Edit SVG", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tbtnEditSVG->setStatusTip(QApplication::translate("MainWindow", "Edit the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnEditSVG->setText(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbtnExportSVG->setToolTip(QApplication::translate("MainWindow", "Export SVG", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tbtnExportSVG->setStatusTip(QApplication::translate("MainWindow", "Export the selected attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnExportSVG->setText(QApplication::translate("MainWindow", "Export", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SQSVGListWidget->setStatusTip(QApplication::translate("MainWindow", "Attachments of the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SQExplanationLabel->setText(QApplication::translate("MainWindow", "Explanation:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SQExplanationLineEdit->setStatusTip(QApplication::translate("MainWindow", "A brief explanation of the selected question", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SQStatisticsLabel->setText(QApplication::translate("MainWindow", "Statistics:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = EFTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "Number of questions with this flag", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Flag", 0, QApplication::UnicodeUTF8));
        TSAdvancedSetupGroupBox->setTitle(QApplication::translate("MainWindow", "Advanced", 0, QApplication::UnicodeUTF8));
        label_advanced_select->setText(QApplication::translate("MainWindow", "Select:", 0, QApplication::UnicodeUTF8));
        rbtnSelectFlags->setText(QApplication::translate("MainWindow", "Flags", 0, QApplication::UnicodeUTF8));
        rbtnSelectQuestions->setText(QApplication::translate("MainWindow", "Questions", 0, QApplication::UnicodeUTF8));
        label_exclude->setText(QApplication::translate("MainWindow", "<b>Available:</b>", 0, QApplication::UnicodeUTF8));
        label_search_available->setText(QApplication::translate("MainWindow", "Search:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSSearchAvailableLineEdit->setStatusTip(QApplication::translate("MainWindow", "Type a keyword to filter the list below", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_include->setText(QApplication::translate("MainWindow", "<b>Used:</b>", 0, QApplication::UnicodeUTF8));
        label_search_used->setText(QApplication::translate("MainWindow", "Search:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSSearchUsedLineEdit->setStatusTip(QApplication::translate("MainWindow", "Type a keyword to filter the list below", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        QTableWidgetItem *___qtablewidgetitem = TSIncludeTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Flag name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = TSIncludeTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Number of questions", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = TSIncludeTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Pass mark", 0, QApplication::UnicodeUTF8));
        TSScoringSystemGroupBox->setTitle(QApplication::translate("MainWindow", "Scoring system", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSAllowIncompleteAnswersCheckBox->setStatusTip(QApplication::translate("MainWindow", "Allow giving points for partially correct answers (this affects multiple choice questions only)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TSAllowIncompleteAnswersCheckBox->setText(QApplication::translate("MainWindow", "Allow partially correct answers", 0, QApplication::UnicodeUTF8));
        TSSeparateSettingsForDifficultyLevelsCheckBox->setText(QApplication::translate("MainWindow", "Separate settings for each difficulty level", 0, QApplication::UnicodeUTF8));
        label_easy_correctanswer->setText(QApplication::translate("MainWindow", "Correct answer:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSEasyCorrectAnswerSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify the amount of points given for a correct answer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_easy_incorrectanswer->setText(QApplication::translate("MainWindow", "Incorrect answer:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSEasyIncorrectAnswerSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify the amount of points taken for an incorrect answer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_easy_missinganswer->setText(QApplication::translate("MainWindow", "Missing answer:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSEasyMissingAnswerSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify the amount of points taken for each missing answer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_medium_correctanswer->setText(QApplication::translate("MainWindow", "Correct answer:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSMediumCorrectAnswerSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify the amount of points given for a correct answer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_medium_incorrectanswer->setText(QApplication::translate("MainWindow", "Incorrect answer:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSMediumIncorrectAnswerSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify the amount of points taken for an incorrect answer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_medium_missinganswer->setText(QApplication::translate("MainWindow", "Missing answer:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSMediumMissingAnswerSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify the amount of points taken for each missing answer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_difficult_correctanswer->setText(QApplication::translate("MainWindow", "Correct answer:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSDifficultCorrectAnswerSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify the amount of points given for a correct answer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_difficult_incorrectanswer->setText(QApplication::translate("MainWindow", "Incorrect answer:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSDifficultIncorrectAnswerSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify the amount of points taken for an incorrect answer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_difficult_missinganswer->setText(QApplication::translate("MainWindow", "Missing answer:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSDifficultMissingAnswerSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify the amount of points taken for each missing answer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_easy_icon1->setText(QString());
        label_easy_icon2->setText(QString());
        label_easy_icon3->setText(QString());
        label_medium_icon1->setText(QString());
        label_medium_icon2->setText(QString());
        label_medium_icon3->setText(QString());
        label_difficult_icon1->setText(QString());
        label_difficult_icon2->setText(QString());
        label_difficult_icon3->setText(QString());
        label_test_name->setText(QApplication::translate("MainWindow", "Test name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSCustomTestNameCheckBox->setStatusTip(QApplication::translate("MainWindow", "Enable setting a custom test name (if unchecked, database name will be used)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TSCustomTestNameCheckBox->setText(QApplication::translate("MainWindow", "Custom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSTestNameLineEdit->setStatusTip(QApplication::translate("MainWindow", "Set a custom test name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_allow_groups->setText(QApplication::translate("MainWindow", "Groups:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSGroupsCheckBox->setStatusTip(QApplication::translate("MainWindow", "Allow one question per group to appear in one test only, i.e. choose one of the group randomly", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TSGroupsCheckBox->setText(QApplication::translate("MainWindow", "Allow one question per group only", 0, QApplication::UnicodeUTF8));
        label_qnum->setText(QApplication::translate("MainWindow", "Number of questions:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSMaxQnumCheckBox->setStatusTip(QApplication::translate("MainWindow", "Use the maximum number of questions possible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TSMaxQnumCheckBox->setText(QApplication::translate("MainWindow", "Maximum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSQnumSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify the number of questions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_passmark->setText(QApplication::translate("MainWindow", "Pass mark:", 0, QApplication::UnicodeUTF8));
        label_testtime->setText(QApplication::translate("MainWindow", "Time for:", 0, QApplication::UnicodeUTF8));
        rbtnTestTime->setText(QApplication::translate("MainWindow", "the whole test", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSTestTimeEdit->setStatusTip(QApplication::translate("MainWindow", "Time for the whole test", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TSTestTimeEdit->setDisplayFormat(QApplication::translate("MainWindow", "HH:mm", 0, QApplication::UnicodeUTF8));
        rbtnQuestionTime->setText(QApplication::translate("MainWindow", "one question", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSQuestionTimeEdit->setStatusTip(QApplication::translate("MainWindow", "Time for one question (multiplied by the number of questions)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TSQuestionTimeEdit->setDisplayFormat(QApplication::translate("MainWindow", "HH:mm", 0, QApplication::UnicodeUTF8));
        label_server_port->setText(QApplication::translate("MainWindow", "Server port:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSCustomServerPortCheckBox->setStatusTip(QApplication::translate("MainWindow", "Use a custom server port (if unchecked, a random port will be chosen)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TSCustomServerPortCheckBox->setText(QApplication::translate("MainWindow", "Custom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSCustomServerPortSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify a custom server port", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        btnStartServer->setStatusTip(QApplication::translate("MainWindow", "Proceed to testing mode using this computer as a server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btnStartServer->setText(QApplication::translate("MainWindow", "Start server", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSPassMarkSpinBox->setStatusTip(QApplication::translate("MainWindow", "Specify the minimum number of correct answers (with score above 0) to pass the test", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        TSHideQuestionNamesCheckBox->setStatusTip(QApplication::translate("MainWindow", "Use this option if the names of your questions contain clues to their answers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TSHideQuestionNamesCheckBox->setText(QApplication::translate("MainWindow", "Hide question names, show numbers instead", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSHideCorrectAnswersCheckBox->setStatusTip(QApplication::translate("MainWindow", "Do not show correct answers at the end of the test", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TSHideCorrectAnswersCheckBox->setText(QApplication::translate("MainWindow", "Do not show correct answers at the end of the test", 0, QApplication::UnicodeUTF8));
        label_other_settings->setText(QApplication::translate("MainWindow", "Other settings:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSShuffleAnswersCheckBox->setStatusTip(QApplication::translate("MainWindow", "Reorder answers randomly", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TSShuffleAnswersCheckBox->setText(QApplication::translate("MainWindow", "Shuffle answers", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        TSDoNotPrintResultsCheckBox->setStatusTip(QApplication::translate("MainWindow", "Do not print test results automatically", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        TSDoNotPrintResultsCheckBox->setText(QApplication::translate("MainWindow", "Do not print test results", 0, QApplication::UnicodeUTF8));
        SMInfoGroupBox->setTitle(QApplication::translate("MainWindow", "Server information", 0, QApplication::UnicodeUTF8));
        SMIPortLabel->setText(QApplication::translate("MainWindow", "The server is running on port <b>%1</b>. You may now run iTestClient on each client PC. Do not quit iTestServer while testing!", 0, QApplication::UnicodeUTF8));
        SMClientsGroupBox->setTitle(QApplication::translate("MainWindow", "List of clients", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SMLCListWidget->setStatusTip(QApplication::translate("MainWindow", "Select a client to get more information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SMSelectedClientGroupBox->setTitle(QApplication::translate("MainWindow", "Selected client", 0, QApplication::UnicodeUTF8));
        SMSC_label_4->setText(QApplication::translate("MainWindow", "<b>Name:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SMSCNameLabel->setStatusTip(QApplication::translate("MainWindow", "The selected client's name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SMSCNameLabel->setText(QApplication::translate("MainWindow", "Not identified yet", 0, QApplication::UnicodeUTF8));
        SMSC_label_1->setText(QApplication::translate("MainWindow", "<b>Status:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SMSCStatusLabel->setStatusTip(QApplication::translate("MainWindow", "The selected client's status", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SMSCStatusLabel->setText(QApplication::translate("MainWindow", "Disconnected", 0, QApplication::UnicodeUTF8));
        SMSC_label_2->setText(QApplication::translate("MainWindow", "<b>Total score:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SMSCScoreLabel->setStatusTip(QApplication::translate("MainWindow", "The selected client's total score", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SMSCScoreLabel->setText(QApplication::translate("MainWindow", "Not ready yet", 0, QApplication::UnicodeUTF8));
        SMSC_label_3->setText(QApplication::translate("MainWindow", "<b>Results:</b>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = SMSCResultsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Question name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = SMSCResultsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Score", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = SMSCResultsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Answer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = SMSCResultsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Correct answer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SMSCResultsTableWidget->setStatusTip(QApplication::translate("MainWindow", "The selected client's exam results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SMLogGroupBox->setTitle(QApplication::translate("MainWindow", "Server log", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SMSLListWidget->setStatusTip(QApplication::translate("MainWindow", "Server log", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SVLSGroupBox->setTitle(QApplication::translate("MainWindow", "List of sessions", 0, QApplication::UnicodeUTF8));
        label_search_sessions->setText(QApplication::translate("MainWindow", "Search:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVLSSearchLineEdit->setStatusTip(QApplication::translate("MainWindow", "Type a keyword to filter the list below", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        SVLSListWidget->setStatusTip(QApplication::translate("MainWindow", "Double click a session to view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_archived_sessions->setText(QApplication::translate("MainWindow", "<b>Archived sessions:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVLASListWidget->setStatusTip(QApplication::translate("MainWindow", "Double click a session to view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SVCSGroupBox->setTitle(QApplication::translate("MainWindow", "Selected session", 0, QApplication::UnicodeUTF8));
        label_current_session_name->setText(QApplication::translate("MainWindow", "<b>Session name:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVNameLabel->setStatusTip(QApplication::translate("MainWindow", "Name of the selected session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_current_session_passmark->setText(QApplication::translate("MainWindow", "<b>Pass mark:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVPassMarkLabel->setStatusTip(QApplication::translate("MainWindow", "The minimum number of correct answers to pass this exam", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_overall_results->setText(QApplication::translate("MainWindow", "<b>Average:</b>", 0, QApplication::UnicodeUTF8));
        label_overall_score_bad->setText(QApplication::translate("MainWindow", "Bad", 0, QApplication::UnicodeUTF8));
        label_overall_score_good->setText(QApplication::translate("MainWindow", "Good", 0, QApplication::UnicodeUTF8));
        label_current_session_datetime->setText(QApplication::translate("MainWindow", "<b>Date and time:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVDateTimeLabel->setStatusTip(QApplication::translate("MainWindow", "Date and time of the selected session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SVOverallResultsLabel->setText(QString());
#ifndef QT_NO_STATUSTIP
        SVOverallResultsProgressBar->setStatusTip(QApplication::translate("MainWindow", "Average result of the selected session", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SVLCGroupBox->setTitle(QApplication::translate("MainWindow", "List of students", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVLCListWidget->setStatusTip(QApplication::translate("MainWindow", "Select a student to get more information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SVStudent_label_1->setText(QApplication::translate("MainWindow", "<b>Name:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVStudentNameLabel->setStatusTip(QApplication::translate("MainWindow", "The selected student's name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SVStudentNameLabel->setText(QApplication::translate("MainWindow", "Not identified yet", 0, QApplication::UnicodeUTF8));
        SVStudent_label_2->setText(QApplication::translate("MainWindow", "<b>Total score:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVStudentScoreLabel->setStatusTip(QApplication::translate("MainWindow", "The selected student's total score", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SVStudentScoreLabel->setText(QApplication::translate("MainWindow", "Not ready yet", 0, QApplication::UnicodeUTF8));
        SVStudent_label_3->setText(QApplication::translate("MainWindow", "<b>Results:</b>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = SVStudentResultsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Question name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = SVStudentResultsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Score", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = SVStudentResultsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Answer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = SVStudentResultsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Correct answer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVStudentResultsTableWidget->setStatusTip(QApplication::translate("MainWindow", "The selected student's exam results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SVStudentTabWidget->setTabText(SVStudentTabWidget->indexOf(selectedStudentTab), QApplication::translate("MainWindow", "Selected student", 0, QApplication::UnicodeUTF8));
        label_search_details->setText(QApplication::translate("MainWindow", "Search:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVSearchDetailsLineEdit->setStatusTip(QApplication::translate("MainWindow", "Type a keyword to filter the list below", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        QTableWidgetItem *___qtablewidgetitem11 = SVPassMarkTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Flag name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = SVPassMarkTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Pass mark", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVPassMarkTableWidget->setStatusTip(QApplication::translate("MainWindow", "Pass mark details", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        SVStudentTabWidget->setTabText(SVStudentTabWidget->indexOf(passMarkDetailsTab), QApplication::translate("MainWindow", "Pass mark", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = SVScoringSystemTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Value", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = SVScoringSystemTableWidget->isSortingEnabled();
        SVScoringSystemTableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem14 = SVScoringSystemTableWidget->item(0, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Partially correct answers", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = SVScoringSystemTableWidget->item(1, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Correct answer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = SVScoringSystemTableWidget->item(2, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Incorrect answer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = SVScoringSystemTableWidget->item(3, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Missing answer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = SVScoringSystemTableWidget->item(4, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Correct answer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = SVScoringSystemTableWidget->item(5, 0);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Incorrect answer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = SVScoringSystemTableWidget->item(6, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Missing answer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = SVScoringSystemTableWidget->item(7, 0);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "Correct answer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = SVScoringSystemTableWidget->item(8, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "Incorrect answer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = SVScoringSystemTableWidget->item(9, 0);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "Missing answer", 0, QApplication::UnicodeUTF8));
        SVScoringSystemTableWidget->setSortingEnabled(__sortingEnabled);

        SVStudentTabWidget->setTabText(SVStudentTabWidget->indexOf(scoringSystemTab), QApplication::translate("MainWindow", "Scoring system", 0, QApplication::UnicodeUTF8));
        SVLogGroupBox->setTitle(QApplication::translate("MainWindow", "Server log", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        SVLogListWidget->setStatusTip(QApplication::translate("MainWindow", "Server log", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CLLCGroupBox->setTitle(QApplication::translate("MainWindow", "List of classes", 0, QApplication::UnicodeUTF8));
        label_search_classes->setText(QApplication::translate("MainWindow", "Search:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CLLCSearchLineEdit->setStatusTip(QApplication::translate("MainWindow", "Type a keyword to filter the list below", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        CLLCListWidget->setStatusTip(QApplication::translate("MainWindow", "Double click a class to view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CLSCGroupBox->setTitle(QApplication::translate("MainWindow", "Selected class", 0, QApplication::UnicodeUTF8));
        CLSCNameLabel->setText(QApplication::translate("MainWindow", "<b>Class name:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CLSCNameLineEdit->setStatusTip(QApplication::translate("MainWindow", "Name of the selected class (if you change this name, do not forget to click the Apply button on the right)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CLSCFirstYearLabel->setText(QApplication::translate("MainWindow", "<b>First year:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CLSCFirstYearSpinBox->setStatusTip(QApplication::translate("MainWindow", "The first year of the selected class (if you change this year, do not forget to click the Apply button on the right)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CLSCLastYearLabel->setText(QApplication::translate("MainWindow", "<b>Last year:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CLSCLastYearSpinBox->setStatusTip(QApplication::translate("MainWindow", "The last year of the selected class (if you change this year, do not forget to click the Apply button on the right)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CLSCNumStudentsTextLabel->setText(QApplication::translate("MainWindow", "<b>Number of students:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CLSCNumStudentsLabel->setStatusTip(QApplication::translate("MainWindow", "Number of students in the selected class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CLSCNumStudentsLabel->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        CLSCAverageTextLabel->setText(QApplication::translate("MainWindow", "<b>Class average:</b>", 0, QApplication::UnicodeUTF8));
        CLSCAverageLabel->setText(QApplication::translate("MainWindow", "0%", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        tbtnApplyClassChanges->setStatusTip(QApplication::translate("MainWindow", "Apply changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CLLSGroupBox->setTitle(QApplication::translate("MainWindow", "List of students", 0, QApplication::UnicodeUTF8));
        label_search_class_students->setText(QApplication::translate("MainWindow", "Search:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CLLSSearchLineEdit->setStatusTip(QApplication::translate("MainWindow", "Type a keyword to filter the list below", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        CLLSListWidget->setStatusTip(QApplication::translate("MainWindow", "Select a student to get more information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CLSSGroupBox->setTitle(QApplication::translate("MainWindow", "Selected student", 0, QApplication::UnicodeUTF8));
        CLSSNameLabel->setText(QApplication::translate("MainWindow", "<b>Name:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CLSSNameLineEdit->setStatusTip(QApplication::translate("MainWindow", "Name of the selected student (if you change this name, do not forget to click the Apply button on the right)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        tbtnSaveMemberName->setStatusTip(QApplication::translate("MainWindow", "Apply changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CLSSAverageTextLabel->setText(QApplication::translate("MainWindow", "<b>Average:</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CLSSAverageLabel->setStatusTip(QApplication::translate("MainWindow", "The selected student's average", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        CLSSAverageLabel->setText(QApplication::translate("MainWindow", "0%", 0, QApplication::UnicodeUTF8));
        CLSSResultsLabel->setText(QApplication::translate("MainWindow", "<b>Results:</b>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = CLSSResultsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "Session", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = CLSSResultsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem26 = CLSSResultsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "Results", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CLSSResultsTableWidget->setStatusTip(QApplication::translate("MainWindow", "List of results of the selected student", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        tbtnAddSession->setStatusTip(QApplication::translate("MainWindow", "Add the selected session from the list of sessions on the left to the list of results above", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnAddSession->setText(QApplication::translate("MainWindow", "Add selected session", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        tbtnRemoveSession->setStatusTip(QApplication::translate("MainWindow", "Remove the selected session from the list of results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnRemoveSession->setText(QApplication::translate("MainWindow", "Remove", 0, QApplication::UnicodeUTF8));
        CLLSSGroupBox->setTitle(QApplication::translate("MainWindow", "List of sessions", 0, QApplication::UnicodeUTF8));
        label_search_class_sessions->setText(QApplication::translate("MainWindow", "Search:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        CLLSSSearchLineEdit->setStatusTip(QApplication::translate("MainWindow", "Type a keyword to filter the list below", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        CLLSSListWidget->setStatusTip(QApplication::translate("MainWindow", "Double click a session to view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuSession->setTitle(QApplication::translate("MainWindow", "Sessio&n", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", 0, QApplication::UnicodeUTF8));
        menuQuestion->setTitle(QApplication::translate("MainWindow", "&Question", 0, QApplication::UnicodeUTF8));
        menuAttachments->setTitle(QApplication::translate("MainWindow", "Attachments", 0, QApplication::UnicodeUTF8));
        menuServer->setTitle(QApplication::translate("MainWindow", "&Server", 0, QApplication::UnicodeUTF8));
        menuDatabase->setTitle(QApplication::translate("MainWindow", "&Database", 0, QApplication::UnicodeUTF8));
        menuSort_questions->setTitle(QApplication::translate("MainWindow", "&Sort questions", 0, QApplication::UnicodeUTF8));
        menuFilter_LQ->setTitle(QApplication::translate("MainWindow", "&Filter the list of questions", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuClass->setTitle(QApplication::translate("MainWindow", "&Class", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_V2_H

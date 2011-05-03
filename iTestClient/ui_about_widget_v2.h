/********************************************************************************
** Form generated from reading UI file 'about_widget_v2.ui'
**
** Created: Sun 27. Mar 14:44:06 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_WIDGET_V2_H
#define UI_ABOUT_WIDGET_V2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QLabel *iconLabel;
    QLabel *aboutLabel;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout1;
    QTabWidget *tabWidget;
    QWidget *aboutTab;
    QGridLayout *gridLayout1;
    QTextBrowser *aboutTextBrowser;
    QWidget *aboutQtTab;
    QGridLayout *gridLayout2;
    QTextBrowser *aboutQtTextBrowser;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem2;
    QPushButton *btnClose;

    void setupUi(QWidget *AboutWidget)
    {
        if (AboutWidget->objectName().isEmpty())
            AboutWidget->setObjectName(QString::fromUtf8("AboutWidget"));
        AboutWidget->resize(602, 303);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/images/contents.png"));
        AboutWidget->setWindowIcon(icon);
        gridLayout = new QGridLayout(AboutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        iconLabel = new QLabel(AboutWidget);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/images/itest.png")));
        iconLabel->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        vboxLayout->addWidget(iconLabel);

        aboutLabel = new QLabel(AboutWidget);
        aboutLabel->setObjectName(QString::fromUtf8("aboutLabel"));
        QFont font;
        font.setPointSize(16);
        aboutLabel->setFont(font);
        aboutLabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        vboxLayout->addWidget(aboutLabel);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(AboutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        aboutTab = new QWidget();
        aboutTab->setObjectName(QString::fromUtf8("aboutTab"));
        gridLayout1 = new QGridLayout(aboutTab);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(6, 6, 6, 6);
        aboutTextBrowser = new QTextBrowser(aboutTab);
        aboutTextBrowser->setObjectName(QString::fromUtf8("aboutTextBrowser"));

        gridLayout1->addWidget(aboutTextBrowser, 0, 0, 1, 1);

        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/images/itest.png"));
        tabWidget->addTab(aboutTab, icon1, QString());
        aboutQtTab = new QWidget();
        aboutQtTab->setObjectName(QString::fromUtf8("aboutQtTab"));
        gridLayout2 = new QGridLayout(aboutQtTab);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(6, 6, 6, 6);
        aboutQtTextBrowser = new QTextBrowser(aboutQtTab);
        aboutQtTextBrowser->setObjectName(QString::fromUtf8("aboutQtTextBrowser"));

        gridLayout2->addWidget(aboutQtTextBrowser, 0, 0, 1, 1);

        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/images/qt4.png"));
        tabWidget->addTab(aboutQtTab, icon2, QString());

        vboxLayout1->addWidget(tabWidget);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        btnClose = new QPushButton(AboutWidget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/images/fileclose.png"));
        btnClose->setIcon(icon3);
        btnClose->setIconSize(QSize(16, 16));

        hboxLayout->addWidget(btnClose);


        vboxLayout1->addLayout(hboxLayout);


        gridLayout->addLayout(vboxLayout1, 0, 1, 1, 1);


        retranslateUi(AboutWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutWidget);
    } // setupUi

    void retranslateUi(QWidget *AboutWidget)
    {
        AboutWidget->setWindowTitle(QApplication::translate("AboutWidget", "About iTest", 0, QApplication::UnicodeUTF8));
        iconLabel->setText(QString());
        aboutLabel->setText(QApplication::translate("AboutWidget", "About iTest", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(aboutTab), QApplication::translate("AboutWidget", "About iTest", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(aboutQtTab), QApplication::translate("AboutWidget", "About Qt", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("AboutWidget", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutWidget: public Ui_AboutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_WIDGET_V2_H

/********************************************************************************
** Form generated from reading UI file 'mttextedit.ui'
**
** Created: Sun 27. Mar 14:41:37 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MTTEXTEDIT_H
#define UI_MTTEXTEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MTTextEdit
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_2;
    QLabel *nameLabel;
    QToolButton *tbtnUndo;
    QToolButton *tbtnRedo;
    QFrame *line_4;
    QFontComboBox *fontComboBox;
    QComboBox *sizeComboBox;
    QFrame *line;
    QToolButton *tbtnBold;
    QToolButton *tbtnItalic;
    QToolButton *tbtnUnderlined;
    QToolButton *tbtnColour;
    QFrame *line_2;
    QToolButton *tbtnAlignLeft;
    QToolButton *tbtnAlignCentre;
    QToolButton *tbtnAlignRight;
    QToolButton *tbtnAlignJustify;
    QTextEdit *theTextEdit;

    void setupUi(QWidget *MTTextEdit)
    {
        if (MTTextEdit->objectName().isEmpty())
            MTTextEdit->setObjectName(QString::fromUtf8("MTTextEdit"));
        MTTextEdit->resize(713, 354);
        verticalLayout = new QVBoxLayout(MTTextEdit);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        nameLabel = new QLabel(MTTextEdit);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy);

        _2->addWidget(nameLabel);

        tbtnUndo = new QToolButton(MTTextEdit);
        tbtnUndo->setObjectName(QString::fromUtf8("tbtnUndo"));
        tbtnUndo->setEnabled(false);
        tbtnUndo->setMinimumSize(QSize(18, 18));
        tbtnUndo->setMaximumSize(QSize(18, 18));

        _2->addWidget(tbtnUndo);

        tbtnRedo = new QToolButton(MTTextEdit);
        tbtnRedo->setObjectName(QString::fromUtf8("tbtnRedo"));
        tbtnRedo->setEnabled(false);
        tbtnRedo->setMinimumSize(QSize(18, 18));
        tbtnRedo->setMaximumSize(QSize(18, 18));

        _2->addWidget(tbtnRedo);

        line_4 = new QFrame(MTTextEdit);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        _2->addWidget(line_4);

        fontComboBox = new QFontComboBox(MTTextEdit);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        fontComboBox->setMinimumSize(QSize(70, 18));
        fontComboBox->setMaximumSize(QSize(200, 16777215));

        _2->addWidget(fontComboBox);

        sizeComboBox = new QComboBox(MTTextEdit);
        sizeComboBox->setObjectName(QString::fromUtf8("sizeComboBox"));
        sizeComboBox->setMinimumSize(QSize(70, 18));
        sizeComboBox->setMaximumSize(QSize(70, 16777215));

        _2->addWidget(sizeComboBox);

        line = new QFrame(MTTextEdit);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        _2->addWidget(line);

        tbtnBold = new QToolButton(MTTextEdit);
        tbtnBold->setObjectName(QString::fromUtf8("tbtnBold"));
        tbtnBold->setMinimumSize(QSize(18, 18));
        tbtnBold->setMaximumSize(QSize(18, 18));
        tbtnBold->setCheckable(true);

        _2->addWidget(tbtnBold);

        tbtnItalic = new QToolButton(MTTextEdit);
        tbtnItalic->setObjectName(QString::fromUtf8("tbtnItalic"));
        tbtnItalic->setMinimumSize(QSize(18, 18));
        tbtnItalic->setMaximumSize(QSize(18, 18));
        tbtnItalic->setCheckable(true);

        _2->addWidget(tbtnItalic);

        tbtnUnderlined = new QToolButton(MTTextEdit);
        tbtnUnderlined->setObjectName(QString::fromUtf8("tbtnUnderlined"));
        tbtnUnderlined->setMinimumSize(QSize(18, 18));
        tbtnUnderlined->setMaximumSize(QSize(18, 18));
        tbtnUnderlined->setCheckable(true);

        _2->addWidget(tbtnUnderlined);

        tbtnColour = new QToolButton(MTTextEdit);
        tbtnColour->setObjectName(QString::fromUtf8("tbtnColour"));
        tbtnColour->setMinimumSize(QSize(18, 18));
        tbtnColour->setMaximumSize(QSize(18, 18));
        tbtnColour->setCheckable(false);

        _2->addWidget(tbtnColour);

        line_2 = new QFrame(MTTextEdit);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        _2->addWidget(line_2);

        tbtnAlignLeft = new QToolButton(MTTextEdit);
        tbtnAlignLeft->setObjectName(QString::fromUtf8("tbtnAlignLeft"));
        tbtnAlignLeft->setMinimumSize(QSize(18, 18));
        tbtnAlignLeft->setMaximumSize(QSize(18, 18));
        tbtnAlignLeft->setCheckable(true);
        tbtnAlignLeft->setChecked(true);

        _2->addWidget(tbtnAlignLeft);

        tbtnAlignCentre = new QToolButton(MTTextEdit);
        tbtnAlignCentre->setObjectName(QString::fromUtf8("tbtnAlignCentre"));
        tbtnAlignCentre->setMinimumSize(QSize(18, 18));
        tbtnAlignCentre->setMaximumSize(QSize(18, 18));
        tbtnAlignCentre->setCheckable(true);
        tbtnAlignCentre->setChecked(false);

        _2->addWidget(tbtnAlignCentre);

        tbtnAlignRight = new QToolButton(MTTextEdit);
        tbtnAlignRight->setObjectName(QString::fromUtf8("tbtnAlignRight"));
        tbtnAlignRight->setMinimumSize(QSize(18, 18));
        tbtnAlignRight->setMaximumSize(QSize(18, 18));
        tbtnAlignRight->setCheckable(true);
        tbtnAlignRight->setChecked(false);

        _2->addWidget(tbtnAlignRight);

        tbtnAlignJustify = new QToolButton(MTTextEdit);
        tbtnAlignJustify->setObjectName(QString::fromUtf8("tbtnAlignJustify"));
        tbtnAlignJustify->setMinimumSize(QSize(18, 18));
        tbtnAlignJustify->setMaximumSize(QSize(18, 18));
        tbtnAlignJustify->setCheckable(true);
        tbtnAlignJustify->setChecked(false);

        _2->addWidget(tbtnAlignJustify);


        verticalLayout->addLayout(_2);

        theTextEdit = new QTextEdit(MTTextEdit);
        theTextEdit->setObjectName(QString::fromUtf8("theTextEdit"));
        theTextEdit->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(theTextEdit);


        retranslateUi(MTTextEdit);
        QObject::connect(theTextEdit, SIGNAL(redoAvailable(bool)), tbtnRedo, SLOT(setEnabled(bool)));
        QObject::connect(theTextEdit, SIGNAL(undoAvailable(bool)), tbtnUndo, SLOT(setEnabled(bool)));
        QObject::connect(tbtnRedo, SIGNAL(clicked()), theTextEdit, SLOT(redo()));
        QObject::connect(tbtnUndo, SIGNAL(clicked()), theTextEdit, SLOT(undo()));

        sizeComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MTTextEdit);
    } // setupUi

    void retranslateUi(QWidget *MTTextEdit)
    {
#ifndef QT_NO_STATUSTIP
        tbtnUndo->setStatusTip(QApplication::translate("MTTextEdit", "Undo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        tbtnRedo->setStatusTip(QApplication::translate("MTTextEdit", "Redo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        fontComboBox->setStatusTip(QApplication::translate("MTTextEdit", "Choose a font", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        sizeComboBox->clear();
        sizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("MTTextEdit", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "22", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "26", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "28", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "36", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "48", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MTTextEdit", "96", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        sizeComboBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        sizeComboBox->setStatusTip(QApplication::translate("MTTextEdit", "Select text size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        tbtnBold->setStatusTip(QApplication::translate("MTTextEdit", "Bold", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnBold->setText(QApplication::translate("MTTextEdit", "B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        tbtnItalic->setStatusTip(QApplication::translate("MTTextEdit", "Italic", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnItalic->setText(QApplication::translate("MTTextEdit", "I", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        tbtnUnderlined->setStatusTip(QApplication::translate("MTTextEdit", "Underlined", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnUnderlined->setText(QApplication::translate("MTTextEdit", "U", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        tbtnColour->setStatusTip(QApplication::translate("MTTextEdit", "Text colour", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnColour->setText(QString());
#ifndef QT_NO_STATUSTIP
        tbtnAlignLeft->setStatusTip(QApplication::translate("MTTextEdit", "Align left", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnAlignLeft->setText(QApplication::translate("MTTextEdit", "L", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        tbtnAlignCentre->setStatusTip(QApplication::translate("MTTextEdit", "Align centre", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnAlignCentre->setText(QApplication::translate("MTTextEdit", "C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        tbtnAlignRight->setStatusTip(QApplication::translate("MTTextEdit", "Align right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnAlignRight->setText(QApplication::translate("MTTextEdit", "R", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        tbtnAlignJustify->setStatusTip(QApplication::translate("MTTextEdit", "Justify", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbtnAlignJustify->setText(QApplication::translate("MTTextEdit", "J", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MTTextEdit);
    } // retranslateUi

};

namespace Ui {
    class MTTextEdit: public Ui_MTTextEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MTTEXTEDIT_H

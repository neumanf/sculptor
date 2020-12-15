/********************************************************************************
** Form generated from reading UI file 'newsculpturedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSCULPTUREDIALOG_H
#define UI_NEWSCULPTUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewSculptureDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *xDimBox;
    QLabel *label_3;
    QSpinBox *yDimBox;
    QLabel *label_4;
    QSpinBox *zDimBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewSculptureDialog)
    {
        if (NewSculptureDialog->objectName().isEmpty())
            NewSculptureDialog->setObjectName(QString::fromUtf8("NewSculptureDialog"));
        NewSculptureDialog->resize(400, 188);
        verticalLayout_2 = new QVBoxLayout(NewSculptureDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(NewSculptureDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(NewSculptureDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        xDimBox = new QSpinBox(NewSculptureDialog);
        xDimBox->setObjectName(QString::fromUtf8("xDimBox"));

        gridLayout->addWidget(xDimBox, 0, 1, 1, 1);

        label_3 = new QLabel(NewSculptureDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        yDimBox = new QSpinBox(NewSculptureDialog);
        yDimBox->setObjectName(QString::fromUtf8("yDimBox"));

        gridLayout->addWidget(yDimBox, 1, 1, 1, 1);

        label_4 = new QLabel(NewSculptureDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        zDimBox = new QSpinBox(NewSculptureDialog);
        zDimBox->setObjectName(QString::fromUtf8("zDimBox"));

        gridLayout->addWidget(zDimBox, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(1, 20);

        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(NewSculptureDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(NewSculptureDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewSculptureDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewSculptureDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewSculptureDialog);
    } // setupUi

    void retranslateUi(QDialog *NewSculptureDialog)
    {
        NewSculptureDialog->setWindowTitle(QCoreApplication::translate("NewSculptureDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewSculptureDialog", "Dimens\303\265es", nullptr));
        label_2->setText(QCoreApplication::translate("NewSculptureDialog", "x", nullptr));
        label_3->setText(QCoreApplication::translate("NewSculptureDialog", "y", nullptr));
        label_4->setText(QCoreApplication::translate("NewSculptureDialog", "z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewSculptureDialog: public Ui_NewSculptureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSCULPTUREDIALOG_H

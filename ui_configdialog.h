/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *TalkPathEdit;
    QPushButton *browseButton;
    QCheckBox *serverModeCheckBox;
    QLabel *serverAddressLabel;
    QLineEdit *serverAddressEdit;
    QLabel *label_3;
    QSpinBox *portSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName(QStringLiteral("ConfigDialog"));
        ConfigDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ConfigDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(ConfigDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        TalkPathEdit = new QLineEdit(ConfigDialog);
        TalkPathEdit->setObjectName(QStringLiteral("TalkPathEdit"));

        horizontalLayout_2->addWidget(TalkPathEdit);

        browseButton = new QPushButton(ConfigDialog);
        browseButton->setObjectName(QStringLiteral("browseButton"));

        horizontalLayout_2->addWidget(browseButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        serverModeCheckBox = new QCheckBox(ConfigDialog);
        serverModeCheckBox->setObjectName(QStringLiteral("serverModeCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, serverModeCheckBox);

        serverAddressLabel = new QLabel(ConfigDialog);
        serverAddressLabel->setObjectName(QStringLiteral("serverAddressLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, serverAddressLabel);

        serverAddressEdit = new QLineEdit(ConfigDialog);
        serverAddressEdit->setObjectName(QStringLiteral("serverAddressEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, serverAddressEdit);

        label_3 = new QLabel(ConfigDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        portSpinBox = new QSpinBox(ConfigDialog);
        portSpinBox->setObjectName(QStringLiteral("portSpinBox"));
        portSpinBox->setMinimum(1025);
        portSpinBox->setMaximum(65535);
        portSpinBox->setValue(6000);

        formLayout->setWidget(3, QFormLayout::FieldRole, portSpinBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(ConfigDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QApplication::translate("ConfigDialog", "Dialog", 0));
        label->setText(QApplication::translate("ConfigDialog", "Ruta Talk:", 0));
        browseButton->setText(QApplication::translate("ConfigDialog", "Examinar", 0));
        serverModeCheckBox->setText(QApplication::translate("ConfigDialog", "Modo Servidor", 0));
        serverAddressLabel->setText(QApplication::translate("ConfigDialog", "IP Servidor:", 0));
        serverAddressEdit->setText(QApplication::translate("ConfigDialog", "127.0.0.1", 0));
        label_3->setText(QApplication::translate("ConfigDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H

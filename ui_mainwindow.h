/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *outputTextEdit;
    QLineEdit *inputTextEdit;
    QVBoxLayout *verticalLayout_2;
    QPushButton *connectButton;
    QPushButton *editButton;
    QPushButton *aboutButton;
    QPushButton *exitButtom;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(429, 304);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        outputTextEdit = new QPlainTextEdit(centralWidget);
        outputTextEdit->setObjectName(QStringLiteral("outputTextEdit"));
        outputTextEdit->setReadOnly(true);

        verticalLayout->addWidget(outputTextEdit);

        inputTextEdit = new QLineEdit(centralWidget);
        inputTextEdit->setObjectName(QStringLiteral("inputTextEdit"));

        verticalLayout->addWidget(inputTextEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setMinimumSize(QSize(89, 0));

        verticalLayout_2->addWidget(connectButton);

        editButton = new QPushButton(centralWidget);
        editButton->setObjectName(QStringLiteral("editButton"));

        verticalLayout_2->addWidget(editButton);

        aboutButton = new QPushButton(centralWidget);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));

        verticalLayout_2->addWidget(aboutButton);

        exitButtom = new QPushButton(centralWidget);
        exitButtom->setObjectName(QStringLiteral("exitButtom"));

        verticalLayout_2->addWidget(exitButtom);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 429, 24));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Talk GUI", 0));
        connectButton->setText(QApplication::translate("MainWindow", "Conectar", 0));
        editButton->setText(QApplication::translate("MainWindow", "Configurar", 0));
        aboutButton->setText(QApplication::translate("MainWindow", "Acerca", 0));
        exitButtom->setText(QApplication::translate("MainWindow", "Salir", 0));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Talk", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

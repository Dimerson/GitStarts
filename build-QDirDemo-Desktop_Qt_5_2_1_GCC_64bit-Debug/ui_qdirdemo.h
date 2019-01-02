/********************************************************************************
** Form generated from reading UI file 'qdirdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIRDEMO_H
#define UI_QDIRDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QDirDemo
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QDirDemo)
    {
        if (QDirDemo->objectName().isEmpty())
            QDirDemo->setObjectName(QStringLiteral("QDirDemo"));
        QDirDemo->resize(446, 342);
        centralWidget = new QWidget(QDirDemo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);

        QDirDemo->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QDirDemo);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 446, 22));
        QDirDemo->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QDirDemo);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QDirDemo->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QDirDemo);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QDirDemo->setStatusBar(statusBar);

        retranslateUi(QDirDemo);

        QMetaObject::connectSlotsByName(QDirDemo);
    } // setupUi

    void retranslateUi(QMainWindow *QDirDemo)
    {
        QDirDemo->setWindowTitle(QApplication::translate("QDirDemo", "QDirDemo", 0));
        pushButton->setText(QApplication::translate("QDirDemo", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class QDirDemo: public Ui_QDirDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIRDEMO_H

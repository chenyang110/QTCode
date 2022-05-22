/********************************************************************************
** Form generated from reading UI file 'mainscene.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCENE_H
#define UI_MAINSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScene
{
public:
    QAction *actionquit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menustart;

    void setupUi(QMainWindow *MainScene)
    {
        if (MainScene->objectName().isEmpty())
            MainScene->setObjectName(QStringLiteral("MainScene"));
        MainScene->resize(800, 600);
        actionquit = new QAction(MainScene);
        actionquit->setObjectName(QStringLiteral("actionquit"));
        centralwidget = new QWidget(MainScene);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainScene->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainScene);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menustart = new QMenu(menubar);
        menustart->setObjectName(QStringLiteral("menustart"));
        MainScene->setMenuBar(menubar);

        menubar->addAction(menustart->menuAction());
        menustart->addAction(actionquit);

        retranslateUi(MainScene);

        QMetaObject::connectSlotsByName(MainScene);
    } // setupUi

    void retranslateUi(QMainWindow *MainScene)
    {
        MainScene->setWindowTitle(QApplication::translate("MainScene", "\351\207\221\345\270\201\350\277\236\350\277\236\347\234\213", 0));
        actionquit->setText(QApplication::translate("MainScene", "\351\200\200\345\207\272", 0));
        menustart->setTitle(QApplication::translate("MainScene", "\345\274\200\345\247\213", 0));
    } // retranslateUi

};

namespace Ui {
    class MainScene: public Ui_MainScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCENE_H

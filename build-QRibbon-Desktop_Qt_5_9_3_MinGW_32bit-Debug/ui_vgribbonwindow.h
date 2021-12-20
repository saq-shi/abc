/********************************************************************************
** Form generated from reading UI file 'vgribbonwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VGRIBBONWINDOW_H
#define UI_VGRIBBONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VGRibbonWindow
{
public:
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionCancel;
    QAction *action_Qt;
    QAction *actionAboutApp;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionClip;
    QAction *actionNew;
    QAction *actionForward;
    QAction *actionNoIcon;
    QAction *actionnew1;
    QAction *actionOpen;
    QAction *actionNormal;
    QAction *actionFullScreen;
    QAction *actionnew;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QStatusBar *statusbar;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeView;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_7;
    QMenu *menu_5;
    QMenu *menu_6;
    QMenu *menu_4;
    QMenu *menu_3;

    void setupUi(QMainWindow *VGRibbonWindow)
    {
        if (VGRibbonWindow->objectName().isEmpty())
            VGRibbonWindow->setObjectName(QStringLiteral("VGRibbonWindow"));
        VGRibbonWindow->resize(1056, 600);
        VGRibbonWindow->setStyleSheet(QStringLiteral(""));
        actionSave = new QAction(VGRibbonWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon);
        actionQuit = new QAction(VGRibbonWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/icon/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionCancel = new QAction(VGRibbonWindow);
        actionCancel->setObjectName(QStringLiteral("actionCancel"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/icon/reply.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCancel->setIcon(icon2);
        action_Qt = new QAction(VGRibbonWindow);
        action_Qt->setObjectName(QStringLiteral("action_Qt"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/icon/question.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Qt->setIcon(icon3);
        actionAboutApp = new QAction(VGRibbonWindow);
        actionAboutApp->setObjectName(QStringLiteral("actionAboutApp"));
        actionAboutApp->setIcon(icon3);
        actionCopy = new QAction(VGRibbonWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/icon/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(VGRibbonWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionPaste->setIcon(icon4);
        actionDelete = new QAction(VGRibbonWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionDelete->setIcon(icon1);
        actionClip = new QAction(VGRibbonWindow);
        actionClip->setObjectName(QStringLiteral("actionClip"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/icon/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClip->setIcon(icon5);
        actionNew = new QAction(VGRibbonWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/icon/file-text-o.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon6);
        actionForward = new QAction(VGRibbonWindow);
        actionForward->setObjectName(QStringLiteral("actionForward"));
        actionForward->setIcon(icon2);
        actionNoIcon = new QAction(VGRibbonWindow);
        actionNoIcon->setObjectName(QStringLiteral("actionNoIcon"));
        actionnew1 = new QAction(VGRibbonWindow);
        actionnew1->setObjectName(QStringLiteral("actionnew1"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/White/checkBoxChecked"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew1->setIcon(icon7);
        actionOpen = new QAction(VGRibbonWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Resources/icon/folder-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon8);
        actionNormal = new QAction(VGRibbonWindow);
        actionNormal->setObjectName(QStringLiteral("actionNormal"));
        actionNormal->setCheckable(true);
        actionNormal->setChecked(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Resources/icon/rotate-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal->setIcon(icon9);
        actionFullScreen = new QAction(VGRibbonWindow);
        actionFullScreen->setObjectName(QStringLiteral("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Resources/icon/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon10);
        actionnew = new QAction(VGRibbonWindow);
        actionnew->setObjectName(QStringLiteral("actionnew"));
        actionnew->setIcon(icon7);
        centralwidget = new QWidget(VGRibbonWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 90, 281, 121));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        VGRibbonWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(VGRibbonWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VGRibbonWindow->setStatusBar(statusbar);
        dockWidget_2 = new QDockWidget(VGRibbonWindow);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidget_2->setMinimumSize(QSize(200, 174));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        treeView = new QTreeView(dockWidgetContents_2);
        treeView->setObjectName(QStringLiteral("treeView"));

        verticalLayout_2->addWidget(treeView);

        dockWidget_2->setWidget(dockWidgetContents_2);
        VGRibbonWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_2);
        dockWidget_4 = new QDockWidget(VGRibbonWindow);
        dockWidget_4->setObjectName(QStringLiteral("dockWidget_4"));
        dockWidget_4->setMinimumSize(QSize(266, 314));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableWidget = new QTableWidget(dockWidgetContents_4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_3->addWidget(tableWidget);

        dockWidget_4->setWidget(dockWidgetContents_4);
        VGRibbonWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_4);
        dockWidget = new QDockWidget(VGRibbonWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(200, 174));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listView = new QListView(dockWidgetContents);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        dockWidget->setWidget(dockWidgetContents);
        VGRibbonWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        menubar = new QMenuBar(VGRibbonWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1056, 17));
        menubar->setMinimumSize(QSize(0, 0));
        menubar->setMaximumSize(QSize(16777215, 16777215));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_7 = new QMenu(menu_2);
        menu_7->setObjectName(QStringLiteral("menu_7"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Resources/icon/mail-reply.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_7->setIcon(icon11);
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        menu_6 = new QMenu(menubar);
        menu_6->setObjectName(QStringLiteral("menu_6"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        VGRibbonWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_6->menuAction());
        menu->addAction(actionOpen);
        menu->addSeparator();
        menu->addAction(actionNew);
        menu->addAction(actionSave);
        menu->addSeparator();
        menu->addAction(actionQuit);
        menu_2->addAction(menu_7->menuAction());
        menu_2->addAction(actionForward);
        menu_2->addSeparator();
        menu_2->addAction(actionCopy);
        menu_2->addAction(actionClip);
        menu_2->addAction(actionPaste);
        menu_2->addSeparator();
        menu_2->addAction(actionDelete);
        menu_7->addAction(actionCancel);
        menu_5->addSeparator();
        menu_5->addAction(actionnew1);
        menu_5->addSeparator();
        menu_5->addAction(actionnew);
        menu_6->addAction(action_Qt);
        menu_6->addAction(actionAboutApp);
        menu_4->addAction(actionNoIcon);
        menu_3->addAction(actionFullScreen);
        menu_3->addAction(actionNormal);

        retranslateUi(VGRibbonWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), VGRibbonWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(VGRibbonWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VGRibbonWindow)
    {
        VGRibbonWindow->setWindowTitle(QApplication::translate("VGRibbonWindow", "\346\226\260\345\273\272\345\234\272\346\231\257.umproj - \344\270\211\347\273\264\345\261\225\347\244\272\347\216\257\345\242\203", Q_NULLPTR));
        actionSave->setText(QApplication::translate("VGRibbonWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("VGRibbonWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("VGRibbonWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionQuit->setText(QApplication::translate("VGRibbonWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("VGRibbonWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCancel->setText(QApplication::translate("VGRibbonWindow", "\346\222\244\351\224\200", Q_NULLPTR));
        action_Qt->setText(QApplication::translate("VGRibbonWindow", "\345\205\263\344\272\216Qt", Q_NULLPTR));
        actionAboutApp->setText(QApplication::translate("VGRibbonWindow", "\345\205\263\344\272\216", Q_NULLPTR));
        actionAboutApp->setIconText(QApplication::translate("VGRibbonWindow", "\345\205\263\344\272\216\350\275\257\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAboutApp->setToolTip(QApplication::translate("VGRibbonWindow", "\345\205\263\344\272\216\350\275\257\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCopy->setText(QApplication::translate("VGRibbonWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("VGRibbonWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("VGRibbonWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("VGRibbonWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("VGRibbonWindow", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDelete->setText(QApplication::translate("VGRibbonWindow", "\345\210\240\351\231\244", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("VGRibbonWindow", "\345\210\240\351\231\244", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDelete->setShortcut(QApplication::translate("VGRibbonWindow", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionClip->setText(QApplication::translate("VGRibbonWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClip->setToolTip(QApplication::translate("VGRibbonWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionClip->setShortcut(QApplication::translate("VGRibbonWindow", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionNew->setText(QApplication::translate("VGRibbonWindow", "\346\226\260\345\273\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("VGRibbonWindow", "\346\226\260\345\273\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionForward->setText(QApplication::translate("VGRibbonWindow", "\345\220\216\351\200\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionForward->setToolTip(QApplication::translate("VGRibbonWindow", "\345\220\216\351\200\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionNoIcon->setText(QApplication::translate("VGRibbonWindow", "\346\227\240\345\233\276\346\240\207", Q_NULLPTR));
        actionnew1->setText(QApplication::translate("VGRibbonWindow", "\345\215\217\345\220\214\350\256\241\347\256\227", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("VGRibbonWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        actionNormal->setText(QApplication::translate("VGRibbonWindow", "\351\273\230\350\256\244\345\244\247\345\260\217", Q_NULLPTR));
        actionFullScreen->setText(QApplication::translate("VGRibbonWindow", "\345\205\250\345\261\217", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionFullScreen->setShortcut(QApplication::translate("VGRibbonWindow", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionnew->setText(QApplication::translate("VGRibbonWindow", "\344\273\273\345\212\241\350\260\203\345\272\246", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VGRibbonWindow", "\345\272\224\347\224\250QRbbon", Q_NULLPTR));
        dockWidget_2->setWindowTitle(QApplication::translate("VGRibbonWindow", "\345\234\272\346\231\257\346\240\221", Q_NULLPTR));
        dockWidget_4->setWindowTitle(QApplication::translate("VGRibbonWindow", "\350\276\223\345\207\272", Q_NULLPTR));
        dockWidget->setWindowTitle(QApplication::translate("VGRibbonWindow", "\346\250\241\345\236\213\345\272\223", Q_NULLPTR));
        menu->setTitle(QApplication::translate("VGRibbonWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("VGRibbonWindow", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_7->setTitle(QApplication::translate("VGRibbonWindow", "\346\222\244\351\224\200", Q_NULLPTR));
        menu_5->setTitle(QApplication::translate("VGRibbonWindow", "\346\250\241\345\236\213\351\205\215\347\275\256\351\241\271", Q_NULLPTR));
        menu_6->setTitle(QApplication::translate("VGRibbonWindow", "\345\270\256\345\212\251", Q_NULLPTR));
        menu_4->setTitle(QApplication::translate("VGRibbonWindow", "\350\247\206\345\233\276", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("VGRibbonWindow", "\347\252\227\344\275\223", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VGRibbonWindow: public Ui_VGRibbonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VGRIBBONWINDOW_H

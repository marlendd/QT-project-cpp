/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_SaveAs;
    QAction *action_Add;
    QAction *action_Delete;
    QAction *action_Clear;
    QAction *action_Edit;
    QAction *action_About;
    QAction *action_Merge;
    QAction *action_Exit;
    QAction *action_ShowData;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(962, 479);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        action_New = new QAction(MainWindow);
        action_New->setObjectName("action_New");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_New->setIcon(icon);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName("action_Open");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Open->setIcon(icon1);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName("action_Save");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Save->setIcon(icon2);
        action_SaveAs = new QAction(MainWindow);
        action_SaveAs->setObjectName("action_SaveAs");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icons/save_as.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_SaveAs->setIcon(icon3);
        action_Add = new QAction(MainWindow);
        action_Add->setObjectName("action_Add");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/icons/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Add->setIcon(icon4);
        action_Delete = new QAction(MainWindow);
        action_Delete->setObjectName("action_Delete");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/icons/delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Delete->setIcon(icon5);
        action_Clear = new QAction(MainWindow);
        action_Clear->setObjectName("action_Clear");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/icons/clear.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Clear->setIcon(icon6);
        action_Edit = new QAction(MainWindow);
        action_Edit->setObjectName("action_Edit");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/icons/edit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Edit->setIcon(icon7);
        action_About = new QAction(MainWindow);
        action_About->setObjectName("action_About");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/icons/about.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_About->setIcon(icon8);
        action_Merge = new QAction(MainWindow);
        action_Merge->setObjectName("action_Merge");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/icons/merge.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Merge->setIcon(icon9);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName("action_Exit");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/icons/exit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Exit->setIcon(icon10);
        action_ShowData = new QAction(MainWindow);
        action_ShowData->setObjectName("action_ShowData");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/icons/show_data.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_ShowData->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setFont(font);
        tableWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        tableWidget->setFrameShape(QFrame::Shape::Box);
        tableWidget->setFrameShadow(QFrame::Shadow::Raised);
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget->setTextElideMode(Qt::TextElideMode::ElideMiddle);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(60);
        tableWidget->horizontalHeader()->setDefaultSectionSize(170);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 962, 32));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName("menu_3");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_New);
        menu->addAction(action_Open);
        menu->addAction(action_Save);
        menu->addAction(action_SaveAs);
        menu->addAction(action_Merge);
        menu->addAction(action_Exit);
        menu_2->addAction(action_Add);
        menu_2->addAction(action_Delete);
        menu_2->addAction(action_Edit);
        menu_2->addAction(action_Clear);
        menu_3->addAction(action_About);
        mainToolBar->addAction(action_New);
        mainToolBar->addAction(action_Open);
        mainToolBar->addAction(action_Save);
        mainToolBar->addAction(action_SaveAs);
        mainToolBar->addAction(action_Merge);
        mainToolBar->addAction(action_Exit);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Add);
        mainToolBar->addAction(action_Delete);
        mainToolBar->addAction(action_Edit);
        mainToolBar->addAction(action_Clear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_ShowData);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_About);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\320\270 \321\217\320\267\321\213\320\272\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        action_New->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action_New->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_SaveAs->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", nullptr));
#if QT_CONFIG(shortcut)
        action_SaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action_Add->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Delete->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action_Delete->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action_Clear->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Edit->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action_Edit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        action_About->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
#if QT_CONFIG(shortcut)
        action_About->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Merge->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\264\320\270\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action_Merge->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(shortcut)
        action_Exit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_ShowData->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        action_ShowData->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\260\321\200\320\263\321\203\320\274\320\265\320\275\321\202\320\276\320\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\270", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

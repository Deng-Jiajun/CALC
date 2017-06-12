/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_0;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_subtract;
    QPushButton *pushButton_leftbracket;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_allclear;
    QPushButton *pushButton_rightbracket;
    QPushButton *pushButton_add;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit;
    QPushButton *pushButton_point;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(300, 350);
        MainWindow->setMinimumSize(QSize(300, 350));
        MainWindow->setMaximumSize(QSize(600, 700));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(12);
        pushButton_7->setFont(font);

        gridLayout->addWidget(pushButton_7, 4, 0, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font);

        gridLayout->addWidget(pushButton_8, 4, 1, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font);

        gridLayout->addWidget(pushButton_9, 4, 2, 1, 1);

        pushButton_multiply = new QPushButton(centralWidget);
        pushButton_multiply->setObjectName(QStringLiteral("pushButton_multiply"));
        sizePolicy.setHeightForWidth(pushButton_multiply->sizePolicy().hasHeightForWidth());
        pushButton_multiply->setSizePolicy(sizePolicy);
        pushButton_multiply->setFont(font);

        gridLayout->addWidget(pushButton_multiply, 4, 3, 1, 1);

        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setFont(font);

        gridLayout->addWidget(pushButton_0, 5, 1, 1, 1);

        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QStringLiteral("pushButton_equal"));
        sizePolicy.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy);
        pushButton_equal->setFont(font);

        gridLayout->addWidget(pushButton_equal, 5, 2, 1, 1);

        pushButton_divide = new QPushButton(centralWidget);
        pushButton_divide->setObjectName(QStringLiteral("pushButton_divide"));
        sizePolicy.setHeightForWidth(pushButton_divide->sizePolicy().hasHeightForWidth());
        pushButton_divide->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(12);
        font1.setStrikeOut(false);
        pushButton_divide->setFont(font1);

        gridLayout->addWidget(pushButton_divide, 5, 3, 1, 1);

        pushButton_subtract = new QPushButton(centralWidget);
        pushButton_subtract->setObjectName(QStringLiteral("pushButton_subtract"));
        sizePolicy.setHeightForWidth(pushButton_subtract->sizePolicy().hasHeightForWidth());
        pushButton_subtract->setSizePolicy(sizePolicy);
        pushButton_subtract->setFont(font);

        gridLayout->addWidget(pushButton_subtract, 3, 3, 1, 1);

        pushButton_leftbracket = new QPushButton(centralWidget);
        pushButton_leftbracket->setObjectName(QStringLiteral("pushButton_leftbracket"));
        sizePolicy.setHeightForWidth(pushButton_leftbracket->sizePolicy().hasHeightForWidth());
        pushButton_leftbracket->setSizePolicy(sizePolicy);
        pushButton_leftbracket->setFont(font);

        gridLayout->addWidget(pushButton_leftbracket, 1, 0, 1, 1);

        pushButton_backspace = new QPushButton(centralWidget);
        pushButton_backspace->setObjectName(QStringLiteral("pushButton_backspace"));
        sizePolicy.setHeightForWidth(pushButton_backspace->sizePolicy().hasHeightForWidth());
        pushButton_backspace->setSizePolicy(sizePolicy);
        pushButton_backspace->setFont(font);

        gridLayout->addWidget(pushButton_backspace, 1, 2, 1, 1);

        pushButton_allclear = new QPushButton(centralWidget);
        pushButton_allclear->setObjectName(QStringLiteral("pushButton_allclear"));
        sizePolicy.setHeightForWidth(pushButton_allclear->sizePolicy().hasHeightForWidth());
        pushButton_allclear->setSizePolicy(sizePolicy);
        pushButton_allclear->setFont(font);

        gridLayout->addWidget(pushButton_allclear, 1, 3, 1, 1);

        pushButton_rightbracket = new QPushButton(centralWidget);
        pushButton_rightbracket->setObjectName(QStringLiteral("pushButton_rightbracket"));
        sizePolicy.setHeightForWidth(pushButton_rightbracket->sizePolicy().hasHeightForWidth());
        pushButton_rightbracket->setSizePolicy(sizePolicy);
        pushButton_rightbracket->setFont(font);

        gridLayout->addWidget(pushButton_rightbracket, 1, 1, 1, 1);

        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        pushButton_add->setFont(font);

        gridLayout->addWidget(pushButton_add, 2, 3, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setFont(font);

        gridLayout->addWidget(pushButton_1, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 3, 2, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(0, 0));
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 4);

        pushButton_point = new QPushButton(centralWidget);
        pushButton_point->setObjectName(QStringLiteral("pushButton_point"));
        sizePolicy.setHeightForWidth(pushButton_point->sizePolicy().hasHeightForWidth());
        pushButton_point->setSizePolicy(sizePolicy);
        pushButton_point->setFont(font);

        gridLayout->addWidget(pushButton_point, 5, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 300, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu_2->addAction(action_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CALC", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\346\240\207\345\207\206", Q_NULLPTR));
        action_2->setText(QApplication::translate("MainWindow", "\345\244\247\346\225\260", Q_NULLPTR));
        action_3->setText(QApplication::translate("MainWindow", "\344\275\277\347\224\250\350\257\264\346\230\216", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButton_multiply->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_equal->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        pushButton_divide->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        pushButton_subtract->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_leftbracket->setText(QApplication::translate("MainWindow", "(", Q_NULLPTR));
        pushButton_backspace->setText(QApplication::translate("MainWindow", "\342\206\220", Q_NULLPTR));
        pushButton_allclear->setText(QApplication::translate("MainWindow", "AC", Q_NULLPTR));
        pushButton_rightbracket->setText(QApplication::translate("MainWindow", ")", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButton_point->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\347\261\273\345\236\213", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

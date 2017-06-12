/********************************************************************************
** Form generated from reading UI file 'instructions.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTIONS_H
#define UI_INSTRUCTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Instructions
{
public:
    QLabel *label;

    void setupUi(QDialog *Instructions)
    {
        if (Instructions->objectName().isEmpty())
            Instructions->setObjectName(QStringLiteral("Instructions"));
        Instructions->resize(280, 400);
        Instructions->setMinimumSize(QSize(280, 399));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        Instructions->setFont(font);
        label = new QLabel(Instructions);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 241, 371));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font1);
        label->setOpenExternalLinks(true);

        retranslateUi(Instructions);

        QMetaObject::connectSlotsByName(Instructions);
    } // setupUi

    void retranslateUi(QDialog *Instructions)
    {
        Instructions->setWindowTitle(QApplication::translate("Instructions", "\344\275\277\347\224\250\350\257\264\346\230\216", Q_NULLPTR));
        label->setText(QApplication::translate("Instructions", "<html><head/><body><p>\351\274\240\346\240\207\347\202\271\345\207\273\346\210\226\345\234\250\346\226\207\346\234\254\346\241\206\350\276\223\345\205\245\350\241\250\350\276\276\345\274\217</p><p>\347\202\271\345\207\273&quot;=&quot;\345\260\206\345\234\250\346\226\207\346\234\254\346\241\206\350\276\223\345\207\272\350\277\220\347\256\227\347\273\223\346\236\234</p><p>\350\241\250\350\276\276\345\274\217\344\270\215\345\214\205\345\220\253\347\255\211\345\217\267&quot;=&quot;</p><p>\344\276\213\357\274\2321+2*(3+4)</p><p>\346\234\254\350\256\241\347\256\227\345\231\250\346\217\220\344\276\233\344\270\244\347\247\215\346\250\241\345\274\217</p><p>1.\346\240\207\345\207\206\346\250\241\345\274\217\357\274\214\344\270\216\346\231\256\351\200\232\350\256\241\347\256\227\345\231\250\346\227\240\345\274\202</p><p>2.\345\244\247\346\225\260\346\250\241\345\274\217\357\274\214\345\217\252\346\224\257\346\214\201\350\266\205\351\225\277\346\225\264\346\225\260\350\256\241\347\256\227</p><p>\345\244\247\346\225\260\347"
                        "\261\273\345\236\213\347\261\273\344\274\274\346\225\264\345\275\242int</p><p>\350\277\233\350\241\214\351\231\244\346\263\225\350\277\220\347\256\227\346\227\266\345\260\206\346\210\252\346\226\255\345\260\217\346\225\260\351\203\250\345\210\206</p><p>\344\270\215\345\273\272\350\256\256\344\275\277\347\224\250\351\231\244\346\263\225\357\274\214\345\260\206\351\200\240\346\210\220\350\276\203\345\244\247\350\257\257\345\267\256</p><p>\351\241\271\347\233\256\344\273\243\347\240\201\345\217\212\346\226\207\344\273\266\345\267\262\344\270\212\344\274\240\350\207\263github:</p><p><a href=\"https://github.com/Deng-Jiajun/CALC.git\"><span style=\" text-decoration: underline; color:#0000ff;\">\347\202\271\345\207\273\346\237\245\347\234\213\351\241\271\347\233\256\346\226\207\344\273\266</span></a></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Instructions: public Ui_Instructions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTIONS_H

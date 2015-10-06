/********************************************************************************
** Form generated from reading UI file 'answer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSWER_H
#define UI_ANSWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnswerClass
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;
    QRadioButton *answerABtn;
    QRadioButton *answerBBtn;
    QRadioButton *answerCBtn;
    QRadioButton *answerDBtn;
    QPushButton *nextQBtn;
    QPushButton *preQBtn;
    QPushButton *commitBtn;

    void setupUi(QWidget *AnswerClass)
    {
        if (AnswerClass->objectName().isEmpty())
            AnswerClass->setObjectName(QStringLiteral("AnswerClass"));
        AnswerClass->resize(800, 500);
        graphicsView = new QGraphicsView(AnswerClass);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 800, 500));
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/answer/answer_bkg.jpg);"));
        label = new QLabel(AnswerClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 90, 511, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(true);
        answerABtn = new QRadioButton(AnswerClass);
        answerABtn->setObjectName(QStringLiteral("answerABtn"));
        answerABtn->setGeometry(QRect(160, 210, 350, 16));
        QFont font1;
        font1.setPointSize(15);
        answerABtn->setFont(font1);
        answerABtn->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        answerABtn->setIconSize(QSize(16, 16));
        answerBBtn = new QRadioButton(AnswerClass);
        answerBBtn->setObjectName(QStringLiteral("answerBBtn"));
        answerBBtn->setGeometry(QRect(160, 250, 350, 16));
        answerBBtn->setFont(font1);
        answerBBtn->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        answerCBtn = new QRadioButton(AnswerClass);
        answerCBtn->setObjectName(QStringLiteral("answerCBtn"));
        answerCBtn->setGeometry(QRect(160, 290, 350, 16));
        answerCBtn->setFont(font1);
        answerCBtn->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        answerDBtn = new QRadioButton(AnswerClass);
        answerDBtn->setObjectName(QStringLiteral("answerDBtn"));
        answerDBtn->setGeometry(QRect(160, 330, 350, 16));
        answerDBtn->setFont(font1);
        answerDBtn->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        nextQBtn = new QPushButton(AnswerClass);
        nextQBtn->setObjectName(QStringLiteral("nextQBtn"));
        nextQBtn->setGeometry(QRect(290, 380, 101, 41));
        preQBtn = new QPushButton(AnswerClass);
        preQBtn->setObjectName(QStringLiteral("preQBtn"));
        preQBtn->setEnabled(true);
        preQBtn->setGeometry(QRect(160, 380, 101, 41));
        commitBtn = new QPushButton(AnswerClass);
        commitBtn->setObjectName(QStringLiteral("commitBtn"));
        commitBtn->setGeometry(QRect(420, 380, 101, 41));

        retranslateUi(AnswerClass);

        QMetaObject::connectSlotsByName(AnswerClass);
    } // setupUi

    void retranslateUi(QWidget *AnswerClass)
    {
        AnswerClass->setWindowTitle(QApplication::translate("AnswerClass", "\347\255\224\351\242\230", 0));
        label->setText(QApplication::translate("AnswerClass", "1\343\200\201\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225\350\277\231\346\230\257\346\265\213\350\257\225", 0));
        answerABtn->setText(QApplication::translate("AnswerClass", "A\343\200\201\350\277\231\346\230\257\347\255\224\346\241\210A", 0));
        answerBBtn->setText(QApplication::translate("AnswerClass", "B\343\200\201\350\277\231\346\230\257\347\255\224\346\241\210B", 0));
        answerCBtn->setText(QApplication::translate("AnswerClass", "C\343\200\201\350\277\231\346\230\257\347\255\224\346\241\210C", 0));
        answerDBtn->setText(QApplication::translate("AnswerClass", "D\343\200\201\350\277\231\346\230\257\347\255\224\346\241\210D", 0));
        nextQBtn->setText(QApplication::translate("AnswerClass", "\344\270\213\344\270\200\351\242\230", 0));
        preQBtn->setText(QApplication::translate("AnswerClass", "\344\270\212\344\270\200\351\242\230", 0));
        commitBtn->setText(QApplication::translate("AnswerClass", "\346\217\220\344\272\244", 0));
    } // retranslateUi

};

namespace Ui {
    class AnswerClass: public Ui_AnswerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSWER_H

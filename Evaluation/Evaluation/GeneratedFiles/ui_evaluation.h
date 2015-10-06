/********************************************************************************
** Form generated from reading UI file 'evaluation.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVALUATION_H
#define UI_EVALUATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EvaluationClass
{
public:
    QWidget *centralWidget;
    QLineEdit *stuNameEdit;
    QLineEdit *stuNoEdit;
    QLabel *label;
    QLabel *label_2;
    QGraphicsView *graphicsView;
    QPushButton *startBtn;
    QPushButton *exitBtn;
    QLabel *label_3;

    void setupUi(QMainWindow *EvaluationClass)
    {
        if (EvaluationClass->objectName().isEmpty())
            EvaluationClass->setObjectName(QStringLiteral("EvaluationClass"));
        EvaluationClass->resize(796, 500);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        EvaluationClass->setFont(font);
        EvaluationClass->setAutoFillBackground(false);
        EvaluationClass->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(EvaluationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stuNameEdit = new QLineEdit(centralWidget);
        stuNameEdit->setObjectName(QStringLiteral("stuNameEdit"));
        stuNameEdit->setGeometry(QRect(433, 203, 141, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(15);
        stuNameEdit->setFont(font1);
        stuNameEdit->setStyleSheet(QLatin1String("background:rgba(0,255,0,0);\n"
"border:rgba(0,255,0,0);"));
        stuNameEdit->setMaxLength(12);
        stuNoEdit = new QLineEdit(centralWidget);
        stuNoEdit->setObjectName(QStringLiteral("stuNoEdit"));
        stuNoEdit->setGeometry(QRect(433, 247, 141, 21));
        stuNoEdit->setFont(font1);
        stuNoEdit->setStyleSheet(QLatin1String("background:rgba(0,255,0,0);\n"
"border:rgba(0,255,0,0);"));
        stuNoEdit->setMaxLength(12);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 193, 51, 40));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(255, 255, 255);\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 237, 51, 40));
        label_2->setStyleSheet(QString::fromUtf8("background:rgba(0,255,0,0);\n"
"font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(255, 255, 255);"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-1, 0, 800, 500));
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/Evaluation/background.jpg);"));
        startBtn = new QPushButton(centralWidget);
        startBtn->setObjectName(QStringLiteral("startBtn"));
        startBtn->setGeometry(QRect(370, 290, 90, 50));
        startBtn->setStyleSheet(QStringLiteral("border-image: url(:/Evaluation/btn_test.png);"));
        exitBtn = new QPushButton(centralWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(480, 292, 90, 50));
        exitBtn->setStyleSheet(QStringLiteral("border-image: url(:/Evaluation/btn_exit.png);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(234, 130, 361, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(25);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setAlignment(Qt::AlignCenter);
        EvaluationClass->setCentralWidget(centralWidget);
        graphicsView->raise();
        stuNameEdit->raise();
        stuNoEdit->raise();
        label->raise();
        label_2->raise();
        startBtn->raise();
        exitBtn->raise();
        label_3->raise();

        retranslateUi(EvaluationClass);

        QMetaObject::connectSlotsByName(EvaluationClass);
    } // setupUi

    void retranslateUi(QMainWindow *EvaluationClass)
    {
        EvaluationClass->setWindowTitle(QApplication::translate("EvaluationClass", "\350\257\204\346\265\213\350\275\257\344\273\266", 0));
        stuNameEdit->setText(QApplication::translate("EvaluationClass", "Test", 0));
        stuNoEdit->setText(QApplication::translate("EvaluationClass", "123", 0));
        label->setText(QApplication::translate("EvaluationClass", "\345\247\223\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("EvaluationClass", "\345\255\246\345\217\267\357\274\232", 0));
        startBtn->setText(QString());
        exitBtn->setText(QString());
        label_3->setText(QApplication::translate("EvaluationClass", "\345\255\246\347\224\237\346\225\231\345\255\246\350\257\204\346\265\213\347\263\273\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class EvaluationClass: public Ui_EvaluationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVALUATION_H

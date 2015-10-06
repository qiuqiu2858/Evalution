#ifndef ANSWER_H
#define ANSWER_H

#include <QtWidgets/QMainWindow>
#include "ui_answer.h"
#include "problem.h"

class Answer : public QMainWindow
{
	Q_OBJECT

public:
	Answer(QWidget *parent = 0);
	~Answer();

private:
	Ui::AnswerClass ui;
	int mode; // 0 stands for student mode, 1 stands for correct answer mode
};

#endif // ANSWER_H

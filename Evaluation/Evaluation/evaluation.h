#ifndef EVALUATION_H
#define EVALUATION_H

#include <QtWidgets/QMainWindow>
#include "ui_evaluation.h"
#include "answer.h"

class Evaluation : public QMainWindow
{
	Q_OBJECT

public:
	Evaluation(QWidget *parent = 0);
	~Evaluation();

private:
	Ui::EvaluationClass ui;
	Answer *answerGui;

private slots:
	void Exit();
	void StartTest();
};

#endif // EVALUATION_H

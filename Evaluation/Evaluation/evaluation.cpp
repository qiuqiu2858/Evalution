#include "evaluation.h"

Evaluation::Evaluation(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	answerGui = NULL;
	connect(ui.startBtn, SIGNAL(clicked()), this, SLOT(StartTest()));
	connect(ui.exitBtn, SIGNAL(clicked()), this, SLOT(Exit()));
}

Evaluation::~Evaluation()
{

}

void Evaluation::StartTest()
{
	if (answerGui == NULL)
	{
		answerGui = new Answer(NULL);
	}

	answerGui->show();
}

void Evaluation::Exit()
{
	this->close();
}
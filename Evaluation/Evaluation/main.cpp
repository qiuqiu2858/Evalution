#include "evaluation.h"
#include "answer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Evaluation w;
	w.show();
	return a.exec();
}

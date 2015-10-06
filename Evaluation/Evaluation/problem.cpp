#include "problem.h"

Problem::Problem(string q, string a, string b, string c, string d, string cate, int ca)
{
	question = q;
	choiceA = a;
	choiceB = b;
	choiceC = c;
	choiceD = d;
	category = cate;
	correctAnswer = ca;
}

void Problem::SetIndex(int i)
{
	index = i;
}
void Problem::SetStuAnswer(int a)
{
	stuAnswer = a;
}
void Problem::SetQuestion(string q, string a, string b, string c, string d, string cate, int ca)
{
	question = q;
	choiceA = a;
	choiceB = b;
	choiceC = c;
	choiceD = d;
	category = cate;
	correctAnswer = ca;
}

bool Problem::IsCorret()
{
	return stuAnswer == correctAnswer ? true : false;
}
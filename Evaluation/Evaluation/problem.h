#ifndef PROBLEM_H
#define PROBLEM_H

#include <string>
using namespace std;

class Problem
{

private :

	string question;
	string choiceA;
	string choiceB;
	string choiceC;
	string choiceD;
	int correctAnswer;
	int stuAnswer;
	int index;
	string category;

public :

	Problem();
	Problem(string q, string a, string b, string c, string d, string category, int ca);
	~Problem();

	void SetIndex(int i);
	void SetStuAnswer(int a);
	void SetQuestion(string q, string a, string b, string c, string d, string category, int ca);
	
	string GetQuestion() { return question; }
	string GetChoiceA() { return choiceA; }
	string GetChoiceB() { return choiceB; }
	string GetChoiceC() { return choiceC; }
	string GetChoiceD() { return choiceD; }
	string GetCategory() { return category; }

	int GetCorrectAnswer() { return correctAnswer; }
	int GetIndex() { return index; }

	bool IsCorret();

};

#endif
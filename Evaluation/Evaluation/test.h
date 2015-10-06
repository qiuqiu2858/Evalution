#ifndef TEST_H
#define TEST_H

#include "problem.h"
#include <vector>
#include <hash_map>

using namespace std;

class Test
{

private :
	int cateCnt;
	hash_map<string, int[2]> cateMap;
	vector<Problem> proList;

public :
	void initialTest();

};

#endif
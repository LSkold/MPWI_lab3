#pragma once
#include<stdlib.h>
#include<time.h>   
#include<iostream>
#include"Consts.h"
using namespace std;

class EliminationMethod
{
private:
	int cnt;
	int u1;
	int u2;
	int y;

	void printValues(int i);
	bool checkPair();
	int generateNumberFromRange(int begin, int end);

public:
	EliminationMethod();

	//
	// main function of exercise
	//
	void generate(int i);

	void getCnt();

	~EliminationMethod();
};


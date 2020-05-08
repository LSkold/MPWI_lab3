#pragma once
#include<stdlib.h>
#include<time.h>   
#include<iostream>

using namespace std;

class DiscreetDistribution
{
private:
	float generated_value;
	int discreet_value;
	void printValues();
	int setDiscreetValueOfGeneratedNumber();
	float generateNumber();
public:
	DiscreetDistribution();
	
	void generate();
	
	~DiscreetDistribution();
};


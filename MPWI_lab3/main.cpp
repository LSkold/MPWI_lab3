#include<iostream>
#include"Consts.h"
#include"DiscreetDistribution.h"
using namespace std;

int main() {

	DiscreetDistribution exercise1 = DiscreetDistribution();

	//ex1
	for (int i = 0; i < 1000; i++) {
		cout << i + 1 << ". ";
		exercise1.generate();
	}

	system("pause");
	return 0;
}
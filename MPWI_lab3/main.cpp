#include<iostream>
#include"Consts.h"
#include"DiscreetDistribution.h"
#include"EliminationMethod.h"
using namespace std;

int main() {

	DiscreetDistribution exercise1 = DiscreetDistribution();
	EliminationMethod exercise2 = EliminationMethod();

	//ex1
	for (int i = 0; i < 10000; i++) {
		cout << i + 1 << ". ";
		exercise1.generate();
	}
	cout << endl << endl;
	//ex2
	for (int i = 0; i < 10000; i++) {
		exercise2.generate(i);
	}
	cout << "Generating in exercise 2 has been succesfull "; exercise2.getCnt(); cout<< " times"<<endl;
	system("pause");
	return 0;
}
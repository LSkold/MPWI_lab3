#include "EliminationMethod.h"

EliminationMethod::EliminationMethod(){
	srand(time(NULL));
	cnt = 0;
	u1 = 0;
	u2 = 0;
	y = 0;
}
void EliminationMethod::printValues(int i) {
	cout << i << ". U1= " << u1 << "\tf(U1)= " << y << "\t(U2=  " << u2 << ")" << endl;
}

bool EliminationMethod::checkPair() {
	int temp = FX_A * u1 + FX_B;
	return (temp > u2) ? true : false;
}

void EliminationMethod::generate(int i) {
	this->u1 = generateNumberFromRange(0, D);
	this->u2 = generateNumberFromRange(A, B);

	//
	// f(x) = 2 x - 20
	//
	if (checkPair()) {
		this->y = FX_A * u1 + FX_B;
		this->cnt++;
		printValues(i);
	}
}

int EliminationMethod::generateNumberFromRange(int begin, int end) {
	int a = rand() % (end - begin + 1) + begin;
	return a;
}

void EliminationMethod::getCnt() {
	cout << this->cnt;
};


EliminationMethod::~EliminationMethod(){
}

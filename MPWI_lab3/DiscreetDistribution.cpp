#include "DiscreetDistribution.h"

DiscreetDistribution::DiscreetDistribution(){
	srand(time(NULL));
	generated_value = 0;
	discreet_value = 0;
}
float  DiscreetDistribution::generateNumber() {
	float a = rand() % 100;
	return a/100;
}

void  DiscreetDistribution::generate() {
	this->generated_value = generateNumber();
	this->discreet_value = setDiscreetValueOfGeneratedNumber();
	printValues();
}

int DiscreetDistribution::setDiscreetValueOfGeneratedNumber() {

	if (generated_value == 0) {
		return 0;
	}
	else if (generated_value <= 0.2) {
		return 1;
	}
	else if (generated_value <= 0.6) {
		return 2;
	}
	else if (generated_value <= 0.9) {
		return 3;
	}
	else {
		return 4;
	}

}

void DiscreetDistribution::printValues() {
	cout << "Generated number: " << generated_value << " Discreet value: " << discreet_value << endl;
}

DiscreetDistribution::~DiscreetDistribution(){
}

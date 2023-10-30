#include "stats_mean.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	meanCalc calculator;
	
	vector<double> values = {1.0, 2.0, 3.0, 4.0, 10.0};

	double mean = calculator.calculateMean(values);

	cout << "Mean: " << mean << endl;

	return 0;
}

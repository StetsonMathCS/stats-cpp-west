#include "stats_mean.h"

meanCalc::meanCalc() {
}

double meanCalc::calculateMean(vector<double> values) {
	if (values.empty()) {
		return 0.0;
	}

	double sum = 0.0;
    
	for (double value : values) {
		sum += value;
	}

	double mean = sum / values.size();


	return mean;
}


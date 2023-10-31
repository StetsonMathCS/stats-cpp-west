#include "mean_calculator.h"

MeanCalculator::MeanCalculator() : mean(0), totalCount(0) {}

void MeanCalculator::handleValue(float &val) {
    frequency[val] += 1;
    totalCount++;

    // Recalculate the mean
    mean = 0;
    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        mean += it->first * it->second;
    }
    mean /= totalCount;
}

float MeanCalculator::getResult() {
    return mean;
}

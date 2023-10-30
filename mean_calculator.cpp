#include "mean_calculator.h"

MeanCalculator::MeanCalculator() {
    // variable that holds the numbers that will calculate the mean
    frequency = std::map<float, int>();
    mean = 0;
    

}

void MeanCalculator::handleValue(float &val) {
    // add the value to the map
    frequency[val] += 1;

    // calculate the mean
    mean = 0;
    // iterate through the map and calculate the mean
    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        // add the value to the mean
        mean += it->first * it->second;
    }
    // divide the mean by the total number of values
    mean /= frequency.size();


}

float MeanCalculator::getResult() {
    return mean;
}


#ifndef MEAN_CALCULATOR_H
#define MEAN_CALCULATOR_H

#include <map>

class MeanCalculator {
public:
    MeanCalculator();

    // Handles a new value and updates the mean
    void handleValue(float &val);

    // Returns the current mean of the values
    float getResult();

private:
    std::map<float, int> frequency; // Map to store the frequency of each value
    float mean;                     // Current mean of the values
    int totalCount;                 // Total count of values entered
};

#endif // MEAN_CALCULATOR_H

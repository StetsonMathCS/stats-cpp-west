#ifndef MEAN_CALCULATOR_H
#define MEAN_CALCULATOR_H

#include <vector>
#include <map>

class MeanCalculator {
    private:
        // variable that holds the numbers that will calculate the mean
        std::map<float, int> frequency;
        float mean;
    public:
        // constructor
        MeanCalculator();
        void handleValue(float &val);
        float getResult();
};

#endif // MODE_CALCULATOR_H


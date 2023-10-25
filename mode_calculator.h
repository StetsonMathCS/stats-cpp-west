#ifndef MODE_CALCULATOR_H
#define MODE_CALCULATOR_H

#include <vector>
#include <map>

class ModeCalculator {
public:
    ModeCalculator(const std::vector<float>& data);  // Constructor
    float calculateMode();  // Calculate the mode

private:
    std::vector<float> dataset;
};

#endif // MODE_CALCULATOR_H


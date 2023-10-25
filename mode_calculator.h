#ifndef MODE_CALCULATOR_H
#define MODE_CALCULATOR_H

#include <vector>
#include <map>

class ModeCalculator {
public:
    ModeCalculator();  // Constructor
    void handleValue(float &val);
    float getResult();

private:
    std::map<float, int> frequency;
    int maxFrequency;
    float mode;
};

#endif // MODE_CALCULATOR_H


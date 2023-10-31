#include "mode_calculator.h"

ModeCalculator::ModeCalculator() {
    maxFrequency = 0;
    mode = 0;
}

void ModeCalculator::handleValue(float &val) {
    frequency[val]++;
    if (frequency[val] > maxFrequency) {
        maxFrequency = frequency[val];
        mode = val;
    }
}

float ModeCalculator::getResult() {
    return mode;
}

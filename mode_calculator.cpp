#include "mode_calculator.h"

ModeCalculator::ModeCalculator(const std::vector<float>& data) {
    dataset = data;
}

float ModeCalculator::calculateMode() {
    std::map<float, int> frequency;
    float mode = dataset[0];
    int maxFrequency = 1;

    for (const float& value : dataset) {
        frequency[value]++;
        if (frequency[value] > maxFrequency) {
            maxFrequency = frequency[value];
            mode = value;
        }
    }

    return mode;
}

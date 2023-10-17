#include "mode_calculator.h"

ModeCalculator::ModeCalculator(const std::vector<int>& data) {
    dataset = data;
}

int ModeCalculator::calculateMode() {
    std::map<int, int> frequency;
    int mode = dataset[0];
    int maxFrequency = 1;

    for (const int& value : dataset) {
        frequency[value]++;
        if (frequency[value] > maxFrequency) {
            maxFrequency = frequency[value];
            mode = value;
        }
    }

    return mode;
}

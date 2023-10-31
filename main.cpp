#include <iostream>
#include "mean_calculator.h"
#include "mode_calculator.h"
#include "stats_min.h"
#include "stats_sum.h"

int main() {
    MeanCalculator meanCalculator;
    ModeCalculator modeCalculator;
    stats_min minCalculator;
    stats_sum sumCalculator;

    std::vector<double> values;

    float val;
    while (std::cin >> val) {
        meanCalculator.handleValue(val);
        modeCalculator.handleValue(val);
        values.push_back(static_cast<double>(val));  // Collecting values for calculations
    }

    float mean = meanCalculator.getResult();
    float mode = modeCalculator.getResult();
    double minimum = stats_min::compute_min(values);
    double sum = sumCalculator.compute_sum(values);

    std::cout << "Mean is: " << mean << std::endl;
    std::cout << "Mode is: " << mode << std::endl;
    std::cout << "Minimum value is: " << minimum << std::endl;
    std::cout << "Sum of values is: " << sum << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <iterator>
#include "mode_calculator.h"

int main() {
    std::vector<float> data;
    double val;
    while(std::cin >> val) {
        data.push_back(val);
    }
    std::cout << "Data size: " << data.size() << std::endl;

    ModeCalculator calculator(data);
    float mode = calculator.calculateMode();

    std::cout << "The mode is: " << mode << std::endl;

    return 0;
}

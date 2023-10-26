#include <iostream>
#include "mode_calculator.h"

int main() {
    ModeCalculator calculator;
    float val;
    while(std::cin >> val) {
        calculator.handleValue(val);
    }

    float mode = calculator.getResult();

    std::cout << "The mode is: " << mode << std::endl;

    return 0;
}

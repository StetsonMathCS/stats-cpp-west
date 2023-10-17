#include <iostream>
#include <vector>
#include "mode_calculator.h"

int main() {
    std::vector<int> data = {1, 2, 3, 3, 4, 5, 5, 6, 6, 7};

    ModeCalculator calculator(data);
    int mode = calculator.calculateMode();

    std::cout << "The mode is: " << mode << std::endl;

    return 0;
}

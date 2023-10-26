#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>
#include "mode_calculator.h"

int main() {
    ModeCalculator calculator;
    std::string line;
    std::stringstream ss;
    float val;
    while(std::cin >> line) {
        ss.clear();
        ss << line;
        if(ss >> val) {
            calculator.handleValue(val);
        }
    }

    float mode = calculator.getResult();

    std::cout << "The mode is: " << mode << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>
#include "mode_calculator.h"

int main() {
    std::vector<float> data;
    std::string line;
    std::stringstream ss;
    double val;
    while(std::cin >> line) {
        ss.clear();
        ss << line;
        if(ss >> val) {
            data.push_back(val);
        }
    }

    ModeCalculator calculator(data);
    float mode = calculator.calculateMode();

    std::cout << "The mode is: " << mode << std::endl;

    return 0;
}

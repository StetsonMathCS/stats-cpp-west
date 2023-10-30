#include <iostream>
#include "mean_calculator.h"

int main() {
    // create the mean calculator
    MeanCalculator meanCalculator = MeanCalculator();
    float val;
    // get the values from the user
    while (std::cin >> val) {
        // handle the value
        meanCalculator.handleValue(val);
    }
    // print the result
    std::cout << meanCalculator.getResult() << std::endl;
    return 0;
}
// terminal command to compile this file
// g++ -std=c++11 main.cpp mean_calculator.cpp -o main
// terminal command to pipe a txt file into the program and run it
// cat data.txt | ./main

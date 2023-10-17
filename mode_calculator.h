#ifndef MODE_CALCULATOR_H
#define MODE_CALCULATOR_H

#include <vector>
#include <map>

class ModeCalculator {
public:
    ModeCalculator(const std::vector<int>& data);  // Constructor
    int calculateMode();  // Calculate the mode

private:
    std::vector<int> dataset;
};

#endif // MODE_CALCULATOR_H
Create an implementation file mode_calculator.cpp:
cpp
Copy code
#include "mode_calculator.h"

ModeCalculator::ModeCalculator(const std::vector<int>& data) {
    dataset = data;
}

int ModeCalculator::calculateMode() {
    std::map<int, int> frequency; // Map to store frequency of each value
    int mode = dataset[0]; // Initialize the mode to the first element
    int maxFrequency = 1; // Initialize the maximum frequency

    for (const int& value : dataset) {
        frequency[value]++; // Increment the frequency for the value

        if (frequency[value] > maxFrequency) {
            maxFrequency = frequency[value]; // Update max frequency
            mode = value; // Update mode
        }
    }

    return mode;
}
To use the ModeCalculator class, create a main program in a separate file (e.g., main.cpp):
cpp
Copy code
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
Compile the program with your C++ compiler:
bash
Copy code
g++ -o main main.cpp mode_calculator.cpp
Run the compiled program:
bash
Copy code
./main
This will calculate and display the mode of the provided dataset. You can replace the data vector in the main.cpp file with your own dataset to find the mode for a different set of values.






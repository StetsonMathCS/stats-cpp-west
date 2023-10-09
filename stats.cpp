#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <functional>
#include <stdexcept>
using namespace std;

// C++ class for computing just the median of a set of numbers
class Median {
    public:
        // Add a number to the set
        void add(double x) {
            if (numbers.empty()) {
                numbers.push_back(x);
            } else {
                vector<double>::iterator it = lower_bound(numbers.begin(), numbers.end(), x);
                numbers.insert(it, x);
            }
        }

        // Return the median of the set
        double get() const {
            if (numbers.empty()) {
                throw domain_error("no numbers in the set");
            }
            int n = numbers.size();
            if (n % 2 == 0) {
                return (numbers[n/2-1] + numbers[n/2]) / 2;
            } else {
                return numbers[n/2];
            }
        }
}


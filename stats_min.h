#ifndef STATS_MIN_H
#define STATS_MIN_H

#include <vector>

class stats_min {
public:
    // Computes the minimum value in the data vector.
    // Returns NaN if the vector is empty.
    static double compute_min(const std::vector<double>& data);
};

#endif // STATS_MIN_H

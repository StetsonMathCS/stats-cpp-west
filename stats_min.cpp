#include "stats_min.h"
#include <limits>

double stats_min::compute_min(const std::vector<double>& data) {
    if (data.empty()) {
        return std::numeric_limits<double>::quiet_NaN();  // Return NaN if no data
    }

    double min_val = data[0];
    for (int i = 1; i < data.size(); i++) {
        if (data[i] < min_val) {
            min_val = data[i];
        }
    }
    return min_val;
}


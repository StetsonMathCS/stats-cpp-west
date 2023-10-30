#include "stats_min.h"
#include "stats_max.h"

class StatsRange {
public:
    StatsRange(double* data, int size);
    double result();

private:
    StatsMin minCalc;
    StatsMax maxCalc;
};

// Implement the StatsRange class in a similar manner to StatsMin and StatsMax.

a

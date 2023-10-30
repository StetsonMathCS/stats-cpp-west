#include "stats_min.h"
#include "stats_max.h"

using namespace std;


double stats_range::result() {
    return max-min;
}

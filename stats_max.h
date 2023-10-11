#ifndef STATS_MAX_H
#define STATS_MAX_H

#include "stats_base.h"

class stats_max : public stats_base
{
    public:
        stats_max();
        void add(double val);
        double result();
        void reset();

    private:
        double max;
};

#endif

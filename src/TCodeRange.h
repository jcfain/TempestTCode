
#ifndef TCODE_RANGE_H
#define TCODE_RANGE_H

#include <stdint.h>

struct TCodeRange
{
    char key[3];
    uint16_t minValue;
    uint16_t maxValue;
};

#endif
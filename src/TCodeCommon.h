
#ifndef COMMON_H
#define COMMON_H

#include <functional>
#include <stdint.h>
#include "TCodeEnum.h"

using TCodeCommandCallback = std::function<void (TCodeEvent, const char*)>;
using TCodeMilliCallback = std::function<unsigned long long ()>;

class TCodeCommon {
public:
    TCodeCommon(TCodeMilliCallback argMillis);

    static TCodeMilliCallback millis;
    static int64_t clamp(const int64_t& value, const int64_t& minValue, const int64_t& maxValue);
    static int64_t map(const int64_t& value, const int64_t& inMin, const int64_t& inMax, const int64_t& outMin, const int64_t& outMax);
};

#endif
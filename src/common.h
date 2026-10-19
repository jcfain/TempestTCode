
#ifndef COMMON_H
#define COMMON_H

#include <functional>
#include <stdint.h>

class Common {
public:
    Common(std::function<unsigned long long ()> argMillis);

    static std::function<unsigned long long ()> millis;
    static int64_t clamp(const int64_t& value, const int64_t& minValue, const int64_t& maxValue);
    static int64_t map(const int64_t& value, const int64_t& inMin, const int64_t& inMax, const int64_t& outMin, const int64_t& outMax);
};

#endif
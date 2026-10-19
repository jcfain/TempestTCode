#include "common.h"

std::function<unsigned long long ()> Common::millis = [] () { return 0; } ;

Common::Common(std::function<unsigned long long ()> argmillis) {
    millis = argmillis;
}

int64_t Common::clamp(const int64_t& value, const int64_t& minValue, const int64_t& maxValue) {
    return value > maxValue ? maxValue : value < minValue ? minValue : value;
};

int64_t Common::map(const int64_t&  value, const int64_t&  inMin, const int64_t&  inMax, const int64_t&  outMin, const int64_t&  outMax)  {
    if (inMax == inMin) return outMin;  // avoid division by zero
    return (value - inMin) * (outMax - outMin) / (inMax - inMin) + outMin;
}



#ifndef TCODE_ENUM_H
#define TCODE_ENUM_H

enum class InputType {
    SHORT,      // no timing parameter — use sensible default interval/speed
    SPEED,      // extended parameter = average speed (pos units per 100 ms)
    INTERVAL    // extended parameter = duration in microseconds
};

enum class MoveStyle {
    RAMPED,     // linear / constant velocity (no easing)
    EASE_IN,    // quadratic start from rest
    EASE_OUT,   // quadratic soft landing
    EASE_BOTH,  // full cubic smoothstep (rest-to-rest)
    GRADIENT    // full Hermite control using supplied start/end gradients
};

enum class TCodeEvent {
    NOTIFY,
    OTHER,
    RANGE_GET,
    RANGE_STORE
};

#endif
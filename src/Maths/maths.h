#pragma once

#include <cmath>

#include "vector2.h"
#include "vector3.h"
#include "vector4.h"

#include "matrix4.h"

inline float toRadians(const float &degrees)
{
    return degrees * (M_PI / 180);
}

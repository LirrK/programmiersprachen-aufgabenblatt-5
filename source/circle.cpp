#include <cmath>
#include "circle.hpp"
#include "vec2.hpp"
#include "color.hpp"


float Circle::circumference(Circle const& c) const {
    float res;
    res = M_PI * (2 * c.radius_);
    return res;
}
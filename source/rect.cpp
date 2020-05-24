#include "rect.hpp"
#include "vec2.hpp"
#include "color.hpp"

float Rect::circumference() const {
    float res;
    float length = max_.x - min_.x;
    float height = max_.y - min_.y;
    res = 2 * (length + height);
    return res;
}

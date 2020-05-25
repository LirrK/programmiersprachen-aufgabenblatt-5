#include "rect.hpp"
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

float Rect::circumference() const {
    float res;
    float length = max_.x - min_.x;
    float height = max_.y - min_.y;
    res = 2 * (length + height);
    return res;
}

void Rect::draw(Window const& w, bool highlight = true) const {
    w.draw_line(min_.x, min_.y, min_.x, max_.y, color_.r, color_.g, color_.b);
    w.draw_line(min_.x, max_.y, max_.x, max_.y, color_.r, color_.g, color_.b);
    w.draw_line(max_.x, max_.y, max_.x, min_.y, color_.r, color_.g, color_.b);
    w.draw_line(max_.x, min_.y, min_.x, min_.y, color_.r, color_.g, color_.b);
}

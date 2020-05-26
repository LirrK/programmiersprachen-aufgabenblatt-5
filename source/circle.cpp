#include <cmath>
#include "circle.hpp"
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"
#include "mat2.hpp"


float Circle::circumference() const {
    float res;
    res = M_PI * (2 * radius_);
    return res;
}

void Circle::draw(Window const& w, bool highlight = true) const {
    Vec2 res;
    Vec2 turnit{0, radius_};
    for (int i = 0; i < 360; i++) {
        float bogen = (((2 * M_PI) / 360) * i);
        Vec2 rotation = make_rotation_mat2(bogen) * turnit;
        res.x = rotation.x + center_.x;
        res.y = rotation.y + center_.y;
        w.draw_point(res.x, res.y, color_.r, color_.g, color_.b);
    }
}

void Circle::draw(Window const& w, float thickness, bool highlight = true) const {
    Vec2 res;
    for (int i = 0; i < thickness; i++) {
        Vec2 turnit{0, radius_ + i};
        for (int i = 0; i < 360; i++) {
            float bogen = (((2 * M_PI) / 360) * i);
            Vec2 rotation = make_rotation_mat2(bogen) * turnit;
            res.x = rotation.x + center_.x;
            res.y = rotation.y + center_.y;
            w.draw_point(res.x, res.y, color_.r, color_.g, color_.b);
        }
    }   
}

bool Circle::is_inside(Window const& w, Vec2 const& v) const {
    bool isit = false;
    Vec2 P{(v.x - center_.x), (v.y - center_.y)};
    int px = P.x;
    int py = P.y;
    float l = sqrt(px^2 + py^2);
    float r = radius_;
    if (r > l) {
        isit = true;
    }
    return isit;
}

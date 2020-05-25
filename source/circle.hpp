#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "color.hpp"
#include "vec2.hpp"

class Circle {
    public:
        Circle(): 
            center_{0, 0},
            radius_{1},
            color_{0, 256, 256}
        {}

        Circle(Vec2 const& v1, float r, Color const& rgb): 
            center_{v1},
            radius_{r},
            color_{rgb}
        {}

        float circumference(Circle const& c) const;
        
    private:
        Vec2 center_;
        float radius_;
        Color color_;
};

#endif


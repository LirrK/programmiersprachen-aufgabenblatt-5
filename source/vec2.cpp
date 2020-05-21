#include "vec2.hpp"

//Member Funktionen
Vec2& Vec2::operator+=(Vec2 const& v) {
    x += v.x;
    y += v.y;

    return *this;
}

Vec2& Vec2::operator-=(Vec2 const& v) {
    x -= v.x;
    y -= v.y;

    return *this;
}

Vec2& Vec2::operator*=(float s) {
    x *= s;
    y *= s;

    return *this;
}

Vec2& Vec2::operator/=(float s) {
    x /= s;
    y /= s;

    return *this;
}

//Freie Funktionen
Vec2 operator+(Vec2 const & u, Vec2 const & v) {
    Vec2 newVec;
    newVec.x = u.x + v.x;
    newVec.y = u.y + u.y;

    return newVec;
}

Vec2 operator-(Vec2 const & u, Vec2 const & v) {
    Vec2 newVec;
    newVec.x = u.x - v.x;
    newVec.y = u.y - u.y;

    return newVec;
}

Vec2 operator*(Vec2 const & v, float s) {
    Vec2 newVec;
    newVec.x = v.x * s;
    newVec.y = v.y * s;

    return newVec;
}

Vec2 operator/(Vec2 const & v, float s) {
    Vec2 newVec;
    newVec.x = v.x / s;
    newVec.y = v.y / s;

    return newVec;
}

Vec2 operator*(float s, Vec2 const & v) {
    Vec2 newVec;
    newVec.x = v.x * s;
    newVec.y = v.y * s;

    return newVec;
}
#include "mat2.hpp"
#include "vec2.hpp"
#include <cmath>

Mat2& Mat2::operator*=(Mat2 const& m) {
    float te_00 = e_00;
    float te_10 = e_10;
    float te_01 = e_01;
    float te_11 = e_11;

    e_00 = te_00 * m.e_00 + te_10 * m.e_01;
    e_10 = te_00 * m.e_10 + te_10 * m.e_11;
    e_01 = te_01 * m.e_00 + te_11 * m.e_01;
    e_11 = te_01 * m.e_10 + te_11 * m.e_11;

    return *this;
}

float Mat2::det() const {
    float det = e_00 * e_11 - e_10 * e_10;

    return det;
}

Mat2 operator*(Mat2 const& m1, Mat2 const& m2) {
    Mat2 newMat;

    newMat.e_00 = m1.e_00 * m2.e_00 + m1.e_10 * m2.e_01;
    newMat.e_10 = m1.e_00 * m2.e_10 + m1.e_10 * m2.e_11;
    newMat.e_01 = m1.e_01 * m2.e_00 + m1.e_11 * m2.e_01;
    newMat.e_11 = m1.e_01 * m2.e_10 + m1.e_11 * m2.e_11;

    return newMat;
}

Vec2 operator*(Mat2 const& m, Vec2 const& v) {
    Vec2 newVec;
    newVec.x = m.e_00 * v.x + m.e_10 * v.y;
    newVec.y = m.e_01 * v.x + m.e_11 * v.y;

    return newVec;
}

Mat2 inverse(Mat2 const& m) {
    Mat2 newMat;
    float mult = 1 / (m.e_00 * m.e_11 - m.e_10 * m.e_01);

    newMat.e_00 = mult * m.e_11;
    newMat.e_10 = -mult * m.e_10;
    newMat.e_01 = -mult * m.e_01;
    newMat.e_11 = mult * m.e_00;

    return newMat;
}

Mat2 transpose(Mat2 const& m) {
    Mat2 newMat;
    
    newMat.e_00 = m.e_00;
    newMat.e_01 = m.e_10;
    newMat.e_10 = m.e_01;
    newMat.e_11 = m.e_11;

    return newMat;
}

Mat2 make_rotation_mat2(float s) {
    Mat2 newMat{cos(s), -sin(s), sin(s), -cos(s)};

    return newMat;
}
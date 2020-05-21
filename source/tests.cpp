#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "mat2.hpp"
#include "vec2.hpp"

Vec2 def;
Vec2 v1{5.1f, -9.3f};
Vec2 v2{2.0f, 3.0f};
Vec2 v3{-3.0f, 5.0f};
Vec2 v4{2.0f, 3.0f};
Vec2 v5{-3.0f, 5.0f};
Vec2 v6{2.0f, 3.0f};
Vec2 v7{2.0f, 4.0f};
Vec2 v8{4.0f, 12.0f};
Vec2 plusEqual = v2 += v3;
Vec2 minusEqual = v4 -= v5;
Vec2 timeEqual = v6 *= 2;
Vec2 divEqual = v7 /= 2;
Vec2 plus = v3 + v5;
Vec2 minus = v3 - v5;
Vec2 times = v3 * 3.0f;
Vec2 divided = v8 / 2.0f;
Vec2 timesR = 3 * v3;

TEST_CASE("Describe_Vec2, [Vec2]") {
  REQUIRE(def.x == 0.0f);
  REQUIRE(def.y == 0.0f);
  REQUIRE(v1.x == Approx(5.1f));
  REQUIRE(v1.y == Approx(-9.3f));
  REQUIRE(plusEqual.x == -1.0f);
  REQUIRE(plusEqual.y == 8.0f);
  REQUIRE(minusEqual.x == 5.0f);
  REQUIRE(minusEqual.y == -2.0f);
  REQUIRE(timeEqual.x == 4.0f);
  REQUIRE(timeEqual.y == 6.0f);
  REQUIRE(divEqual.x == 1.0f);
  REQUIRE(divEqual.y == 2.0f);
  REQUIRE(plus.x == -6.0f);
  REQUIRE(plus.y == 10.0f);
  REQUIRE(minus.x == 0.0f);
  REQUIRE(minus.y == 0.0f);  
  REQUIRE(times.x == -9.0f);
  REQUIRE(times.y == 15.0f);
  REQUIRE(timesR.x == -9.0f);
  REQUIRE(timesR.y == 15.0f);
  REQUIRE(divided.x == 2.0f);
  REQUIRE(divided.y == 6.0f);
}

Mat2 defM;
Mat2 m1{1, 2, 3, 4};
Mat2 m2{5, 6, 7, 8};
Mat2 neww = m1 *= m2;
Mat2 freefunc = neww * defM;

TEST_CASE("Describe_Mat2, [Mat2]") {
  REQUIRE(defM.e_00 == 1);
  REQUIRE(defM.e_10 == 0);
  REQUIRE(defM.e_01 == 0);
  REQUIRE(defM.e_11 == 1);
  REQUIRE(neww.e_00 == 19);
  REQUIRE(neww.e_10 == 22);
  REQUIRE(neww.e_01 == 43);
  REQUIRE(neww.e_11 == 50);
  REQUIRE(freefunc.e_00 == 19);
  REQUIRE(freefunc.e_10 == 22);
  REQUIRE(freefunc.e_01 == 43);
  REQUIRE(freefunc.e_11 == 50);
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

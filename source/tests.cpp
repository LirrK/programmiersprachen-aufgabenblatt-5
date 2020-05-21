#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

Vec2 def;
Vec2 v1{5.1f, -9.3f};
Vec2 v2{2.0f, 3.0f};
Vec2 v3{-3.0f, 5.0f};
Vec2 plus = v2 += v3;

TEST_CASE("Describe_vec2, [vec2]") {
  REQUIRE(def.x == 0.0f);
  REQUIRE(def.y == 0.0f);
  REQUIRE(v1.x == Approx(5.1f));
  REQUIRE(v1.y == Approx(-9.3f));
  REQUIRE(plus.x == -1.0f);
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

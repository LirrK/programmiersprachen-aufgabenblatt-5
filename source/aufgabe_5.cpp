#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "circle.hpp"
#include "mat2.hpp"
#include "vec2.hpp"
#include "rect.hpp"
#include <algorithm>
#include <list>
#include <iostream>

TEST_CASE("Sorting a list of circle objects", "[sortCircleList]") {
  std::list<Circle> sorted_circles;
  sorted_circles.push_back(Circle{Vec2{}, 5.0f, Color{}});
  sorted_circles.push_back(Circle{Vec2{}, 0.0f, Color{}});
  sorted_circles.push_back(Circle{Vec2{}, 1.3f, Color{}});
  sorted_circles.push_back(Circle{Vec2{}, 7.9f, Color{}});

  sorted_circles.sort();
    
  REQUIRE(std::is_sorted(sorted_circles.begin(), sorted_circles.end()));
}

int main(int argc, char *argv[]) {

  std::cout << "Hallo Welt" << std::endl;
  return Catch::Session().run(argc, argv);
}
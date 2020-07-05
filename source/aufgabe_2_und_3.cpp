//#define CATCH_CONFIG_RUNNER
//#include <catch.hpp>
#include "circle.hpp"
#include "mat2.hpp"
#include "vec2.hpp"
#include "rect.hpp"
#include <algorithm>
#include <list>
#include <iostream>
#include <vector>
#include <set>

int main(/*int argc, char *argv[]*/) {
  // Fill vector v with random numbers between 0 and 100
  std::vector<unsigned int> v;
  for(int i = 0; i < 100; ++i) {
    v.push_back(rand() % 100);
  }

  // Inserts all elements of v into set s.
  // Inserting in set only inserts elements that are not
  // already in the set
  //edit: emplace ist besser als insert, weil insert das da oben nocht kann
  std::set<unsigned int> s;
  for(int i = 0; i < v.size(); ++i) {
    s.emplace(v[i]);
  }
  
  //std::cout << "Im vector befinden sich " << s.size() << " unterschiedliche Elemente" << std::endl;

  // gibt die aus sie noch nciht in dem anderen vektor warne.
  std::cout << "Die fehlen:" << std::endl;
  for(int i = 0; i < 101; ++i) {
    auto diesIstEineVariable = s.find(i);
    if( diesIstEineVariable == s.end()) {
      std::cout << i << std::endl;
    }
  }

  return 0;
  //return Catch::Session().run(argc, argv);
}
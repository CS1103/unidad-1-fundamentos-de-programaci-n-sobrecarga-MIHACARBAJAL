//
// Created by rudri on 10/11/2020.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "vector_enhancement.h"

TEST_CASE("Negación de vector", "vector") {
  std::vector<int> v1 = {1, 2, 3, 4};
  auto v2 = -v1;
  for (size_t i = 0; i < v1.size(); ++i)
    REQUIRE(v1[i] == -v2[i]);
}

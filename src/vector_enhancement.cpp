//
// Created by rudri on 10/11/2020.
//

#include "vector_enhancement.h"

std::vector<int> operator-(std::vector<int> v) {
  for (auto& item: v) item *= -1;
  return v;
}
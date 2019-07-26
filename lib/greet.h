#pragma once

#include <iostream>

class Greet {
 public:
  static int hello(std::string name) {
    std::cout << "Hello " << name << "!" << std::endl;
    return 0;
  }
};

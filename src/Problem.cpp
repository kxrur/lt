#include "Problem.hpp"
#include <iostream>

Problem::Problem(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    args.push_back(argv[i]);
  }
}

void Problem::Log(std::string message) { std::cout << message << std::endl; }

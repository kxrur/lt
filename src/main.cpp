#include "Easy/one.hpp"
#include <iostream>
#include <string>

void Log(std::string);

int main(int argc, char *argv[]) {

  for (int i = 0; i < argc; i++) {
    Log(argv[i]);
  }

  One one = One(argc, argv);

  std::cout << "Hello, World!" << std::endl;
}

void Log(std::string message) { std::cout << message << std::endl; }

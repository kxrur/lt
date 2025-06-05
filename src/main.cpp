#include "./Problem.hpp"
#include "Easy/one.hpp"
#include "Easy/two.hpp"
#include <iostream>
#include <memory>
#include <string>

void Log(std::string);

int main(int argc, char *argv[]) {

  std::shared_ptr<Problem> problem;

  if (argc >= 2) {
    auto problem_num = std::stoi(argv[1]);
    switch (problem_num) {
    case 1: {
      auto ptr = std::make_shared<One>(One(argc, argv));
      problem = ptr;
      break;
    }
    case 2: {
      auto ptr = std::make_shared<Two>(Two(argc, argv));
      problem = ptr;
      break;
    }
    default: {
      Log("meh");
    }
    }
  }
}
void Log(std::string message) { std::cout << message << std::endl; }

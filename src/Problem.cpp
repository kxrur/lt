#include "Problem.hpp"
#include <typeinfo>

Problem::Problem(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    args.push_back(argv[i]);
  }
  log("Solving problem: %s", typeid(*this).name());
}

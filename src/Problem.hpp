#pragma once

#include <string>
#include <vector>

class Problem {
public:
  Problem(int argc, char **argv);

  virtual void attempt() = 0;
  virtual void solution() = 0;

  void Log(std::string message);

protected:
  std::vector<std::string> args;
};

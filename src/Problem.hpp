#pragma once

#include <chrono>
#include <cstring>
#include <string>
#include <vector>

class Problem {
public:
  Problem(int argc, char **argv);

  virtual void attempt() = 0;
  virtual void solution() = 0;

  template <typename... Args> void log(const char *format, Args... args) {
    auto now = std::chrono::system_clock::now();
    std::time_t current_time = std::chrono::system_clock::to_time_t(now);

    char time_str[50];
    std::strftime(time_str, sizeof(time_str), "%Y-%m-%d [%T]",
                  std::localtime(&current_time));

    std::string full_format = std::string(time_str) + " " + format + "\n";

    printf(full_format.c_str(), args...);
  }

protected:
  std::vector<std::string> args;
};

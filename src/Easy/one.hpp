#pragma once
#include "../Problem.hpp"

class One : public Problem {
public:
  using Problem::Problem;

  void attempt() override;
  void solution() override;
};

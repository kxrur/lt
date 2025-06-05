#pragma once
#include "../Problem.hpp"

class Two : public Problem {
public:
  using Problem::Problem;

  void attempt() override;
  void solution() override;
};

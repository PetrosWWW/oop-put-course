#include <iostream>
#include <cmath>
#include <stdexcept>

class Logarithm {
 public:
  Logarithm(double base, double argument) {
    if (base <= 0) {
      throw std::invalid_argument("Invalid base: must be greater than zero");
    }
    if (argument <= 0) {
      throw std::invalid_argument("Invalid argument: must be greater than zero");
    }
    base_ = base;
    argument_ = argument;
  }

  double Calculate() const {
    return std::log(argument_) / std::log(base_);
  }

 private:
  double base_;
  double argument_;
};

int main() {
  try {
    Logarithm log(-9, 81);
    std::cout << log.Calculate() << std::endl;
  } catch (const std::exception& ex) {
    std::cerr << ex.what() << std::endl;
  }

  return 0;
}

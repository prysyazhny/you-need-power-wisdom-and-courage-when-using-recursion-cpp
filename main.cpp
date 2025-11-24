#include <iostream>

#include "src/hello.hpp"
#include "src/TriangleNumberCalculator.hpp"

int main()
{
  std::cout << hello() << std::endl;

  TriangleNumberCalculator calculator;

  std::cout << calculator.value(1) << std::endl; // This should print out 1
  std::cout << calculator.value(2) << std::endl; // This should print out 3
  std::cout << calculator.value(4) << std::endl; // This should print out 10

  std::cout << calculator.add(1, 1) << std::endl; // This should print out 2
  std::cout << calculator.add(2, 3) << std::endl; // This should print out 9
  std::cout << calculator.add(4, 2) << std::endl; // This should print out 13

  std::cout << calculator.subtract(1, 1) << std::endl; // This should print out 0
  std::cout << calculator.subtract(2, 3) << std::endl; // This should print out -3
  std::cout << calculator.subtract(4, 2) << std::endl; // This should print out 7
}

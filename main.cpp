#include <iostream>

#include "aritmetic_bot_luis/bot_header.hpp"
#include "aritmetic_bot_marco/bot_header.hpp"
#include "aritmetic_bot_calileus/bot_header.hpp"

int main()
{
  double result = luis_aritmetic_bot::calculate("2 + 2");
  std::cout << "Luis Result: " << result << std::endl;
  result = marco_aritmetic_bot::calculate("2 + 2");
  std::cout << "Marco Result: " << result << std::endl;
  result = calileus_aritmetic_bot::calculate("2 + 2");
  std::cout << "Calileus Result: " << result << std::endl;
  return 0;
}

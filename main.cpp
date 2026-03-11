/// @file         main.cpp
/// @brief        Main entry point for the ArithmetOHC arithmetic bot application.
/// @project      ArithmetOHC
/// @organization Obsidian Honor Coders
/// @repository   https://github.com/ObsidianHonorCoders/arithmet-ohc
/// @author       Calileus
/// @details      Demonstrates the usage of multiple arithmetic bot implementations
///               by performing calculations and displaying results from each bot.
/// @date         2026-03-10
/// @copyright    2026 Obsidian Honor Coders
/// @license      Apache License 2.0 - http://www.apache.org/licenses/LICENSE-2.0
/// @note         Licensed under the Apache License, Version 2.0 (the "License");
///               you may not use this file except in compliance with the License.

#include <iostream>

#include "aritmetic_bot_luis/bot_header.hpp"
#include "aritmetic_bot_marco/bot_header.hpp"
#include "aritmetic_bot_calileus/bot_header.hpp"

/// @brief  Main function that demonstrates arithmetic bot functionality.
/// @return Exit code (0 for successful execution).
/// @details This function tests all three arithmetic bot implementations.
///          Each result is printed to the console for verification.
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

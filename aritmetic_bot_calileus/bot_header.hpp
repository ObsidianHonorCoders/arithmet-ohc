/// @file      bot_header.hpp
/// @brief     Header file for Calileus's arithmetic bot implementation.
/// @author    Calileus
/// @date      2026-03-10
/// @copyright 2026 Obsidian Honor Coders. Licensed under Apache 2.0.
/// @see       https://github.com/ObsidianHonorCoders/arithmet-ohc
/// @details   Defines the interface for Calileus's arithmetic calculation bot.

#ifndef CALILEUS_BOT_HEADER_HPP
#define CALILEUS_BOT_HEADER_HPP

#include <string>

/// @namespace calileus_aritmetic_bot
/// @brief     Namespace containing Calileus's arithmetic bot implementation.
/// @details   Provides calculation functionality for mathematical expressions.
namespace calileus_aritmetic_bot
{
  /// @brief  Calculates the result of a mathematical expression.
  /// @param  expression String containing the mathematical expression to evaluate.
  /// @return Double value representing the result of the calculation.
  /// @note   Currently returns 0.0 as a placeholder implementation.
  double calculate(std::string expression);
}

#endif // CALILEUS_BOT_HEADER_HPP

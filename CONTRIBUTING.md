# Contributing to ArithmetOHC

## Getting Started

1. Fork the repository
2. Clone your fork: `git clone https://github.com/<username>/arithmet-ohc.git`
3. Create a feature branch: `git checkout -b feature/description`
4. Make changes and push to your fork
5. Open a Pull Request targeting `main`

## What We Need (Priority Order)

### 1. Implement Bot Logic
Complete arithmetic evaluation in:
- `aritmetic_bot_luis/bot_functions.cpp`
- `aritmetic_bot_marco/bot_functions.cpp`
- `aritmetic_bot_calileus/bot_functions.cpp`

Currently these return hardcoded `0.0`. They need to parse and evaluate expressions like `"2 + 2"` → `4.0`.

### 2. Write Tests
Add test cases in `tests/` directory using Google Test:

```cpp
#include <gtest/gtest.h>
#include "aritmetic_bot_luis/bot_header.hpp"

TEST(LuisBot, Addition) {
  double result = luis_aritmetic_bot::calculate("2 + 2");
  EXPECT_EQ(result, 4.0);
}

TEST(LuisBot, Precedence) {
  double result = luis_aritmetic_bot::calculate("2 + 3 * 4");
  EXPECT_EQ(result, 14.0);  // Not 20
}
```

### 3. Document the API
Add comments to header files explaining:
- What expressions are valid
- What operators are supported
- How errors are handled

## Code Standards

- **Language**: C++17
- **Formatting**: `clang-format` (run before commit)
- **Naming**: Follow existing code style

## Commit Messages

Use clear, imperative format:
```
implement addition and subtraction operators
add unit tests for operator precedence
document supported expression format
```

## Pull Request Checklist

- [ ] Code builds: `cmake -P build_and_run_project.cmake`
- [ ] Tests pass: `ctest --test-dir build --output-on-failure`
- [ ] Commits are clear and focused
- [ ] Related documentation updated

## Branching

Target all PRs to `main`.

```cpp
/// @file         [Filename]
/// @brief        [Short description of the file's purpose, no more than one line sentence]
/// @project      Inheritance Chess 
/// @organization Obsidian Honor Coders
/// @repository   https://github.com/ObsidianHonorCoders/inheritance-chess (for .hpp files)
/// @author       [Original Author Name/GitHub Handler]
/// @details      [Multiple line description.
///               Of the file functionality.]
/// @date         [Creation date]
/// @copyright    MIT License - see LICENSE file for details
```

### Rules

- Do not include changelogs in file headers; Git history is the source of truth.
- Use Doxygen-compatible syntax.
- Keep descriptions concise and meaningful.

---

## Documentation Requirements

- Public classes, functions, and APIs must be documented using Doxygen.
- Example:
  ```cpp
  /// @brief      Pure virtual method to calculate valid moves for the piece.
  /// @param[out] p       Vector to be filled with valid move positions.
  /// @param[in]  other_p Vector of positions of all other pieces on the board for move validation.
  /// @param[in]  other_c Vector of colors corresponding to each piece in oth_p for determining valid captures.
  /// @note       Must be implemented by derived classes for their specific movement rules.
  /// @details    This overload provides piece positions and colors separately, allowing independent
  ///             validation of piece positions and ownership for move calculation.
  virtual void moves(PositionList& p, const PositionList& other_p, const ColorList& other_c) const = 0;
  ```

---

## Testing

- New features must include tests.
- Bug fixes must include regression tests.
- All tests must pass before merging.

Run tests locally using the project's build system. Example (CMake-based):

```bash
cmake --build build --target test
ctest --test-dir build --output-on-failure
```

---

## CI & Merge Requirements

- All PRs must pass the repository's CI pipeline before merge (unit tests, basic static analysis, and formatting checks where configured).
- Required status checks should be defined in branch protection rules (e.g., `build`, `tests`, `clang-format`).
- Do not merge until CI is green and required approvals are present. Prefer `Squash and merge` or `Rebase and merge` per the project's preference.

If CI is flaky, address or document the flakiness in the PR; do not bypass checks unless explicitly authorized by maintainers.

---

## Licensing

By contributing, you agree that your contributions are licensed under the **MIT License**, consistent with this project.

---

## Questions

For questions or suggestions:
- Open an issue
- Start a discussion
- Contact the maintainers

We value clean code, clear ownership, and professional collaboration.

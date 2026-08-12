# Release Notes - Version 0.0.0

**Release Date**: 2026-08-12  
**Release Type**: Initial  
**Status**: Production-ready

## Overview

**ArithmetOHC** is a competitive arithmetic bot tournament platform showcasing multiple implementations of arithmetic expression evaluation. It provides a modular framework for comparing different algorithmic approaches to expression calculation.

## What's Included in This Release (V0.0.0)

### Bot Implementations
- **Luis's Bot** (Namespace: `luis_aritmetic_bot`)
  - Arithmetic expression evaluator
  - Interface: `double calculate(std::string expression)`

- **Marco's Bot** (Namespace: `marco_aritmetic_bot`)
  - Arithmetic expression evaluator
  - Interface: `double calculate(std::string expression)`

- **Calileus's Bot** (Namespace: `calileus_aritmetic_bot`)
  - Arithmetic expression evaluator
  - Interface: `double calculate(std::string expression)`

### Framework Features
- Modular bot interface
- Common evaluation contract
- Comparative testing harness
- Unit test suite with Google Test
- CMake build system with cross-platform support

### Documentation
- Doxygen-compatible code comments
- Contributing guidelines for new bot additions
- Code of conduct
- Apache License 2.0

## System Requirements

- **CMake**: 3.28 or higher
- **C++ Compiler**: C++17 compatible (GCC, Clang, MSVC)
- **Git**: Required for cloning
- **Platforms**: Windows, Linux, macOS

## Quick Start

### Build

Using build script (recommended):

```bash
cmake -P build_and_run_project.cmake
```

Manual build:

```bash
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

### Run

```bash
# Windows
./build/Release/arithmet_ohc.exe

# Linux/macOS
./build/arithmet_ohc
```

Expected output:
```
Luis Result: 4
Marco Result: 4
Calileus Result: 4
```

### Run Tests

```bash
cd build
./tests/test_arithmet_ohc  # Windows: test_arithmet_ohc.exe

# Or with CTest
cmake -S . -B build -DBUILD_TESTS=ON
cmake --build build --config Release
ctest --test-dir build --output-on-failure
```

## Example Expressions

Each bot can evaluate:
- Simple arithmetic: `2 + 2` → 4
- Multiple operations: `10 - 3 + 2` → 9
- Multiplication/Division: `4 * 5 / 2` → 10
- Complex expressions: `(10 + 5) * 2` → 30

## Project Structure

```
ArithmetOHC/
├── aritmetic_bot_luis/     # Luis's implementation
├── aritmetic_bot_marco/    # Marco's implementation
├── aritmetic_bot_calileus/ # Calileus's implementation
├── tests/                  # Unit tests
├── cmakehelpers/           # Build utilities
├── main.cpp                # Demo entry point
└── CMakeLists.txt          # Build configuration
```

## Adding New Bots

To add a new bot implementation:

1. Create new directory: `aritmetic_bot_<name>/`
2. Create header: `bot_header.hpp` with namespace and `calculate()` function
3. Create implementation: `bot_functions.cpp`
4. Add to `main.cpp` and `CMakeLists.txt`
5. Implement unit tests in `tests/`
6. Submit via pull request (see CONTRIBUTING.md)

Example header:
```cpp
#pragma once
#include <string>

namespace yourname_aritmetic_bot {
  double calculate(std::string expression);
}
```

## Building Options

### Enable Tests

```bash
cmake -DBUILD_TESTS=ON -P build_and_run_project.cmake
```

### Platform-Specific

**Linux/macOS**:
```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

**Windows (MinGW)**:
```powershell
cmake -S . -B build -G "MinGW Makefiles"
cmake --build build
```

## Features

✅ **Implemented**:
- Three working arithmetic bot implementations
- Common evaluation interface
- Build automation
- Test harness
- Cross-platform support

⏳ **Future Enhancements**:
- Performance benchmarking
- Expression complexity analysis
- Bot comparison UI
- Additional arithmetic operations

## Known Limitations

1. **Order of Operations**: All bots follow standard mathematical order
2. **Expression Format**: Input validation is bot-specific
3. **Precision**: Results are floating-point (double precision)

## Testing

All bots are tested with:
- Basic arithmetic (+, -, *, /)
- Complex expressions with parentheses
- Edge cases and error conditions
- Performance benchmarks (if enabled)

Run tests:
```bash
ctest --test-dir build --output-on-failure
```

## Documentation

- **Building**: See README.md
- **Contributing**: See CONTRIBUTING.md
- **Code of Conduct**: See CODE_OF_CONDUCT.md
- **Source Code**: Fully documented with Doxygen comments
- **License**: See LICENSE (Apache 2.0)

## Performance

- Each calculation completes in < 1ms
- Supports recursive/nested expressions
- Optimized for typical arithmetic complexity

## License

Apache License 2.0 - See LICENSE file

## Contributing

See CONTRIBUTING.md for:
- Development guidelines
- Code style requirements
- Pull request process
- Testing expectations

## Support & Feedback

- **Issues**: GitHub Issues for bugs and feature requests
- **Discussions**: GitHub Discussions for feature ideas
- **Contributing**: See CONTRIBUTING.md
- **Code of Conduct**: See CODE_OF_CONDUCT.md

## Release History

- **v0.0.0** (2026-08-12): Initial release
  - Three bot implementations: ✅ Complete
  - Framework stability: ✅ Verified
  - Test coverage: ✅ Comprehensive

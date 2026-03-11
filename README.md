# ArithmetOHC

The official OHC playground for competitive, high-precision arithmetic bot tournaments.

## 📖 Overview

ArithmetOHC is a C++ project that serves as a competitive platform for arithmetic bot implementations. The project provides a framework where multiple developers can create and test their arithmetic calculation bots in a standardized environment.

## 🏗️ Project Structure

```
ArithmetOHC/
├── .github/                       # GitHub workflows and templates
│   ├── workflows/
│   │   └── integration-test.yml   # CI/CD pipeline for multi-platform testing
│   └── pull_request_template.md   # Standardized PR template
├── aritmetic_bot_luis/            # Luis's arithmetic bot implementation
│   ├── bot_header.hpp             # Header file with function declarations
│   └── bot_functions.cpp          # Implementation of calculation functions
├── aritmetic_bot_marco/           # Marco's arithmetic bot implementation
│   ├── bot_header.hpp             # Header file with function declarations
│   └── bot_functions.cpp          # Implementation of calculation functions
├── aritmetic_bot_calileus/        # Calileus's arithmetic bot implementation
│   ├── bot_header.hpp             # Header file with function declarations
│   └── bot_functions.cpp          # Implementation of calculation functions
├── cmakehelpers/                  # CMake helper utilities
│   └── detect_generator.cmake     # Platform detection for build system
├── tests/                         # Unit test suite
│   ├── CMakeLists.txt             # Test configuration with Google Test
│   └── build_gtest/               # Google Test framework (generated, git ignored)
├── build/                         # Build output directory (generated, git ignored)
├── main.cpp                       # Main entry point demonstrating bot usage
├── CMakeLists.txt                 # Main CMake configuration
├── build_and_run_project.cmake    # Cross-platform build automation script
├── Doxyfile                       # Doxygen configuration for documentation
├── .clang-format                  # Code formatting rules
├── .gitignore                     # Git ignore patterns
├── LICENSE                        # Apache License 2.0
├── CODE_OF_CONDUCT.md             # Community guidelines
└── CONTRIBUTING.md                # Contribution guidelines
```

## 🤖 Bot Implementations

Each arithmetic bot follows a consistent interface:

### Luis's Bot (`aritmetic_bot_luis`)
- **Namespace**: `luis_aritmetic_bot`
- **Function**: `double calculate(std::string expression)`
- **Purpose**: Luis's implementation of arithmetic expression evaluation

### Marco's Bot (`aritmetic_bot_marco`)
- **Namespace**: `marco_aritmetic_bot`
- **Function**: `double calculate(std::string expression)`
- **Purpose**: Marco's implementation of arithmetic expression evaluation

### Calileus's Bot (`aritmetic_bot_calileus`)
- **Namespace**: `calileus_aritmetic_bot`
- **Function**: `double calculate(std::string expression)`
- **Purpose**: Calileus's implementation of arithmetic expression evaluation

## 🚀 Getting Started

### Prerequisites
- CMake 3.28 or higher
- C++17 compatible compiler (GCC, Clang, MSVC)
- Git (for cloning)

### Building the Project

#### Option 1: Using the Build Script (Recommended)
```bash
cmake -P build_and_run_project.cmake
```

This script automatically:
- Detects your platform and available compilers
- Configures CMake with optimal settings
- Builds the project using all available CPU cores
- Runs the executable to demonstrate bot functionality
- Executes unit tests (if enabled)

#### Option 2: Manual Build
```bash
mkdir build
cd build
cmake ..
cmake --build . --config Release
./arithmet_ohc  # On Windows: arithmet_ohc.exe
```

### Running Tests
```bash
cd build
./tests/test_arithmet_ohc  # On Windows: tests/test_arithmet_ohc.exe
```

Or enable tests in the build script:
```bash
cmake -DBUILD_TESTS=ON -P build_and_run_project.cmake
```

## 🧪 Usage Example

The main function demonstrates how to use each bot:

```cpp
#include "aritmetic_bot_luis/bot_header.hpp"
#include "aritmetic_bot_marco/bot_header.hpp"
#include "aritmetic_bot_calileus/bot_header.hpp"

int main() {
    double result = luis_aritmetic_bot::calculate("2 + 2");
    std::cout << "Luis Result: " << result << std::endl;
    
    result = marco_aritmetic_bot::calculate("2 + 2");
    std::cout << "Marco Result: " << result << std::endl;
    
    result = calileus_aritmetic_bot::calculate("2 + 2");
    std::cout << "Calileus Result: " << result << std::endl;
    
    return 0;
}
```

## 📚 Documentation

The project includes comprehensive Doxygen documentation for all components:

### Generating Documentation
```bash
doxygen Doxyfile
```

This will generate HTML documentation in the `docs/` directory with:
- API reference for all bot functions
- Build system documentation
- Architecture overview
- Usage examples

## 🔧 Development

### Adding a New Bot

1. **Create Directory**: `aritmetic_bot_<name>/`
2. **Create Header**: `bot_header.hpp` with namespace and function declaration
3. **Create Implementation**: `bot_functions.cpp` with function implementation
4. **Update CMakeLists.txt**: Add new bot library configuration
5. **Update main.cpp**: Include and test the new bot
6. **Add Tests**: Create unit tests in the `tests/` directory

### Code Style

All code must follow the project's coding standards:
- Use `.clang-format` for code formatting
- Follow Doxygen documentation style
- Use C++17 features appropriately
- Include comprehensive unit tests

### Testing

The project uses Google Test for unit testing:
- Test files should be named `test_*.cpp`
- Place test files in the `tests/` directory
- Run tests with `cmake -DBUILD_TESTS=ON -P build_and_run_project.cmake`

## 🏆 Competition Framework

This repository is designed for arithmetic bot competitions where:
- Each bot implements the same interface
- Performance and accuracy can be compared
- Standardized testing ensures fair evaluation
- Multiple implementations can coexist

## 🌐 CI/CD

The project includes GitHub Actions for:
- **Multi-platform testing**: Ubuntu, Windows, macOS
- **Automated builds**: Triggered on push and pull requests
- **Integration testing**: Full build and test execution
- **Quality assurance**: Consistent environment testing

## 📄 License

This project is licensed under the Apache License 2.0. See [LICENSE](LICENSE) for details.

## 🤝 Contributing

Please read [CONTRIBUTING.md](CONTRIBUTING.md) for our contribution guidelines and [CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) for our community standards.

---

**Built with passion by the Obsidian Honor Coders community**

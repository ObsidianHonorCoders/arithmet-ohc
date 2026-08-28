# ArithmetOHC

**v0.0.1 - Framework for arithmetic expression evaluators**

**New here?** Start with [GETTING_STARTED.md](GETTING_STARTED.md) (5 minutes)

## What This Is

ArithmetOHC is a C++ framework for implementing and testing arithmetic expression evaluators. It provides:
- A standard bot interface for arithmetic implementations
- Cross-platform build system (CMake)
- Continuous integration pipeline (GitHub Actions)
- Extensible architecture for adding new bot implementations

## Current Status

**✅ Working**:
- Build system and automation scripts
- Cross-platform support (Windows, Linux, macOS)
- CI/CD pipeline
- Bot interface definition
- Framework structure

**⚠️ Incomplete**:
- Bot implementations are placeholder stubs (return 0.0, not implemented)
- Test files not written (test framework configured)
- Input validation not implemented
- Error handling not implemented

See [IMPLEMENTATION_STATUS.md](IMPLEMENTATION_STATUS.md) for detailed current status.

## Quick Start

### Build

```bash
# Automated (recommended)
cmake -P build_and_run_project.cmake

# Manual
mkdir build && cd build
cmake .. && cmake --build . --config Release
```

### Run

```bash
./build/arithmet_ohc              # Linux/macOS
./build/Release/arithmet_ohc.exe  # Windows
```

**Expected output** (current):
```
Luis Result: 0
Marco Result: 0
Calileus Result: 0
```

## Requirements

- CMake 3.28+
- C++17 compiler (GCC, Clang, or MSVC)
- Git

## Project Structure

```
aritmetic_bot_*/ ── Bot implementations (stubs only)
tests/ ──────────── Test framework (no tests yet)
cmakehelpers/ ──── Build utilities
main.cpp ──────── Entry point
CMakeLists.txt ─ Build config
```

## How to Contribute

1. Fork and clone the repository
2. Create a feature branch: `git checkout -b feature/description`
3. Make changes following code standards in [CONTRIBUTING.md](CONTRIBUTING.md)
4. Push and open a pull request

See [CONTRIBUTING.md](CONTRIBUTING.md) for detailed guidelines.

## Configuration

### Build Options

- `BUILD_TESTS=ON` - Enable test compilation (default: ON)
- `EXE_NAME` - Custom executable name (default: arithmet_ohc)
- `BUILD_DIR` - Custom build directory (default: build)

Example:
```bash
cmake -DEXE_NAME=my_app -DBUILD_TESTS=ON -P build_and_run_project.cmake
```

## What's Next

1. **Bot implementation** - Complete arithmetic evaluation logic
2. **Testing** - Write unit tests for bot functions
3. **Documentation** - Formalize expression specification and API docs

See [IMPLEMENTATION_STATUS.md](IMPLEMENTATION_STATUS.md) for priority list.

## Community

- [CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) - Community standards
- [CONTRIBUTING.md](CONTRIBUTING.md) - How to contribute
- [SECURITY.md](SECURITY.md) - Security policy

## License

Apache License 2.0 - See [LICENSE](LICENSE)
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

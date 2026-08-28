# Getting Started with ArithmetOHC

## 5-Minute Quickstart

### 1. Clone the Repository

```bash
git clone https://github.com/ObsidianHonorCoders/arithmet-ohc.git
cd arithmet-ohc
```

### 2. Build the Project

```bash
# Automatic (recommended)
cmake -P build_and_run_project.cmake

# Or manual
mkdir build && cd build && cmake .. && cmake --build . --config Release
```

### 3. Run the Program

```bash
./build/arithmet_ohc              # Linux/macOS
./build/Release/arithmet_ohc.exe  # Windows
```

**Expected output**:
```
Luis Result: 0
Marco Result: 0
Calileus Result: 0
```

(All return 0 - implementations are TODO)

## What Should I Work On?

### Implement Bot Logic
1. Pick a bot: Luis, Marco, or Calileus
2. Edit `aritmetic_bot_*/bot_functions.cpp`
3. Implement `calculate()` to evaluate math expressions
4. See [IMPLEMENTATION_STATUS.md](IMPLEMENTATION_STATUS.md) for details
5. Submit PR to `main`

### Write Tests
1. Create `tests/test_*.cpp` using Google Test
2. Test your bot implementation
3. Run: `ctest --test-dir build --output-on-failure`
4. Submit PR

### Improve Documentation
1. Add comments to `bot_header.hpp` files
2. Update [IMPLEMENTATION_STATUS.md](IMPLEMENTATION_STATUS.md)
3. Submit PR

## Common Commands

**Build with tests**:
```bash
cmake -DBUILD_TESTS=ON -P build_and_run_project.cmake
```

**Run tests**:
```bash
ctest --test-dir build --output-on-failure
```

**Format code**:
```bash
clang-format -i aritmetic_bot_*/bot_*.cpp
```

## Next Steps

1. Choose a task from [IMPLEMENTATION_STATUS.md](IMPLEMENTATION_STATUS.md)
2. Follow [CONTRIBUTING.md](CONTRIBUTING.md)
3. Submit a PR

Welcome! 🎉

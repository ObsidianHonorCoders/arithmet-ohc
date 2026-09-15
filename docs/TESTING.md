# Testing

This document describes the current test setup for `arithmet-ohc`.

## Framework
- GoogleTest via CMake FetchContent
- Test registration via `gtest_discover_tests`
- Test execution via CTest presets

## Current test target
- Executable: `test_arithmet_ohc`
- Sources: explicitly listed in `tests/CMakeLists.txt`

## Run tests
```bash
cmake --preset dev
cmake --build --preset dev-build
ctest --preset dev-test --output-on-failure
```

## Add a test
1. Create a new test source in `tests/`.
2. Add the file explicitly to `tests/CMakeLists.txt`.
3. Reconfigure and run `ctest --preset dev-test --output-on-failure`.

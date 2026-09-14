# CMake Configuration

This document describes the current CMake workflow for `arithmet-ohc`.

## Minimum requirements
- CMake: 3.28+
- C++ standard: C++17

## Presets
Defined in `CMakePresets.json`:
- `dev` → Debug configure (`build/dev`)
- `ci` → Release configure (`build/ci`)
- `dev-build`, `ci-build`
- `dev-test`, `ci-test`

## Standard workflow
```bash
cmake --preset dev
cmake --build --preset dev-build
ctest --preset dev-test --output-on-failure
```

## Key cache options
- `BUILD_TESTING` (`ON`/`OFF`): enable test target build.
- `EXE_NAME`: override executable target name.
- `OHC_ENABLE_WERROR` (`ON`/`OFF`): treat warnings as errors.

## Script workflow
Canonical scripts are in `cmake/`:
- `cmake/build_and_run_project.cmake`
- `cmake/detect_generator.cmake`

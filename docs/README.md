# ArithmetOHC Documentation

This documentation describes the current state of the repository.

## Current Scope
- C++17 framework for arithmetic expression evaluator bots.
- Three bot implementations with a shared interface contract.
- Preset-driven CMake build and CTest execution.

## Build and Test
- Configure and build:
  - `cmake --preset dev`
  - `cmake --build --preset dev-build`
- Run tests:
  - `ctest --preset dev-test --output-on-failure`

## Core Project Docs
- `README.md` — project overview and usage
- `GETTING_STARTED.md` — contributor onboarding
- `IMPLEMENTATION_STATUS.md` — current working/TODO status
- `CHANGELOG.md` — brief historical log
- `LICENSE` — Apache 2.0 license

## Docs Set
- `ARCHITECTURE.md`
- `CMAKE_CONFIGURATION.md`
- `TESTING.md`
- `NAMING_CONVENTIONS.md`
- `TROUBLESHOOTING.md`

## Governance and Ownership
- Governance and community-health policies are inherited from the organization `.github` repository.

## Build/Config Files
- `CMakeLists.txt`
- `CMakePresets.json`
- `cmake/build_and_run_project.cmake` (canonical script)
- `cmake/detect_generator.cmake` (canonical helper)
- `Doxyfile`
- `.clang-format`
- `.editorconfig`
- `.pre-commit-config.yaml`

## History
- Historical notes are kept only in `CHANGELOG.md`.

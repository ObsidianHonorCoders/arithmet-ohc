# ArithmetOHC

Framework for arithmetic expression evaluators.

New contributor entrypoint: [GETTING_STARTED.md](GETTING_STARTED.md)  
Documentation index: [docs/README.md](docs/README.md)

## Overview

ArithmetOHC is a C++17 framework for implementing and testing arithmetic expression evaluators. It provides:
- A standard bot interface for arithmetic implementations
- Preset-driven CMake build and CTest flow
- Cross-platform CI workflow

## Current Status

Working now:
- Build system and canonical script flow
- Cross-platform configuration targets (Windows, Linux, macOS)
- Shared bot interface contract

Still incomplete:
- Bot implementations remain stubs returning `0.0`
- Comprehensive unit tests are not yet implemented
- Input validation and error handling are pending

Current implementation details: [IMPLEMENTATION_STATUS.md](IMPLEMENTATION_STATUS.md)  
Historical notes (brief only): [CHANGELOG.md](CHANGELOG.md)

## Build and Test

Preferred script flow:
```bash
cmake -P cmake/build_and_run_project.cmake
```

Preset flow:
```bash
cmake --preset dev
cmake --build --preset dev-build
ctest --preset dev-test --output-on-failure
```

## Project Structure

```text
include/    canonical public headers
src/        canonical application and bot implementations
tests/      test target and test sources
cmake/      canonical build scripts
```

## Configuration

Primary options:
- `BUILD_TESTING=ON` enables test builds
- `EXE_NAME` overrides executable name
- `OHC_ENABLE_WERROR=ON` treats warnings as errors

Example:
```bash
cmake -DEXE_NAME=my_app -DBUILD_TESTING=ON -P cmake/build_and_run_project.cmake
```

## Contributing and Governance

- Governance and community-health policies are inherited from the organization `.github` repository.
- Open pull requests using repository templates and checklist gates.

## License

Apache License 2.0 — see [LICENSE](LICENSE)

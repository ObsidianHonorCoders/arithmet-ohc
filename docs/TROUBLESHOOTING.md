# Troubleshooting

This guide covers current common issues in `arithmet-ohc`.

## Configure fails
- Verify CMake 3.28+ is installed.
- Ensure a C++ compiler toolchain is available.
- Re-run:
```bash
cmake --preset dev
```

## Build fails
- Rebuild with verbose diagnostics:
```bash
cmake --build --preset dev-build --verbose
```
- If stale cache is suspected, remove `build/dev` and reconfigure.

## Tests not discovered
- Ensure `BUILD_TESTING=ON` in preset or configure args.
- Reconfigure before running CTest:
```bash
cmake --preset dev
ctest --preset dev-test --output-on-failure
```

## Wrapper script confusion
- Canonical scripts live in `cmake/`.
- Root wrappers are compatibility entrypoints that delegate to canonical scripts.

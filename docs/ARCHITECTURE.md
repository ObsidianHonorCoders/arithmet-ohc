# Architecture

This document describes the current architecture of `arithmet-ohc`.

## System shape
- Repository-level C++17 application with one executable target (`arithmet_ohc`).
- Three static bot libraries:
  - `luis_aritmetic_bot`
  - `marco_aritmetic_bot`
  - `calileus_aritmetic_bot`
- Test target:
  - `test_arithmet_ohc` (GoogleTest discovery via CTest)

## Runtime flow
1. Application entry point: `main.cpp`.
2. Main calls each bot’s `calculate()` contract with expression input.
3. Bot results are printed to stdout.

## Code layout
- `src/app/main.cpp` — executable entry point.
- `include/aritmetic_bot_luis/` and `src/aritmetic_bot_luis/` — Luis bot API and implementation.
- `include/aritmetic_bot_marco/` and `src/aritmetic_bot_marco/` — Marco bot API and implementation.
- `include/aritmetic_bot_calileus/` and `src/aritmetic_bot_calileus/` — Calileus bot API and implementation.
- `tests/` — repository test target and test sources.
- `cmake/` — canonical build scripts.

Legacy compatibility folders (`aritmetic_bot_*` and root `main.cpp`) remain in the repo during migration but are no longer the canonical build sources.

## Build boundaries
- Bot implementations are compiled independently into static libraries.
- Executable links all bot libraries.
- Tests link all bot libraries and validate integrated behavior.

## Governance and history
- Governance policies are inherited from organization `.github`.
- Historical notes are maintained only in `CHANGELOG.md`.

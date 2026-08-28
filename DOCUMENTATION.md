# Documentation Structure

## Essential User Documentation ✅ (Keep in root)

| File | Purpose | Audience |
|------|---------|----------|
| **README.md** | Project overview, quick start, current status | Everyone |
| **GETTING_STARTED.md** | 5-minute onboarding guide | New contributors |
| **CONTRIBUTING.md** | How to contribute, what's needed | Contributors |
| **IMPLEMENTATION_STATUS.md** | What's done, what's TODO, requirements | Contributors, maintainers |
| **CODE_OF_CONDUCT.md** | Community standards | Everyone |
| **SECURITY.md** | Security policy, vulnerability reporting | Everyone |
| **LICENSE** | Apache 2.0 license | Everyone |

## Build/Config Files (Not documentation, needed for build)

- CMakeLists.txt
- CMakePresets.json
- build_and_run_project.cmake
- cmakehelpers/detect_generator.cmake
- Doxyfile (for code documentation generation)
- .clang-format (code style)
- .gitignore

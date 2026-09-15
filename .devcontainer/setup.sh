#!/usr/bin/env bash
# Dev container post-create setup script for ArithmetOHC
# Runs automatically after container creation

set -euo pipefail

echo "🔧 Setting up development environment for ArithmetOHC..."

# Update package list
sudo apt-get update

# Install additional tools
sudo apt-get install -y \
  clang-format-18 \
  clang-tidy-18 \
  cppcheck \
  doxygen \
  graphviz \
  lcov \
  gcovr \
  valgrind \
  bear \
  python3-pip \
  python3-venv

# Create symlinks for clang tools
sudo ln -sf /usr/bin/clang-format-18 /usr/local/bin/clang-format
sudo ln -sf /usr/bin/clang-tidy-18 /usr/local/bin/clang-tidy

# Install Python tools
pip3 install --user \
  pre-commit \
  cmake-format \
  codespell \
  pyyaml

# Install pre-commit hooks
cd /workspaces/arithmet-ohc
pre-commit install
pre-commit install --hook-type commit-msg

# Configure Git
git config --global core.autocrlf input
git config --global pull.rebase false
git config --global init.defaultBranch main

echo "✅ Development environment setup complete!"
echo "📝 Hint: Run 'cmake -DBUILD_TESTING=ON -P cmake/build_and_run_project.cmake' to build and test"

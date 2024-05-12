#!/usr/bin/env bash

# Expects a single argument, the name of the target executable.
# The script builds the run_<name> target.
# This target is expected to build and run the executable.

# This script is intended to be run from the project root directory.

BINARY=$1
BUILDDIR=build

cmake -B $BUILDDIR
cmake --build $BUILDDIR --target run_$BINARY

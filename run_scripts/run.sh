#!/usr/bin/env bash

TARGET=$1
BUILDDIR=build
SRCDIR=src
TARGET_PREFIX=$BUILDDIR/$SRCDIR
BINARY=$TARGET_PREFIX/$TARGET

cmake -B $BUILDDIR
cmake --build $BUILDDIR
echo "Running $BINARY ..."

echo
echo

$BINARY

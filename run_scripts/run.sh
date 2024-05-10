#!/usr/bin/env bash

TARGET=$1
BUILDDIR=build
SRCDIR=src
TARGET_PREFIX=$BUILDDIR/$SRCDIR

cmake -B $BUILDDIR
cmake --build $BUILDDIR

echo
echo

$TARGET_PREFIX/$TARGET

#!/usr/bin/env bash

TODAY=2024-06-07

LECTURE_BASEDIR=lecture
SCRIPT_DIR=run_scripts
TARGET_NAME=$1

TARGET=$LECTURE_BASEDIR/$TODAY/$TARGET_NAME

$SCRIPT_DIR/run.sh $TARGET

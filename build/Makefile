#!/bin/bash

PROGRAM_PATH_C=../src/primebreaker.c
PROGRAM_PATH_RS=../src/primebreaker.rs
PROGRAM_OUTPUT=c_primebreaker
PROGRAM_OUTPUT_RS=rust_primebreaker
FLAGS=-Wall -Werror -Wunused-function -Wunused-parameter -Wunused-variable
LIBS=-lm

c_build:
	gcc -o $(PROGRAM_OUTPUT) $(PROGRAM_PATH_C) $(FLAGS) $(LIBS)
rust_build:
	rustc $(PROGRAM_PATH_RS) -o $(PROGRAM_OUTPUT_RS)
remove:
	rm $(PROGRAM_OUTPUT)

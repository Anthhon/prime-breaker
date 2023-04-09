#!/bin/bash

PROGRAM_PATH=../src/primebreaker.c
PROGRAM_OUTPUT=primebreakerc
FLAGS=-Wall -Werror -Wunused-function -Wunused-parameter -Wunused-variable
LIBS=-lm

build:
	gcc -o $(PROGRAM_OUTPUT) $(PROGRAM_PATH) $(FLAGS) $(LIBS)
remove:
	rm $(PROGRAM_OUTPUT)

# C Compiler to use
CC = gcc
# Parameter to pass in compile sentence
CFLAGS = -std=c99 -Wall -I$(INC)
# Define macros, used as variables
BIN = bin
INC = include
LIB = lib
OBJ = obj
SRC = src

all: clean build run_all

build: clean
	gcc $(CFLAGS) -c -o obj/policies.o src/sched-policies.c
	gcc $(CFLAGS) -c -o obj/simulator.o src/sched-simulator.c
	gcc $(CFLAGS) -o bin/sched-simulator obj/simulator.o obj/policies.o

run_all:
	bin/sched-simulator "tasks" 1>sched-run.txt
	cat sched-run.txt

clean:
	rm -f ${OBJ}/* ${BIN}/* ${LIB}/*

#Makefile for HW 4

.DEFAULT_GOLA := main

COMPILER=g++
FLAGS=-std=c++11
FILES=realImage.cpp proxyImage.cpp 

main: main.cpp  $(FILES)
	$(COMPILER) $^ $(FLAGS) -o $@ 
CC = g++

all: raylib


raylib: raylib.o
	g++ raylib.o -o raylib.exe -I include/ -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm

raylib.o: raylib.cpp
	g++ -c raylib.cpp -I include/
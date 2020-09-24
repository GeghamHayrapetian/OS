CPP11=-std=c++11
OUT=-o
OBJ=-c
COMPILER=g++
all: main.o Complex.o
	$(COMPILER) $(CPP11) main.o Complex.o $(OUT) Hello 
main.o: main.cpp
	$(COMPILER) $(CPP11) main.cpp $(OBJ) $(OUT) main.o
Complex.o: Complex.cpp Complex.h
	$(COMPILER) Complex.cpp $(OBJ) $(OUT) Complex.o 
clean: 
	rm *.o Hello	



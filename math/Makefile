CXX=      g++
CXXFLAGS= -g -Wall -Werror -Wpedantic -std=c++11

test: test.o 
	$(CXX) $(CXXFLAGS) -o test test.o

test.o: test.cpp prime.h

.PHONY: clean
clean:
	rm -rf *.o a.out test



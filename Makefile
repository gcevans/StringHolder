CXX = g++
LD = g++
LDFLAGS = -std=c++1y
CXXFLAGS = -std=c++1y -Wall -Wextra -Werror -pedantic 
RM = rm

TESTS = tests

all : stringholder

clean:
	$(RM) -rf $(TARGETS) $(TESTS) *.o

tests : tests.o stringholder.o
	$(LD) $(LDFLAGS) -o tests tests.o stringholder.o

tests.o : tests.cpp catch.hpp stringholder.h
	$(CXX) -c $(CXXFLAGS) -o tests.o tests.cpp

stringholder : stringholder.o main.o
	$(LD) $(LDFLAGS) -o stringholder stringholder.o main.o

stringholder.o : stringholder.cpp stringholder.h
	$(CXX) -c $(CXXFLAGS) $(TESTFLAGS) stringholder.cpp -o stringholder.o

main.o : main.cpp stringholder.h
	$(CXX) -c $(CXXFLAGS) -o main.o main.cpp

.PHONY: clean

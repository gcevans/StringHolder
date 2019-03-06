CXX = g++
LD = g++
LDFLAGS = -std=c++1y
CXXFLAGS = -std=c++1y -Wall -Wextra -Werror -pedantic 
RM = rm

TESTS = tests

all : stringholder

clean:
	$(RM) -rf $(TARGETS) $(TESTS) *.o

stringholder : stringholder.o main.o
	$(LD) $(LDFLAGS) -o stringholder stringholder.o main.o

stringholder.o : stringholder.cpp stringholder.h
	$(CXX) -c $(CXXFLAGS) $(TESTFLAGS) stringholder.cpp -o stringholder.o

main.o : main.cpp stringholder.h
	$(CXX) -c $(CXXFLAGS) -o main.o main.cpp

.PHONY: clean

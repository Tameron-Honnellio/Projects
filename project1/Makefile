CC = g++
CFLAGS = -g --std=c++14 -Wall -Werror -pedantic
DEPS = WordFrequency.hpp
LIB = -lboost_unit_test_framework -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

all: lint test FrequencyList

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $^

test: test.o WordFrequency.o
	$(CC) $(CFLAGS) -o $@ $^ $(LIB)

FrequencyList: FrequencyList.cpp WordFrequency.o $(DEPS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIB)

lint:
	cpplint --filter=-runtime/references,-build/include_subdir,-build/c++11 --root=. *.cpp *.hpp

clean:
	rm *.o *.gch test FrequencyList

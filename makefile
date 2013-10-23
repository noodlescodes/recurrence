SOURCES=recurrence.cpp
EXECUTABLE=recurrence
CC=g++
CFLAGS=-c -Wall
LDFLAGS=
OBJECTS=$(SOURCES:.cpp=.o)

all:$(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o core
	rm -rf *~

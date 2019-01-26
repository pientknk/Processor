CPP = g++
CFLAGS = -g -Wall -pedantic -std=c++11

main: main.o process.o
	$(CPP) $(CFLAGS) -o $@ $^
main.o process.o: process.h

%.o: %.cpp Makefile
	$(CPP) $(CFLAGS) -c -o $@ $<

%.o: %.cpp %.h Makfile
	$(CPP) $(CFLAGS) -c -o $@ $<

debug: CFLAGS += -DDEBUG
debug: main	
	
clean:
	rm -f *.o main
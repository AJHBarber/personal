ALL = rand
INCLUDEDIR = ../headers
CXXFLAGS = -std=c++11 -I $(INCLUDEDIR) -Wall -Wfatal-errors

vpath %.h $(INCLUDEDIR)

all: $(ALL)

rand: dieRoll.cpp
	g++ $(CXXFLAGS) dieRoll.cpp -o rand

clean:
	rm -f $(ALL)

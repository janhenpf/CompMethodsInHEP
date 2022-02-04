# source files:
sources = $(basename $(wildcard *.cpp))

all:
		$(MAKE) g++

g++:
		g++ $(sources)

# unfortunately did not work
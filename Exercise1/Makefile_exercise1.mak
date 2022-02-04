# source files:
sources = $(basename $(wildcard *.tex))

all:
        $(MAKE) -i tex
        $(MAKE) mf
        $(MAKE) tex
        $(MAKE) dvips

tex:
        latex $(sources)

# metafont:
mf:
        mf "\mode=localfont; input diagram.mf;" # "diagram" name of the graph

# convert the DVI output into a presentable form:
dvips:
        dvips $(sources) -o
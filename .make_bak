CC     = g++
STANDARD_FLAGS = -std=c++11\
	 -pedantic-errors\
	 -Wall\
	 -Wextra\
	 -Werror\
	 -Wconversion
DEBUG_FLAGS = -g3
OPT_FLAGS = -O0
NO_LINKER_FLAGS = -c
CCFLAGS = $(OPT_FLAGS) $(DEBUG_FLAGS) $(NO_LINKER_FLAGS) $(STANDARD_FLAGS)

ROOT = $(CURDIR)
INCLUDES = -I$(ROOT)/src -I$(ROOT)/api

SRCS = ./src/Card.cc\
       ./src/Deck.cc

OBJS = ./build/Card.o\
       ./build/Deck.o

VPATH = src
BUILDDIR = build

LIBS = 
MAIN = libStandardDeck.a

all:	$(MAIN)
	@echo $(MAIN) has been compiled!

$(MAIN): $(OBJS)
	ar -r $(MAIN) $(OBJS) $(LIBS)

$(BUILDDIR)/%.o: %.cc
	mkdir -p $(@D)
	$(CC) $(CCFLAGS) $(INCLUDES) -c $< -o $@

depend: $(SRCS)
	makedepend $(INCLUDES) $^

clean:
	rm -r build *.a

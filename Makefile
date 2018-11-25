CC = g++
CFLAGS = -fPIC -Wall
LIB_NAME = Deck
CFLAGS = -Iinclude -fPIC
LFLAGS = -Llib -l$(LIB_NAME) -Wl,-rpath,\$$ORIGIN/../lib

EXE_SRC_FILES = $(wildcard *.cc)
EXECUTABLES = $(patsubst %.cc,bin/%,$(EXE_SRC_FILES))
SRC_FILES = $(wildcard src/*.cc)
O_FILES = $(patsubst %.cc,build/%.o,$(SRC_FILES))

all: $(EXECUTABLES) lib/lib$(LIB_NAME).so

bin/%: build/%.o | lib/lib$(LIB_NAME).so
	mkdir -p $(@D)
	g++ $< $(LFLAGS) -o $@

lib/lib$(LIB_NAME).so: $(O_FILES)
	mkdir -p $(@D)
	g++ $^ -shared -Wl,-soname,lib$(LIB_NAME).so -o $@

build/%.o: %.cc
	mkdir -p $(@D)
	g++ -c $(CFLAGS) $< -o $@

clean:
	rm -rf bin build lib

CFLAGS += -MMD
-include $(shell find build -name "*.d" 2> /dev/null)

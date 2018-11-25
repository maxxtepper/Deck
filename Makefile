CC = g++
CFLAGS = -Wall
LDFLAGS = 
OBJFILES = Card.o main.o 
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~

CC = g++
CFLAGS = -Wall 
LDFLAGS = 
OBJFILES = main.o
TARGET = Linked_list

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~
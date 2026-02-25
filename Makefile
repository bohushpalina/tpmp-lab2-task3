CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11
TARGET  = student

SRC     = src/main.c \
          src/student.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

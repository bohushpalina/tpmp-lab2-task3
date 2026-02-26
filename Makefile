CC	= gcc
CFLAGS	= -Wall -Wextra -std=c11 -Iinclude

BIN_DIR	= bin
OBJ_DIR	= obj

TARGET	= $(BIN_DIR)/student

SRC	= src/main.c src/student.c
OBJ	= $(OBJ_DIR)/main.o $(OBJ_DIR)/student.o

all: build_dirs $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(OBJ_DIR)/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

build_dirs:
	mkdir -p $(BIN_DIR) $(OBJ_DIR)

clean:
	rm -rf $(BIN_DIR) $(OBJ_DIR)

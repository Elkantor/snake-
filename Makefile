CC = gcc
SRC_DIR = ./src
INCLUDE_DIR = ./include
DEPS_DIR = ./deps
LIBS_DIR = ./libs
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj
CFLAGS = -I$(INCLUDE_DIR) -I$(DEPS_DIR) -L$(LIBS_DIR)
LIBS_FLAGS = -lglfw3 -lraylib -lopengl32 -lgdi32

OBJ = main.o

main: $(OBJ)
	$(CC) $(OBJ_DIR)/*.o $(CFLAGS) $(LIBS_FLAGS) -o $(BUILD_DIR)/main.exe 

main.o: $(SRC_DIR)/main.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/main.c -o $(OBJ_DIR)/main.o

pch: $(INCLUDE_DIR)/pch.h
	$(CC) -I$(INCLUDE_DIR) -I$(DEPS_DIR) $(INCLUDE_DIR)/pch.h

install:
	mkdir -p $(BUILD_DIR) && \
	mkdir -p $(OBJ_DIR) 

clean: 
	rm -rf $(BUILD_DIR)

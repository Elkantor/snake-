CC = gcc
SRC_DIR = ../src
TEST_SRC_DIR = ./src
INCLUDE_DIR = ../include
TEST_INCLUDE_DIR = ./include
DEPS_DIR = ../deps
LIBS_DIR = ../libs
BUILD_DIR = ../build
TEST_BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj
TEST_OBJ_DIR = $(TEST_BUILD_DIR)/obj
CFLAGS = -I$(INCLUDE_DIR) -I$(DEPS_DIR) -I$(TEST_INCLUDE_DIR) -L$(LIBS_DIR)
LIBS_FLAGS = -lglfw3 -lraylib -lopengl32 -lgdi32
CFLAGS += -W -Wall -DDEBUG 
OBJ = \
	$(TEST_OBJ_DIR)/main.o \
	$(OBJ_DIR)/menu.o \
	$(OBJ_DIR)/components_definition.o

main: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(LIBS_FLAGS) $(FLAG_CONF) -o $(TEST_BUILD_DIR)/main.exe 

$(TEST_OBJ_DIR)/main.o: $(TEST_SRC_DIR)/main.c
	$(CC) -c $(CFLAGS) $(TEST_SRC_DIR)/main.c -o $(TEST_OBJ_DIR)/main.o

$(OBJ_DIR)/menu.o: $(SRC_DIR)/snake+/components/menu.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/components/menu.c -o $(OBJ_DIR)/menu.o

$(OBJ_DIR)/components_definition.o: $(SRC_DIR)/snake+/components_definition.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/components_definition.c -o $(OBJ_DIR)/components_definition.o

pch: $(INCLUDE_DIR)/pch.h
	$(CC) -I$(INCLUDE_DIR) -I$(DEPS_DIR) $(INCLUDE_DIR)/pch.h

install:
	mkdir -p $(TEST_BUILD_DIR) && \
	mkdir -p $(TEST_OBJ_DIR) 

clean: 
	@rm -rf $(BUILD_DIR)

CC = gcc
SRC_DIR = ../src
TEST_SRC_DIR = ./src
INCLUDE_DIR = ../include
TEST_INCLUDE_DIR = ./include
DEPS_DIR = ../deps
LIBS_DIR = ../libs
TEST_LIBS_DIR = ./libs
BUILD_DIR = ../build
TEST_BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj
TEST_OBJ_DIR = $(TEST_BUILD_DIR)/obj
CFLAGS = -I$(INCLUDE_DIR) -I$(DEPS_DIR) -I$(TEST_INCLUDE_DIR) -L$(TEST_LIBS_DIR) -DTEST
LIBS_FLAGS = 
CFLAGS += -W -Wall -DDEBUG -lgcc -std=c99
OBJ = \
	$(TEST_OBJ_DIR)/main.o \
	$(OBJ_DIR)/menu.o \
	$(OBJ_DIR)/inputs.o \
	$(OBJ_DIR)/global_alter.o \
	$(OBJ_DIR)/global_const.o \
	$(OBJ_DIR)/error.o \
	$(TEST_OBJ_DIR)/ptest.o \
	$(TEST_OBJ_DIR)/test_global_const.o

main: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(LIBS_FLAGS) $(FLAG_CONF) -o $(TEST_BUILD_DIR)/main 

$(TEST_OBJ_DIR)/main.o: $(TEST_SRC_DIR)/main.c
	$(CC) -c $(CFLAGS) $(TEST_SRC_DIR)/main.c -o $(TEST_OBJ_DIR)/main.o

$(OBJ_DIR)/error.o: $(SRC_DIR)/snake+/common/error.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/common/error.c -o $(OBJ_DIR)/error.o

$(OBJ_DIR)/menu.o: $(SRC_DIR)/snake+/components/menu.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/components/menu.c -o $(OBJ_DIR)/menu.o

$(OBJ_DIR)/inputs.o: $(SRC_DIR)/snake+/components/inputs.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/components/inputs.c -o $(OBJ_DIR)/inputs.o

$(OBJ_DIR)/global_alter.o: $(SRC_DIR)/snake+/global_alter.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/global_alter.c -o $(OBJ_DIR)/global_alter.o

$(OBJ_DIR)/global_const.o: $(SRC_DIR)/snake+/global_const.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/global_const.c -o $(OBJ_DIR)/global_const.o

$(TEST_OBJ_DIR)/ptest.o: $(TEST_SRC_DIR)/common/ptest.c
	$(CC) -c $(CFLAGS) $(TEST_SRC_DIR)/common/ptest.c -o $(TEST_OBJ_DIR)/ptest.o

$(TEST_OBJ_DIR)/test_global_const.o: $(TEST_SRC_DIR)/snake+/test_global_const.c
	$(CC) -c $(CFLAGS) $(TEST_SRC_DIR)/snake+/test_global_const.c -o $(TEST_OBJ_DIR)/test_global_const.o

pch: $(INCLUDE_DIR)/pch.h
	$(CC) -I$(INCLUDE_DIR) -I$(DEPS_DIR) $(INCLUDE_DIR)/pch.h

install:
	mkdir -p $(TEST_BUILD_DIR) && \
	mkdir -p $(BUILD_DIR) && \
	mkdir -p $(TEST_OBJ_DIR) \
	mkdir -p $(OBJ_DIR) 

clean: 
	@rm -rf $(TEST_BUILD_DIR) \
	@rm -rf $(BUILD_DIR)

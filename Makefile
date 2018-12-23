CC = gcc
SRC_DIR = ./src
INCLUDE_DIR = ./include
DEPS_DIR = ./deps
LIBS_DIR = ./libs
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj
CFLAGS = -I$(INCLUDE_DIR) -I$(DEPS_DIR)
LIBS_FLAGS = -L$(LIBS_DIR) -lglfw3 -lraylib -lopengl32 -lgdi32

ifeq ($(CONFIG), DEBUG)
	CFLAGS += -W -Wall -DDEBUG
else
	CFLAGS += -W -O3 -DNDEBUG
endif

OBJ = \
	main.o \
	menu.o \
	inputs.o \
	global_alter.o \
	global_const.o \
	error.o


main: $(OBJ)
	$(CC) $(OBJ_DIR)/*.o $(CFLAGS) $(LIBS_FLAGS) $(FLAG_CONF) -o $(BUILD_DIR)/main.exe 

main.o: $(SRC_DIR)/main.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/main.c -o $(OBJ_DIR)/main.o

error.o: $(SRC_DIR)/snake+/common/error.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/common/error.c -o $(OBJ_DIR)/error.o

menu.o: $(SRC_DIR)/snake+/components/menu.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/components/menu.c -o $(OBJ_DIR)/menu.o

inputs.o: $(SRC_DIR)/snake+/components/inputs.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/components/inputs.c -o $(OBJ_DIR)/inputs.o

global_alter.o: $(SRC_DIR)/snake+/global_alter.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/global_alter.c -o $(OBJ_DIR)/global_alter.o

global_const.o: $(SRC_DIR)/snake+/global_const.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/snake+/global_const.c -o $(OBJ_DIR)/global_const.o

pch: $(INCLUDE_DIR)/pch.h
	$(CC) -I$(INCLUDE_DIR) -I$(DEPS_DIR) $(INCLUDE_DIR)/pch.h

install:
	mkdir -p $(BUILD_DIR) && \
	mkdir -p $(OBJ_DIR) 

clean: 
	@rm -rf $(BUILD_DIR)

# Makefile for C projects

TARGET			= tetris

BIN_DIR			= bin/
SRC_DIR			= src/
SRCS			= $(wildcard $(SRC_DIR)*.c)
HEADERS			= $(wildcard $(SRC_DIR)*.h)

GCC 			= gcc
GCCOPTS			= -Wall -ansi -std=c99

RM				= rm -rf
MKDIR			= mkdir -p

OBJ 			= $(patsubst $(SRC_DIR)%.c,$(BIN_DIR)%.o,$(SRCS))

all:			$(TARGET)

# compile sources (.c) to objects (.o)
$(BIN_DIR)%.o:	$(SRC_DIR)%.c $(HEADERS)
				@$(MKDIR) $(@D)
				@$(GCC) $(GCCOPTS) -o $@ -c $<

# link executable
$(TARGET):		$(OBJ)
				@$(GCC) $(GCCOPTS) -o $@ $^
				@echo "[INFO]: build successful: '$(TARGET)'"

# remove objects and executable
clean:			
				@$(RM) $(TARGET)
				@$(RM) $(BIN_DIR)
				@echo "[INFO]: clean successful"
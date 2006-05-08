OUTPUT_DIR = .
TMP_DIR = ./tmp

OUTPUT_BINARY = $(OUTPUT_DIR)/Prahist

CC=gcc
GCC=g++
C_FLAGS= -D_LINUX -ggdb3 -I../Hoe/Hoe3D/include -I../Hoe/HoeGame
LINK=g++
L_FLAGS= -L/usr/X11R6/lib -L../Hoe/bin
LINK_LIBRARIES = -ll -lHoeGame -llua -llualib -ldl -lX11 -lfl

OBJ_FILES = $(TMP_DIR)/main.o $(TMP_DIR)/app.o


all:	BUILD

$(TMP_DIR):
	mkdir -p $(TMP_DIR)

$(OUTPUT_DIR):
	mkdir -p $(OUTPUT_DIR)

BUILD:		$(TMP_DIR) $(OUTPUT_DIR) $(OBJ_FILES) 
	$(LINK) $(L_FLAGS) -o $(OUTPUT_BINARY) $(OBJ_FILES) $(LINK_LIBRARIES)

clean:
	rm -f $(OBJ_FILES) $(OUTPUT_BINARY)

#
# Generic rules to build object files
#

$(TMP_DIR)/%.o:		src/%.cpp
	$(GCC) $(C_FLAGS) -c $< -o $@

$(TMP_DIR)/%.o:		src/%.c
	$(CC) $(C_FLAGS) -c $< -o $@




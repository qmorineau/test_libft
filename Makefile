CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_LIB) -I $(INC_DIR)
LDFLAGS = -L.. -lft  # Link with libft.a in the parent directory

# Directories
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = includes
INC_LIB = ../.

# Source and Object files
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Executable name
EXEC = test_program

# Main target
all: $(EXEC)

# Compile source files to object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled: $<"

# Link object files with the static library to create the executable
$(EXEC): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $(EXEC)
	@echo "Executable $(EXEC) created."

# Clean up object files and the executable
clean:
	@rm -rf $(OBJ_DIR)
	@echo "Cleaned object files and executable."

fclean: clean
	@rm -f $(EXEC)
	@echo "Removed executable."

re: fclean all

.PHONY: all clean fclean re


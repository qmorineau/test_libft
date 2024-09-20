CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_LIB) -I $(INC_DIR)
LDFLAGS = -L.. -lft  # Link with libft.a in the parent directory

# Directories
PART1_DIR = test/Part\ 1
PART2_DIR = test/Part\ 2
BONUS_DIR = test/Part\ Bonus
OBJ_DIR = obj
INC_DIR = includes
INC_LIB = ../.

# Source and Object files
PART1_SRC = $(wildcard $(PART1_DIR)/*.c)
PART2_SRC = $(wildcard $(PART2_DIR)/*.c)
BONUS_SRC = $(wildcard $(BONUS_DIR)/*.c)
PART1_OBJ = $(PART1_SRC:$(PART1_DIR)/%.c=$(OBJ_DIR)/%.o)
PART2_OBJ = $(PART2_SRC:$(PART2_DIR)/%.c=$(OBJ_DIR)/%.o)
BONUS_OBJ = $(BONUS_SRC:$(BONUS_DIR)/%.c=$(OBJ_DIR)/%.o)

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

 #cc main.c ./test/Part\ 1/test_atoi.c -I includes -I../libft -L../libft -lft
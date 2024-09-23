CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_LIB) -I $(INC_DIR)
LDFLAGS = -L $(INC_LIB) -lft  # Link with libft.a in the parent directory

# Directories
SRC_DIR = test/mandatory
BONUS_DIR = test/bonus
OBJ_DIR = obj
INC_DIR = includes
INC_LIB = ../libft

# Source and Object files
MAIN = ./main.c
SRC = $(wildcard $(SRC_DIR)/*.c)
BONUS_SRC = $(wildcard $(BONUS_DIR)/*.c)
SRC_OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
BONUS_OBJ = $(BONUS_SRC:$(BONUS_DIR)/%.c=$(OBJ_DIR)/%.o)

# Executable name
EXEC = test_program

# Main target
all: $(EXEC) start

# Compile source files to object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

# Link object files with the static library to create the executable
$(EXEC): $(SRC_OBJ)
	@$(CC) $(SRC_OBJ) $(MAIN) $(CFLAGS) $(LDFLAGS) -o $(EXEC)
	@echo "Executable $(EXEC) created."

# Clean up object files and the executable
clean:
	@rm -rf $(OBJ_DIR)
	@echo "Cleaned object files and executable."

fclean: clean
	@rm -f $(EXEC)
	@echo "Removed executable."

re: fclean all

bonus:	$(SRC_OBJ)	$(BONUS_SRC) start
	@$(CC) $(SRC_OBJ) $(BONUS_SRC) $(MAIN) $(CFLAGS) $(LDFLAGS) -o $(EXEC)
	@echo "Executable $(EXEC) created."

start:
	@./$(EXEC)

.PHONY: all clean fclean re bonus start
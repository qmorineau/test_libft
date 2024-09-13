#!/bin/sh

SRC="main.c"
LIBFT="../../../libft/libft.a"
OUT="program"

# Function to compile and run the program with a given set of arguments
compile_and_run() {
    local num_args=$1
    shift  # Shift to access the arguments
    local output_file="${OUT}"

    # Compile the program
    gcc -Wall -Wextra -Werror -o "${output_file}" "${SRC}" "${LIBFT}"

    # Run the compiled program with the specified number of arguments
    if [ $num_args -gt 0 ]; then
        ./"${output_file}" "$@"  # Run with the arguments
    else
        ./"${output_file}"  # Run with no arguments
    fi
}

# Run tests for different numbers of arguments
compile_and_run 1 1


# Optionally, clean up compiled files if desired
# rm -f ${OUT}  # Uncomment if you want to remove the compiled file after running

rm -rf program

diff test01.expected test01.output

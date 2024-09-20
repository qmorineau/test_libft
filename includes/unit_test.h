#ifndef UNIT_TEST_H
# define UNIT_TEST_H
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <signal.h>
# include <setjmp.h>
# include <stdbool.h>
int run_test(int (*test_func)(), const char *test_name, int seg);
void run_memset_tests(void);
# define PRINT_OK() printf("\033[0;32m[OK]\033[0m")
# define PRINT_FAIL() printf("\033[0;31m[KO]\033[0m")
# define PRINT_SEG() printf("\033[0;33m[SEGV]\033[0m")
# define NEWL() printf("\n")
int test_isalnum(void);
#endif
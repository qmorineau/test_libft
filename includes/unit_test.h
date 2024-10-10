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
# include <fcntl.h>
# include "libft.h"
int run_test(int (*test_func)(), const char *test_name, int seg);
void run_memset_tests(void);
# define PRINT_OK() printf(" \033[0;32m[OK]\033[0m")
# define PRINT_FAIL() printf(" \033[0;31m[KO]\033[0m")
# define PRINT_SEG() printf(" \033[0;33m[SEGV]\033[0m")
# define NEWL() printf("\n")
# define PRINT_PROBLEM() printf(" \033[0;31m[TEST PROBLEM]\033[0m")

int	test_isalpha(void);
int	test_isdigit(void);
int	test_isalnum(void);
int	test_isascii(void);
int	test_isprint(void);
int	test_strlen(void);
int	test_memset(void);
int	test_bzero(void);
int	test_memcpy(void);
int	test_memmove(void);
int	test_strlcpy(void);
int	test_strlcat(void);
int	test_toupper(void);
int	test_tolower(void);
int	test_strchr(void);
int	test_strrchr(void);
int	test_strncmp(void);
int	test_memchr(void);
int	test_memcmp(void);
int	test_strnstr(void);
int	test_atoi(void);
int	test_calloc(void);
int	test_strdup(void);
int	test_substr(void);
int	test_strjoin(void);
int	test_strtrim(void);
int	test_split(void);
int	test_itoa(void);
int	test_strmapi(void);
int	test_striteri(void);
int	test_putchar_fd(void);
int	test_putstr_fd(void);
int	test_putendl_fd(void);
int	test_putnbr_fd(void);
#endif
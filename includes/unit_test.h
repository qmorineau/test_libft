#ifndef UNIT_TEST_H
# define UNIT_TEST_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
// Tests
void test_isalpha(void);
void test_isalnum(void);
void test_isascii(void);
void test_isdigit(void);
void test_isprint(void);
void test_tolower(void);
void test_toupper(void);
void test_strlen(void);

// Asserts
int assert_int(int condition);
void print_error_int(int expected, int result, const char *test_name);
void print_ok(void);
void print_ko(void);

#endif
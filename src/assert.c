#include "unit_test.h"

int assert_int(int condition)
{
    if (!condition) {
        return (0);
    }
    return (1);
}

void print_error_int(int expected, int result, const char *test_name)
{
    printf("\033[1;31m");
    printf("[FAIL] %s (result: %d, expected: %d)\n", test_name, result, expected);
    printf("\033[0m");
}

void print_ok(void)
{
    printf("\033[1;32m");
    printf(" [OK]");
    printf("\033[0m");
}

void print_ko(void)
{
    printf("\033[1;31m");
    printf(" [KO]");
    printf("\033[0m");
}
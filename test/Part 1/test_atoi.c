#include "unit_test.h"

void test_atoi(void) {
    int expected_result_1 = 42;
    int expected_result_2 = -42;
    int expected_result_3 = 123;
    int expected_result_4 = 0;
    int expected_result_5 = 2147483647;
    int expected_result_6 = -2147483648;

    TestCase tests[] = {
        { (void *)atoi, "42", &expected_result_1, INT },
        { (void *)atoi, "-42", &expected_result_2, INT },
        { (void *)atoi, "   123", &expected_result_3, INT },
        { (void *)atoi, "0", &expected_result_4, INT },
        { (void *)atoi, "2147483647", &expected_result_5, INT },
        { (void *)atoi, "-2147483648", &expected_result_6, INT },
        { (void *)atoi, "+-42", &expected_result_4, INT },
        { (void *)atoi, "abc", &expected_result_4, INT },
        { (void *)atoi, NULL, &expected_result_4, INT }  // Segmentation fault case
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); i++) {
        run_test(&tests[i]);
    }
}

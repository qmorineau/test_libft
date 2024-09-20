#include "unit_test.h"
#include "libft.h"

int test_memset_basic() {
    char buffer[20] = {0}; // Initialize buffer to zero
    ft_memset(buffer, 'A', 10);

    // Check that the first 10 bytes are 'A'
    for (int i = 0; i < 10; i++) {
        if (buffer[i] != 'A') {
            printf("Buffer not set correctly at index %d\n", i);
            return 1; // Indicate failure
        }
    }

    // Check that the remaining bytes are still zero
    for (int i = 10; i < 20; i++) {
        if (buffer[i] != 0) {
            printf("Buffer modified at index %d, expected 0\n", i);
            return 1; // Indicate failure
        }
    }

    return 0; // Success
}

int test_memset_null() {
    char *null_ptr = NULL;
    ft_memset(null_ptr, 'A', 10); // This should trigger a segfault
    return 0; // We expect this to segfault
}

int test_memset_edge_case() {
    char buffer[20];
    ft_memset(buffer, 'B', 0);
    return 0;
}

void run_memset_tests() {
    run_test(test_memset_basic, "test_memset_basic", 0);
    run_test(test_memset_null, "test_memset_null", 1);
    run_test(test_memset_edge_case, "test_memset_edge_case", 0);
}

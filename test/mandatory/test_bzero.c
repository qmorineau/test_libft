#include "unit_test.h"

int	test_iszero(const void *memory, size_t size)
{
	unsigned char *mem = (unsigned char *)memory;
    for (size_t i = 0; i < size; i++) {
        if (mem[i] != 0) {
			PRINT_FAIL();
            return 0;
        }
    }
	PRINT_OK();
    return 1;
}

int	test_bzero(void)
{
	char	test1[10];
	char	test2[20];
	char	test3[30];

	printf("ft_bzero :");
	memset(test1, 100, sizeof(test1));
	memset(test2, 200, sizeof(test2));
	memset(test3, 250, sizeof(test3));
	ft_bzero(test1, sizeof(test1));
	ft_bzero(test2, sizeof(test2));
	ft_bzero(test3, sizeof(test3));
	test_iszero(test1, sizeof(test1));
	test_iszero(test2, sizeof(test2));
	test_iszero(test3, sizeof(test3));
	NEWL();
	return (1);
}

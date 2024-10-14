#include "unit_test.h"

static int test_atoi_return (char *input, int output)
{
	if (ft_atoi(input) == output)
	{
		PRINT_OK();
		return (0);
	}
	PRINT_FAIL();
	return (1);
}

int test_atoi(void) {
	printf("ft_atoi :");

	test_atoi_return("42", 42);
	test_atoi_return("-42", -42);
	test_atoi_return("123", 123);
	test_atoi_return("0", 0);
	test_atoi_return("2147483647", 2147483647);
	test_atoi_return("-2147483648", -2147483648);
	test_atoi_return("+-42", 0);
	test_atoi_return("abc", 0);
	//printf("%d\n", ft_atoi("2147483648125681"));
	//test_atoi_return(NULL, 0); // Segfault test case
	NEWL();
	return (1);
}
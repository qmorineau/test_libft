#include "unit_test.h"

int assert_itoa (int input, char* output)
{
	char *s;

	s = ft_itoa(input);
	if (strcmp(s, output))
	{
		free(s);
		PRINT_FAIL();
		return (0);
	}
	free(s);
	PRINT_OK();
	return (1);
}

int test_itoa (void)
{
	printf("ft_itoa :");
	assert_itoa(123456, "123456");
	assert_itoa(2147483647, "2147483647");
	assert_itoa(-2147483648, "-2147483648");
	assert_itoa(0, "0");
	NEWL();
	return (1);
}
#include "unit_test.h"

static int assert_substr(int start, int len, char *expected)
{
	char s[] = "abcdef012345";
	char *string;

	string = ft_substr(s, start, len);
	if (strcmp(string, expected) == 0)
	{
		free(string);
		PRINT_OK();
		return (0);
	}
	else
	{
		free(string);
		PRINT_FAIL();
		return (1);
	}
}

int	test_substr (void)
{
	printf("ft_substr :");
	assert_substr(0, 3, "abc");
	assert_substr(10, 5, "45");
	assert_substr(6, 10, "012345");
	assert_substr(0, 12, "abcdef012345");
	NEWL();
	return (1);
}
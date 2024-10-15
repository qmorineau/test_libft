#include "unit_test.h"

static int assert_strdup(char *string, char *expected)
{
	char *s;

	s = ft_strdup(string);
	if (strcmp(s, expected) == 0)
	{
		PRINT_OK();
		return (0);
	}
	else
	{
		PRINT_FAIL();
		return (1);
	}
}

int	test_strdup (void)
{
	printf("ft_strdup :");
	assert_strdup("abcefghijklmnopqrstuvwxyz012345789", "abcefghijklmnopqrstuvwxyz012345789");
	assert_strdup("", "");
	assert_strdup("\\0\0", "\\0\0");
	assert_strdup("\t\t\t\t\t\t\t\v\v\n\n", "\t\t\t\t\t\t\t\v\v\n\n");
	NEWL();
	return (1);
}
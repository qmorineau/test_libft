#include "unit_test.h"

static int assert_strjoin(char *s1, char *s2, char *expected)
{
	char *s;

	s = ft_strjoin(s1, s2);
	if (strcmp(s, expected) == 0)
	{
		free(s);
		PRINT_OK();
		return (0);
	}
	else
	{
		free(s);
		PRINT_FAIL();
		return (1);
	}
}

int	test_strjoin (void)
{
	printf("ft_strjoin :");
	assert_strjoin("abc", "012345", "abc012345");
	assert_strjoin("abcdef", "01234", "abcdef01234");
	assert_strjoin("", "0123456789", "0123456789");
	assert_strjoin("abcABC", "", "abcABC");
	assert_strjoin("", "", "");
	NEWL();
	return (1);
}
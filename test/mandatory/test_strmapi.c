#include "unit_test.h"

static char ft_toupper_test(unsigned int index, char c)
{
	if (index >= 0)
	{
		if (isalpha(c) != 0)
		{
			c -= 32;
			return (c);
		}
		else
		{
			return (c);
		}
	}
	return (c);
}

static int assert_strmapi(char *string, char *expected, char (*f)(unsigned int, char))
{
	char *s;

	s = ft_strmapi(string, f);
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

int	test_strmapi (void)
{
	printf("ft_strmapi :");
	assert_strmapi("abcdefgh", "ABCDEFGH", *ft_toupper_test);
	assert_strmapi("", "", *ft_toupper_test);
	assert_strmapi("abcde012345", "ABCDE012345", *ft_toupper_test);
	assert_strmapi("1234", "1234", *ft_toupper_test);
	NEWL();
	return (1);
}

#include "unit_test.h"

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
	assert_strmapi("abcdefgh", "ABCDEFGH", toupper);
	NEWL();
	return (1);
}

int	test_strmapi (void)
{
	printf("ft_strmapi :");
	NEWL();
	return (1);
}
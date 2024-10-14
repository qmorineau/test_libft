#include "unit_test.h"

static int assert_strnstr(char *charset, size_t len)
{
	char s[] = "abcdef012345";
	
	if (strcmp(ft_strnstr(s, charset, len), strnstr(s, charset, len)) == 0)
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

static int assert_strnstr_null(char *charset, size_t len)
{
	char s[] = "abcdef012345";
	
	if (ft_strnstr(s, charset, len) == NULL)
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


int	test_strnstr (void)
{
	printf("ft_strnstr :");
	assert_strnstr("a", 1);
	assert_strnstr("1", 12);
	assert_strnstr("5", 12);
	assert_strnstr("\0", 12);
	assert_strnstr_null("b", 1);
	assert_strnstr_null("a", 0);
	NEWL();
	return (1);
}
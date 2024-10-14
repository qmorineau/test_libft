#include "unit_test.h"

static int assert_strtrim(char *string, char *charset, char *expected)
{
	char *s;

	s = ft_strtrim(string, charset);
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

int	test_strtrim (void)
{
	printf("ft_strtrim :");
	assert_strtrim("ababababa", "a", "bababab");
	assert_strtrim("abcdefghij", "", "abcdefghij");
	assert_strtrim("abcabababaaabb", "ab", "c");
	assert_strtrim("1000000001", "0", "1000000001");
	assert_strtrim("", "abc", "");
	assert_strtrim("aaaaaaaaaaaaa", "a", "");
	NEWL();
	return (1);
}

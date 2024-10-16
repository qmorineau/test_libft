#include "unit_test.h"

int assert_memcmp(char *s1, char *s2, size_t len)
{
	if (memcmp(s1, s2, len) == ft_memcmp(s1, s2, len))
	{
		PRINT_OK();
		return (1);
	}
	else
	{
		PRINT_FAIL();
		return (0);
	}
}

int	test_memcmp (void)
{
	printf("ft_memcmp :");
	assert_memcmp("abcdefghijklmnopqrstuvwxy", "abcdefghijklmnopqrstuvwxy", 26);
	assert_memcmp("abcdefghijklmnopqrstuvwxy", "abcdefghijklmnopqrstuvwx", 26);
	assert_memcmp("abcdefghijklmnopqrstuvwxy", "abcdefghijklnopqrstuvwxy", 26);
	assert_memcmp("abcdefghijklmnopqrstuvwxy", "", 10);
	assert_memcmp("", "abcdefghijklmnopqrstuvwxy", 10);
	assert_memcmp("", "", 10);
	assert_memcmp("abcdefghijklmnopqrstuvwxy", "abcdefghijklmnopqrstuvwxy", 0);
	assert_memcmp("abcdefghijklmnopqrstuvwxy", "abcdefghijklmnopqrstuvwxy", 15);
	NEWL();
	return (1);
}
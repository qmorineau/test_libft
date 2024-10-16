#include "unit_test.h"

int	assert_memchr(int search, size_t len, int index_expected)
{
	int	tab[10] = {2147483647, -1, 465, 42, -6542313, 0, 119, 19, 1, 123456789};

	if (memchr(tab, search, len) == &tab[index_expected])
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

int	assert_memchr_null(int search, size_t len)
{
	int	tab[10] = {2147483647, -1, 465, 42, -6542313, 0, 119, 19, 1, 123456789};

	if (ft_memchr(tab, search, len) == NULL)
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

int	test_memchr (void)
{
	printf("ft_memchr :");
	assert_memchr(19, sizeof(int) * 9, 7);
	assert_memchr(19, sizeof(int) * 8, 7);
	assert_memchr_null(19, sizeof(int) * 7);
	assert_memchr(2147483647, sizeof(int) * 1, 0);
	assert_memchr(465, sizeof(int) * 8, 2);
	assert_memchr_null(19, sizeof(int) * 0);
	assert_memchr_null(123, sizeof(int) * 10);
	NEWL();
	return (1);
}
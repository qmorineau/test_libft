#include "unit_test.h"

void	assert_strncmp(int output, int expected)
{
	if (output == expected)
		PRINT_OK();
	else
		PRINT_FAIL();
}

int	test_strncmp (void)
{
	char s1[] = "0123456789";
	char s2[] = "01234567890";
	char s3[] = "abcABCabc";
	char s4[] = "abcABCabd";
	char s5[] = "";

	printf("ft_strncmp :");
	assert_strncmp(ft_strncmp(s1, s2, 10), strncmp(s1, s2, 10));
	assert_strncmp(ft_strncmp(s3, s4, 10), strncmp(s3, s4, 10));
	assert_strncmp(ft_strncmp(s5, s1, 10), strncmp(s5, s1, 10));
	assert_strncmp(ft_strncmp(s1, s2, 10), strncmp(s1, s2, 10));
	NEWL();
	return (1);
}
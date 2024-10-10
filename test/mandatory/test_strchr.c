#include "unit_test.h"

static void	assert_test_strchr(char *output, char *expected)
{
	if (*output == *expected)
		PRINT_OK();
	else
		PRINT_FAIL();
}
static void	assert_test_strchr_is_null(char *output)
{
	if (output == NULL)
		PRINT_OK();
	else
		PRINT_FAIL();
}
int	test_strchr (void)
{
	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "0123456789";

	printf("ft_strchr :");
	assert_test_strchr(ft_strchr(s1, 'g'), strchr(s1, 'g'));
	assert_test_strchr(ft_strchr(s1, 'z'), strchr(s1, 'z'));
	assert_test_strchr(ft_strchr(s2, '0'), strchr(s2, '0'));
	assert_test_strchr(ft_strchr(s2, '7'), strchr(s2, '7'));
	assert_test_strchr_is_null(ft_strchr(s1, '0'));
	assert_test_strchr_is_null(ft_strchr(s2, 'a'));
	NEWL();
	return (1);
}

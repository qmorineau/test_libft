#include "unit_test.h"

static void	assert_test_strrchr(char *output, char *expected)
{
	if (*output == *expected)
		PRINT_OK();
	else
		PRINT_FAIL();
}
static void	assert_test_strrchr_is_null(char *output)
{
	if (output == NULL)
		PRINT_OK();
	else
		PRINT_FAIL();
}
int	test_strrchr (void)
{
	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "0123456789";

	printf("ft_strrchr :");
	assert_test_strrchr(ft_strrchr(s1, 'g'), strrchr(s1, 'g'));
	assert_test_strrchr(ft_strrchr(s1, 'z'), strrchr(s1, 'z'));
	assert_test_strrchr(ft_strrchr(s2, '0'), strrchr(s2, '0'));
	assert_test_strrchr(ft_strrchr(s2, '7'), strrchr(s2, '7'));
	assert_test_strrchr_is_null(ft_strchr(s1, '0'));
	assert_test_strrchr_is_null(ft_strchr(s2, 'a'));
	NEWL();
	return (1);
}

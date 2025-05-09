#include "unit_test.h"

static char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	little_len = 0;
	while (little[little_len])
		little_len++;
	if (little_len == 0)
		return ((char *) big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && len > i + j)
		{
			j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}

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
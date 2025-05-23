#include "unit_test.h"

static size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	src_len = ft_strlen((char *) src);
	if (size == dst_len)
		return (dst_len + src_len);
	i = 0;
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

static int assert_strlcat(char *cat, char *expected, size_t len)
{
	char s1[20] = "0123456789";
	char s2[20] = "0123456789";
	size_t s1_len;
	size_t s2_len;

	s1_len = strlcat(s1, cat, len);
	s2_len = ft_strlcat(s2, cat, len);
	if (s1_len == s2_len && strcmp(expected, s2) == 0)
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

static int assert_strlcat_empty(char *cat, char *expected, size_t len)
{
	char s1[20] = "";
	char s2[20] = "";
	size_t s1_len;
	size_t s2_len;

	s1_len = strlcat(s1, cat, len);
	s2_len = ft_strlcat(s2, cat, len);
	if (s1_len == s2_len && strcmp(expected, s2) == 0)
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

int	test_strlcat (void)
{
	printf("ft_strlcat :");
	assert_strlcat("abc", "0123456789a", 12);
	assert_strlcat("abcdef", "0123456789abcdef", 20);
	assert_strlcat("", "0123456789", 15);
	assert_strlcat("\0", "0123456789", 15);
	assert_strlcat("abc", "0123456789", 1);
	assert_strlcat_empty("abcde", "abcde", 6);
	assert_strlcat_empty("", "", 5);
	assert_strlcat_empty("a", "", 1);
	NEWL();
	return (1);
}
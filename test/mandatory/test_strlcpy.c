#include "unit_test.h"

static size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen((char *) src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *) src));
}

void	assert_strlcpy(int size)
{
	char s1[] = "abcdefghij";
	char s2[] = "0123456789";
	char s3[11];
	char s4[11];

	strcpy(s3, s1);
	strcpy(s4, s2);
	if (strlcpy(s1, s2, size) == ft_strlcpy(s3, s4, size) && memcmp(s1, s3, sizeof(s1)) == 0)
		PRINT_OK();
	else
		PRINT_FAIL();
}

int	test_strlcpy (void)
{
	printf("ft_strlcpy :");
	assert_strlcpy(10);
	/* assert_strlcpy(15); */
	assert_strlcpy(2);
	assert_strlcpy(1);
	assert_strlcpy(0);
	assert_strlcpy(11);
	NEWL();
	return (1);
}
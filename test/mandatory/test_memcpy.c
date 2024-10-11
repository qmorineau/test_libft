#include "unit_test.h"

void	assert_memcpy(int index, int size)
{
	char s1[] = "abcdefghij";
	char s2[] = "0123456789";
	char s3[11];
	char s4[11];

	strcpy(s3, s1);
	strcpy(s4, s2);
	memcpy(s1, &s2[index], size);
	ft_memcpy(s3, &s4[index], size);
	if (strcmp(s1, s3) == 0)
		PRINT_OK();
	else
		PRINT_FAIL();
}

int	test_memcpy (void)
{
	printf("ft_memcpy :");
	assert_memcpy(0, 10);
	assert_memcpy(5, 5);
	assert_memcpy(4, 0);
	assert_memcpy(1, 1);
	assert_memcpy(6, 3);
	NEWL();
	return (1);
}
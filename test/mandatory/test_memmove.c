#include "unit_test.h"

static void	assert_memmove(int index, int size)
{
	char s1[] = "abcdefghij";
	char s2[] = "0123456789";
	char s3[11];
	char s4[11];

	strcpy(s3, s1);
	strcpy(s4, s2);
	memmove(s1, &s2[index], size);
	ft_memmove(s3, &s4[index], size);
	if (strcmp(s1, s3) == 0)
		PRINT_OK();
	else
		PRINT_FAIL();
}

static void assert_memmove_overlap(int dst, int src, int size)
{
	char s1[] = "abcdefghijklmnopqrstuvwxyz0123456789";
	char s2[] = "abcdefghijklmnopqrstuvwxyz0123456789";

	memmove(&s1[dst], &s1[src], size);
	ft_memmove(&s2[dst], &s2[src], size);
	printf("%s = %s\n", s1, s2);
	if (strcmp(s1, s2) == 0)
		PRINT_OK();
	else
		PRINT_FAIL();
}

int	test_memmove (void)
{
	printf("ft_memmove :");
	assert_memmove(0, 10);
	assert_memmove(5, 5);
	assert_memmove(4, 0);
	assert_memmove(1, 1);
	assert_memmove(6, 3);
	assert_memmove_overlap(1, 0, 10);
	assert_memmove_overlap(27, 25, 8);
	NEWL();
	return (1);
}
#include "unit_test.h"

void	assert_strlen(char *string)
{
	if (strlen(string) == ft_strlen(string))
		PRINT_OK();
	else
		PRINT_FAIL();
}

int	test_strlen (void)
{
	printf("ft_strlen :");
	assert_strlen("Hello World");
	assert_strlen("");
	assert_strlen("\n\t\v\r\t\v\\0");
	assert_strlen("		      ");
	NEWL();
	return (1);
}
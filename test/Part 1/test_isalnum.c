#include "unit_test.h"
#include "libft.h"

int test_isalnum(void)
{
	int i;

	printf("ft_isalnum : ");
	i = -1;

	while (i < 256)
	{
		if ((bool)ft_isalnum(i) != (bool)isalnum(i))
		{
			printf("ft_isalnum : %d, expected %d, i = %d\n", ft_isalnum(i), isalnum(i), i);
			PRINT_FAIL();
			NEWL();
			return (1);
		}
		i++;
	}
	PRINT_OK();
	NEWL();
	return (0);
}
#include "unit_test.h"

int test_isdigit(void)
{
	int i;

	printf("ft_isdigit :");
	i = -1;

	while (i < 530)
	{
		if ((bool)ft_isdigit(i) != (bool)isdigit(i))
		{
			printf("ft_isdigit : %d, expected %d, i = %d\n", ft_isdigit(i), isdigit(i), i);
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
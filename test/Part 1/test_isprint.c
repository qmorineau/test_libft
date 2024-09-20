#include "unit_test.h"
#include "libft.h"

int test_isprint(void)
{
	int i;

	printf("ft_isprint : ");
	i = -1;

	while (i < 530)
	{
		if ((bool)ft_isprint(i) != (bool)isprint(i))
		{
			printf("ft_isprint : %d, expected %d, i = %d\n", ft_isprint(i), isprint(i), i);
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
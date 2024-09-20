#include "unit_test.h"
#include "libft.h"

int test_isascii(void)
{
	int i;

	printf("ft_isascii : ");
	i = -1;

	while (i < 530)
	{
		if ((bool)ft_isascii(i) != (bool)isascii(i))
		{
			PRINT_FAIL();
			NEWL();
			printf("ft_isascii : %d, expected %d, i = %d\n", ft_isascii(i), isascii(i), i);
			return (1);
		}
		i++;
	}
	PRINT_OK();
	NEWL();
	return (0);
}
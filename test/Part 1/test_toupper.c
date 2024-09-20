#include "unit_test.h"
#include "libft.h"

int test_toupper(void)
{
	int i;

	printf("ft_toupper : ");
	i = 0;

	while (i < 256)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf("ft_toupper : %d, expected %d, i = %d\n", ft_toupper(i), toupper(i), i);
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
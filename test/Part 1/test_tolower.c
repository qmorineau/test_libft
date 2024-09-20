#include "unit_test.h"
#include "libft.h"

int test_tolower(void)
{
	int i;

	printf("ft_tolower : ");
	i = 0;

	while (i < 256)
	{
		if (ft_tolower(i) != isalpha(i))
		{
			printf("ft_tolower : %d, expected %d, i = %d\n", ft_tolower(i), tolower(i), i);
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
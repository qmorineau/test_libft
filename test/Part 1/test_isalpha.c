#include "unit_test.h"
#include "libft.h"

int test_isalpha(void)
{
	int i;

	printf("ft_isalpha : ");
	i = -1;

	while (i < 530)
	{
		if ((bool)ft_isalpha(i) != (bool)isalpha(i))
		{
			printf("ft_isalnum : %d, expected %d, i = %d\n", ft_isalpha(i), isalpha(i), i);
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
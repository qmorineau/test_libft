#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../../libft/libft.h"

int main(int argc, char *argv[])
{
	int		arg;
	int		i;
	char	s[96];
	FILE	*f;

	if (argc == 1)
		return (0);

	arg = atoi(argv[argc -1]);

	if (arg == 1)
	{
		f = fopen("test01.output", "w+");
		if (f == NULL)
			return (1);

		i = 0;
		while (i < 95)
		{
			s[i] = (char) ft_toupper(i + 32);
			i++;
		}
		s[i] = '\0';

		fwrite(s, sizeof(char), strlen(s), f);
		fclose(f);
	}
	return (0);
}

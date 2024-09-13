#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../../libft/libft.h"

void	ft_print_result(char *s, int i, int result)
{
	if (result)
	{
		s[i] = '1';
	}
	else
	{
		s[i] = '0';
	}
}

int main(int argc, char *argv[])
{
	int		arg;
	int		i;
	char	*s;
	FILE	*f;

	if (argc == 1)
		return (0);
	s = malloc(sizeof(char) * 221);
	if (!s)
		return (1);
	s[220] = '\0';
	arg = atoi(argv[argc-1]);
	if (arg == 1)
	{
		f = fopen("test01.output", "w+");
		if (f == NULL)
		{
			free(s);
			return (1);
		}
		i = -20;
		while (i <= 200)
		{
			ft_print_result(s, (i + 20), ft_isalnum(i));
			i++;
		}
		fwrite(s, sizeof(char), strlen(s), f);
		fclose(f);
		free(s);
	}
	return (0);
}
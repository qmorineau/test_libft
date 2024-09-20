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
		i = ft_atoi("abcdef");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 2)
	{
		f = fopen("test02.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("1234567");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 3)
	{
		f = fopen("test03.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("-1234567");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 4)
	{
		f = fopen("test04.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 5)
	{
		f = fopen("test05.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("       12345");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 6)
	{
		f = fopen("test06.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("\t\t\t\t98765");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 7)
	{
		f = fopen("test07.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("\n\n\n9871245");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 8)
	{
		f = fopen("test08.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("2147483647");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 9)
	{
		f = fopen("test09.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("-2147483648");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 10)
	{
		f = fopen("test10.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 11)
	{
		f = fopen("test11.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 12)
	{
		f = fopen("test12.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("+642131");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	else if (arg == 13)
	{
		f = fopen("test13.output", "w+");
		if (f == NULL)
			return (1);
		i = ft_atoi("    		+84234");
		fwrite(i, sizeof(int), 1, f);
		fclose(f);
	}
	return (0);
}
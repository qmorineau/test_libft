#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../../libft/libft.h"

int main(int argc, char *argv[])
{
	int		arg;
	int		i;
	char	**tab;
	FILE	*f;

	if (argc == 1)
		return (0);
	arg = atoi(argv[argc-1]);
	if (arg == 1)
	{
		f = fopen("test01.output", "w+");
		if (f == NULL || rf == NULL)
		{
			return (1);
		}
        tab = {"abcdefghijklmnopqrstuvwxyz", "", "0123456789", "abcde\0abcde", "012345\n6789", "\t\t\t\t\t\t\t   \t\t\t\t", "ABCDE2913984916{)~#"}"'aazea'", "你 好", "abcde\0\0abc"};
        i = 0;
        while (tab[i])
        {
            fwrite(strlen(tab[i]), sizeof(int), 1, f);
            fwrite('\n', sizeof(char), 1, f);
            i++;
        }
		fclose(f);
	}
	return (0);
}
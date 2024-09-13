#include "unit_test.h"
#include "libft.h"


void test_strlen(void)
{
    int success = 1;
    int i = 0;
    char *tab[] = {"abcdefghijlmno", " ", " ", "", "\0\0"};
    printf("Test strlen:");
    while(i < 5)
    {
        if (strlen(tab[i]) != ft_strlen(tab[i]))
        {
            success = 0;
            print_ko();
        }
        else
        {
            print_ok();
        }
        i++;
    }
    if (success == 0)
    {
        print_ko();
        printf("\n");
        i = 0;
        while(i < 5)
        {
            if (strlen(tab[i]) != ft_strlen(tab[i]))
            {
                print_error_int(strlen(tab[i]), ft_strlen(tab[i]), "strlen");
            }
            i++;
        }
    }
    printf("\n");
}
#include "unit_test.h"
#include "libft.h"

void test_isalpha(void)
{
    int success = 1;
    int c = -20;
    printf("Test isalpha:");
    while(c <= 200)
    {
        if (isalpha(c) == 0)
        {
            if (!assert_int(ft_isalpha(c) == 0))
                success = 0;
        }
        else
        {
            if (!assert_int(ft_isalpha(c) > 0))
                success = 0;
        }
        c++;
    }
    if (success == 1)
        print_ok();
    else
    {
        print_ko();
        printf("\n");
        c = -20;
        while(c <= 200)
        {
            if (isalpha(c) == 0)
            {
                if(!assert_int(ft_isalpha(c) == 0))
                    print_error_int(isalpha(c), ft_isalpha(c), "isalpha");
            }
            else
            {
                if(!assert_int(ft_isalpha(c) > 0))
                    print_error_int(isalpha(c), ft_isalpha(c), "isalpha");
            }
            c++;
        }
    }
    printf("\n");
}
void test_strcpy(void)
{
    printf("    strcpy: ");
    char s[16];
    char a[] = "abcdefghijklmno";
    char b[] = " ";
    char c[] = "";
    char d[] = "\0\0";
    assert(strcpy(s, a) == ft_strcpy(s, a));
    assert(strcpy(s, b) == ft_strcpy(s, b));
    assert(strcpy(s, c) == ft_strcpy(s, c));
    assert(strcpy(s, d) == ft_strcpy(s, d));
    printf(" Succeed ! pas sûr aussi\n");
}
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
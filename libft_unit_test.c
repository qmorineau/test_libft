

//Char Functions








//String Functions



void test_strcat(void)
{

}
void test_strncat(void)
{

}
void test_strlcat(void)
{

}
void test_strcmp(void)
{
    printf("    strcmp: ");
    const char a[] = "abcdefghijklmn9820341§/APP£µù!*ez:";
    const char b[] = "abcdefghijklmn9820341§/APP£µù!*ez:";
    const char c[] = "";
    assert(strcmp(a, b) == ft_strcmp(a, b));
    assert(strcmp(a, c) > 0 && ft_strcmp(a, c) > 0);
    assert(strcmp(c, b) < 0 && ft_strcmp(c, b) < 0);
    printf(" Succeed !\n");
}
void test_strncmp(void)
{
    printf("    strncmp: ");
    printf(" a faire\n");
}
void test_strjoin(void)
{

}
void test_strstr(void)
{

}
void test_strchr(void)
{

}
void test_strrchr(void)
{

}
void test_str_function(void)
{
    printf("Test String Functions :\n");
    test_strlen();
    test_strcpy();
    test_strncpy();
    test_strcat();
    test_strncat();
    test_strlcat();
    test_strcmp();
    test_strncmp();
    test_strjoin();
    test_strstr();
    test_strchr();
    test_strrchr();
}
//Standard Output Functions
void test_putchar(void)
{

}
void test_putstr(void)
{

}
void test_putnbr(void)
{

}
//Transform Functions
void test_atoi(void)
{

}
void test_itoa(void)
{

}
//Malloc Functions
void test_strdup(void)
{

}
// Main
int main(void)
{
    test_char_function();
    test_str_function();
    return (0);
}
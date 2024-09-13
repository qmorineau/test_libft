void test_strncpy(void)
{
    printf("    strncpy: ");
    size_t x = 0;
    size_t y = 15;
    size_t z = 1;
    char s[16];
    char a[] = "abcdefghijklmno";
    char b[] = " ";
    char c[] = "";
    char d[] = "\0\0";
    assert(strncpy(s, a, x) == ft_strncpy(s, a, x));
    assert(strncpy(s, b, x) == ft_strncpy(s, b, x));
    assert(strncpy(s, c, x) == ft_strncpy(s, c, x));
    assert(strncpy(s, d, x) == ft_strncpy(s, d, x));
    assert(strncpy(s, a, y) == ft_strncpy(s, a, y));
    assert(strncpy(s, b, y) == ft_strncpy(s, b, y));
    assert(strncpy(s, c, y) == ft_strncpy(s, c, y));
    assert(strncpy(s, d, y) == ft_strncpy(s, d, y));
    assert(strncpy(s, a, z) == ft_strncpy(s, a, z));
    assert(strncpy(s, b, z) == ft_strncpy(s, b, z));
    assert(strncpy(s, c, z) == ft_strncpy(s, c, z));
    assert(strncpy(s, d, z) == ft_strncpy(s, d, z));
    printf(" Succeed ! pas sûr (check juste le pointer ou str entiere ?\n");
}
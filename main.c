#include "unit_test.h"

int main(void)
{
	printf("Let's do some \033[0;31mTESTS\033[0m :\n");
	test_isdigit();
	test_isalpha();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_tolower();
	test_toupper();
	test_bzero();
	test_memset();

	test_atoi();
	test_itoa();
}

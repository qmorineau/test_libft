#include "unit_test.h"

#include "unit_test.h"

#include "unit_test.h"

static void ft_cmp_file(int file1, int file2)
{
	char buff1[50];
	char buff2[50];
	ssize_t byte_read;

	byte_read = read(file1, buff1, 50);
	if (byte_read < 0)
	{
		PRINT_PROBLEM();
		return ;
	}
	byte_read = read(file2, buff2, 50);
	if (byte_read < 0)
	{
		PRINT_PROBLEM();
		return ;
	}
	if (strcmp(buff1, buff2) != 0)
		PRINT_FAIL();
	else
		PRINT_OK();
}

int	test_putstr_fd (void)
{
	int in_1;
	int in_2;
	int in_3;
	int out_1;
	int out_2;
	int out_3;

	printf("ft_putstr_fd :");
	// Create file
	in_1 = open("./test/mandatory/file_test/putstr_fd/1.in", O_CREAT, S_IRWXU);
	in_2 = open("./test/mandatory/file_test/putstr_fd/2.in", O_CREAT, S_IRWXU);
	in_3 = open("./test/mandatory/file_test/putstr_fd/3.in", O_CREAT, S_IRWXU);
	if (!in_1 || !in_2 || !in_3)
	{
		close(in_1);
		close(in_2);
		close(in_3);
		PRINT_PROBLEM();
		NEWL();
		return (0);
	}
	close(in_1);
	close(in_2);
	close(in_3);
	// Write in the file
	in_1 = open("./test/mandatory/file_test/putstr_fd/1.in", O_RDWR);
	in_2 = open("./test/mandatory/file_test/putstr_fd/2.in", O_RDWR);
	in_3 = open("./test/mandatory/file_test/putstr_fd/3.in", O_RDWR);
	if (!in_1 || !in_2 || !in_3)
	{
		close(in_1);
		close(in_2);
		close(in_3);
		PRINT_PROBLEM();
		NEWL();
		return (0);
	}
	ft_putstr_fd("asdfghjklawfkjnaaofhasfkmasd0123456789", in_1);
	ft_putstr_fd("\t\n\r\n\f\f\t\n\f\t\t\r\t\t\r\n\v\v", in_2);
	ft_putstr_fd("\\0", in_3);
	close(in_1);
	close(in_2);
	close(in_3);
	// Read the file
	in_1 = open("./test/mandatory/file_test/putstr_fd/1.in", O_RDONLY);
	in_2 = open("./test/mandatory/file_test/putstr_fd/2.in", O_RDONLY);
	in_3 = open("./test/mandatory/file_test/putstr_fd/3.in", O_RDONLY);
	out_1 = open("./test/mandatory/file_test/putstr_fd/1.out", O_RDONLY);
	out_2 = open("./test/mandatory/file_test/putstr_fd/2.out", O_RDONLY);
	out_3 = open("./test/mandatory/file_test/putstr_fd/3.out", O_RDONLY);
	if (!in_1 || !in_2 || !in_3 || !out_1 || !out_2 || !out_3)
	{
		close(in_1);
		close(in_2);
		close(in_3);
		close(out_1);
		close(out_2);
		close(out_3);
		PRINT_PROBLEM();
		NEWL();
		return (0);
	}
	ft_cmp_file(in_1, out_1);
	ft_cmp_file(in_2, out_2);
	ft_cmp_file(in_3, out_3);
	close(in_1);
	close(in_2);
	close(in_3);
	close(out_1);
	close(out_2);
	close(out_3);
	NEWL();
	return (1);
}

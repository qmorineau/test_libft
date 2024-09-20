#include "unit_test.h"

void	print_test_result(const char *test_name, int status)
{
	int	exit_code;
	int	signal;

	if (WIFEXITED(status))
	{
		exit_code = WEXITSTATUS(status);
		if (exit_code == 0)
			printf("\033[0;32m[OK]\033[0m %s\n", test_name);
		else
			printf("\033[0;31m[FAIL]\033[0m %s (Exit code: %d)\n", test_name, exit_code);
	}
	else if (WIFSIGNALED(status))
	{
		signal = WTERMSIG(status);
		if (signal == SIGSEGV)
			printf("\033[0;33m[SEGV]\033[0m %s (Segmentation Fault)\n", test_name);
		else if (signal == SIGABRT)
			printf("\033[0;33m[ABRT]\033[0m %s (Abort)\n", test_name);
		else
			printf("\033[0;31m[FAIL]\033[0m %s (Signal: %d)\n", test_name, signal);
	}
}
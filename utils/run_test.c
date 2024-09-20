#include "unit_test.h"

static sigjmp_buf jump_buffer;

void signal_handler(int signum) {
    siglongjmp(jump_buffer, 1);
}

int run_test(int (*test_func)(), const char *test_name, int seg) {
    signal(SIGSEGV, signal_handler);
    if (sigsetjmp(jump_buffer, 1) == 0) {
        test_func();
        printf("[OK]");
        return 0;
    } else {
		if (seg == 1)
		{
			printf("[OK]");
        	return 1;
		} else {
        	printf("[SEG]");
        	return 1;
		}   
	}
    signal(SIGSEGV, SIG_DFL);
}
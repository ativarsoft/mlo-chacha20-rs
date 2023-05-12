#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "chacha20.h"

void chacha20_panic_handler()
{
	fputs("PANIC!\n", stderr);
	exit(1);
}

int run_test1()
{
	int rc = -1;
	fputs("test 1: ", stderr);
	rc = chacha20_test1(malloc);
	if (rc == 0) {
		fputs("ok\n", stderr);
	} else if (rc > 0) {
		fputs("failed\n", stderr);
	} else {
		fputs("error\n", stderr);
		return 1;
	}
	return 0;
}

int run_test2()
{
	int rc = -1;
	fputs("test 2: ", stderr);
	rc = chacha20_test2(malloc);
	if (rc == 0) {
		fputs("ok\n", stderr);
	} else if (rc > 0) {
		fputs("failed\n", stderr);
	} else {
		fputs("error\n", stderr);
		return 1;
	}
	return 0;
}

int run_test3()
{
	int rc = -1;
	fputs("test 3: ", stderr);
	rc = chacha20_test3(malloc);
	if (rc == 0) {
		fputs("ok\n", stderr);
	} else if (rc > 0) {
		fputs("failed\n", stderr);
	} else {
		fputs("error\n", stderr);
		return 1;
	}
	return 0;
}

int run_tests()
{
	if (run_test1())
		return 1;
	if (run_test2())
		return 2;
	if (run_test3())
		return 3;
	return 0;
}

int main()
{
	int rc = -1;
	if (rc = run_tests())
		return rc;
	return 0;
}


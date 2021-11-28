#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
static int g()
{
	int n;
	if (scanf("%d", &n) == 1) {
		//“ü—Í¬Œ÷
		return n;
	}
	else {
		//“ü—Í¸”s
		fprintf(stderr, "“ü—Í¸”s\n");
		exit(EXIT_FAILURE);
	}
}
int f()
{
	return g();
}

#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
static int g()
{
	int n;
	if (scanf("%d", &n) == 1) {
		//���͐���
		return n;
	}
	else {
		//���͎��s
		fprintf(stderr, "���͎��s\n");
		exit(EXIT_FAILURE);
	}
}
int f()
{
	return g();
}

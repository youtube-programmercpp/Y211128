#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
static int g()
{
	int n;
	if (scanf("%d", &n) == 1) {
		//入力成功
		return n;
	}
	else {
		//入力失敗
		fprintf(stderr, "入力失敗\n");
		exit(EXIT_FAILURE);
	}
}
int f()
{
	return g();
}

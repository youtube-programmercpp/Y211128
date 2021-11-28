#include <stdio.h> //printf を使うので必要

int g()
{
	return 123456;
}

int main()
{
	printf("入力された値は %d です。\n", g());
}

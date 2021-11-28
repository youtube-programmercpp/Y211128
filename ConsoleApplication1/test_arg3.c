#include <stdio.h>
void f(int a)
{
	++a;
	printf("%d\n", a);
}
int main()
{
	int a = 123;
	f(a);
	printf("%d\n", a);
}

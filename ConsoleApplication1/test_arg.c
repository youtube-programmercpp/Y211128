//    ------------
int f(int a, int b)
//    ------------   formal parameters 仮引数
{
	return a + b;
}
#include <stdio.h>
int main()
{
	printf("%d\n", f(10, 20)); // actual parameters 実引数
}

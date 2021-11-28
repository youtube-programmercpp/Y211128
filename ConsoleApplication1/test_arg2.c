#include <stdio.h>
//配列を受けているようで、実はポインタを受けている
void f(const char s[])
{
	++s;
	puts(s);
}
int main()
{
	const char s[] = "ABC";//変数の場合は [] なら配列、* ならポインタ
	f(s);
	puts(s);
}

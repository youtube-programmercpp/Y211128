#include <stdio.h>
//�z����󂯂Ă���悤�ŁA���̓|�C���^���󂯂Ă���
void f(const char s[])
{
	++s;
	puts(s);
}
int main()
{
	const char s[] = "ABC";//�ϐ��̏ꍇ�� [] �Ȃ�z��A* �Ȃ�|�C���^
	f(s);
	puts(s);
}

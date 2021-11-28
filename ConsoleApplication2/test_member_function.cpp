#include <stdio.h>
class sample {
	int a;
	int b;
public:
	sample(int a, int b)
		: a(a)
		, b(b)
	{
	}
#if 0
	void display() const
	{
		printf("a = %d, b = %d\n", a, b);
	}
#else
	//static �����o�֐��̓����o�ϐ��ɃA�N�Z�X���Ȃ��֐�
	static void display(const sample& r)
	{
		printf("a = %d, b = %d\n", r.a, r.b);
	}
#endif
	void inc()
	{
		++a;
		++b;
	}
};
//�񃁃��o�֐�
//void display(const sample* p)
//{
//	printf("a = %d, b = %d\n", p->a, p->b);
//}
int main()
{
	sample x(1, 2), y(3, 4);
	sample::display(x);
}

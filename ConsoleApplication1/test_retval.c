#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct pair {
	int a;
	int b;
};
//C����ł� pair �͍\���̃^�O��
struct pair input()
{
	struct pair retval;
	if (scanf("%d%d", &retval.a, &retval.b) == 2 /*���͂ł����f�[�^�̌�*/) {
		//���͐���
		return retval;
	}
	else {
		//���͎��s
		fprintf(stderr, "���͎��s\n");
		exit(EXIT_FAILURE);
	}
}
struct pair add(const struct pair* x, const struct pair* y)
{
	//�������ŋL�q�����ꍇ
	const struct pair retval =
	{ x->a + y->a
	, x->b + y->b
	};
	return retval;
}
void add2(const struct pair* x, const struct pair* y, struct pair* z)
{
	z->a = x->a + y->a;
	z->b = x->b + y->b;
}
int main()
{
	const struct pair x = input();
	const struct pair y = input();
	const struct pair z = add(&x, &y);
	struct pair z2;
	add2(&x, &y, &z2);
	printf("�v�Z���ʁF%d, %d\n", z.a, z.b);
	printf("�v�Z���ʁF%d, %d\n", z2.a, z2.b);
}

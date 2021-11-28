#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct pair {
	int a;
	int b;
};
//C言語では pair は構造体タグ名
struct pair input()
{
	struct pair retval;
	if (scanf("%d%d", &retval.a, &retval.b) == 2 /*入力できたデータの個数*/) {
		//入力成功
		return retval;
	}
	else {
		//入力失敗
		fprintf(stderr, "入力失敗\n");
		exit(EXIT_FAILURE);
	}
}
struct pair add(const struct pair* x, const struct pair* y)
{
	//初期化で記述した場合
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
	printf("計算結果：%d, %d\n", z.a, z.b);
	printf("計算結果：%d, %d\n", z2.a, z2.b);
}

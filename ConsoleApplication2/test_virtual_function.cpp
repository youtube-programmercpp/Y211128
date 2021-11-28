#include <stdio.h>
struct sample {
	int a;
	int b;
	virtual void display() const = 0;//純粋仮想関数 pure virtual
	void test() const
	{
		display();
	}
};
struct sample_v2 : public sample /*基底クラス*/ {
	//inherit 継承
	//int a;
	//int b;
	void display() const
	{
		printf("v2: %d, %d\n", a, b);
	}
};
int main()
{
	//sample a;//純粋仮想関数があるため、sample 型のインスタンスを生成することは不可
	sample_v2 x;
	x.a = 100;
	x.b = 200;
	x.test();
}

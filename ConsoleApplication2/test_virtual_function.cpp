#include <stdio.h>
struct sample {
	int a;
	int b;
	virtual void display() const = 0;//�������z�֐� pure virtual
	void test() const
	{
		display();
	}
};
struct sample_v2 : public sample /*���N���X*/ {
	//inherit �p��
	//int a;
	//int b;
	void display() const
	{
		printf("v2: %d, %d\n", a, b);
	}
};
int main()
{
	//sample a;//�������z�֐������邽�߁Asample �^�̃C���X�^���X�𐶐����邱�Ƃ͕s��
	sample_v2 x;
	x.a = 100;
	x.b = 200;
	x.test();
}

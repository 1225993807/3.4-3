#include<stdio.h>
int main()
{
	void A();
	void B();
	void C();

lable_1:int a;
	printf("请输入1或2或3.\n");
	scanf("%d",&a);

	switch (a)
	{
	case 1:A(); goto lable_1;
	case 2:B(); goto lable_1;
	case 3:C(); goto lable_1;
	default:break;
	}
	return 0;
	getchar();
}

void A()
{
	printf("A函数\n");
}

void B()
{
	printf("B函数\n");
}

void C()
{
	printf("C函数\n");
}
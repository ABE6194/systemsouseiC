#include<stdio.h>

int main(void)
{
	int a, result;

	printf("��������͂��Ă�������");
	scanf_s("%d", &a);

	result = a * a;
	printf("%d*%d=%d\n", a, a, result);

	return 0;
}
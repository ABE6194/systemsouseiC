#include<stdio.h>

int main(void)
{
	int a, result;

	printf("数字を入力してください");
	scanf_s("%d", &a);

	result = a * a;
	printf("%d*%d=%d\n", a, a, result);

	return 0;
}
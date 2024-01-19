#include<stdio.h>
#include<math.h>
#include"kai.h"

int main(void)
{
	int a, b, c;
	int x1 = 0;
	int x2 = 0;
	printf("ax^2+bx+cのaを入力してください\n");
	scanf_s("%d",&a);
	if (a == 0)
	{	
		while (a == 0)
		{
			printf("aが0にならないように再度aを入力してください\n");
			scanf_s("%d", &a);
		}
	}
	   
	printf("ax^2+bx+cのbを入力してください\n");
	scanf_s("%d", &b);
	printf("ax^2+bx+cのcを入力してください\n");
	scanf_s("%d", &c);

	kai(a, b, c);

	return 0;
}

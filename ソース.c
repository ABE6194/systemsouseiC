#include<stdio.h>
#include<math.h>
#include"kai.h"

int main(void)
{
	int a, b, c;
	int x1 = 0;
	int x2 = 0;
	printf("ax^2+bx+c��a����͂��Ă�������\n");
	scanf_s("%d",&a);
	if (a == 0)
	{	
		while (a == 0)
		{
			printf("a��0�ɂȂ�Ȃ��悤�ɍēxa����͂��Ă�������\n");
			scanf_s("%d", &a);
		}
	}
	   
	printf("ax^2+bx+c��b����͂��Ă�������\n");
	scanf_s("%d", &b);
	printf("ax^2+bx+c��c����͂��Ă�������\n");
	scanf_s("%d", &c);

	kai(a, b, c);

	return 0;
}
#include<stdio.h>

int main(void)
{   
	int* i;
	char a;

	printf("char�����");
	scanf_s("%c", &a);

	for (i = 0; i < a; i++)
	{
		if (a[i]<= 65 && 90 >= a[i])
		{
			printf("�啶��������");
		}

		else { }
	}


	return 0;
}
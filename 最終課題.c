#include<time.h>
/*#include<stdlib.h>*/
#include<stdio.h>

int main(void)
{
	int x, y, z,k,m,n,l;
	int a, i;
	i = 3;
	x = 0;

		srand(time(0));
		y = (rand() % 10);
		z = (rand() % 10);
		if (y ==0 && z == 0) { x = 1; }
		else { x = 0; }
		m = 100 * x + 10 * y + z;

	printf("1�`100�̒�����I�΂ꂽ���𓖂ĂĂ�������\n5��ȓ��ɓ��ĂĂ�������\n\n?=");

	scanf_s("%d", &a);

	while (a != m && i >= 0)
	{
		n = (a - (a % 10)) / 10;/*�\�̈ʂ����߂�*/
		l = (a % 10);/*��̈ʂ����߂�*/
		k = (m%10);

		if (y == n)
		{
			printf("10�̈ʂ͐������ł��A");
			if (k >= 5) 
			{
				printf("1�̈ʂ�5�ȏ�ł��A");
			}
			else if(k<5) { printf("1�̈ʂ�5�����ł��A"); }

		}

		else if (z == l)
		{
			printf("1�̈ʂ͐������ł��A");
		}

		else if (a>m)
		{
			if (a - m >= 70)
			{
				printf("�I�΂ꂽ�����\�z����������+70�ȏ�ł��A");
			}
			else if (70 > a - m && a-m >= 30)
			{
				printf("�I�΂ꂽ�����\�z����������+69�`+30�ł��A");
			}
			else if (30 > a - m && a-m> 0)
			{
				printf("�I�΂ꂽ�����\�z����������+29�`+�P�ł��A");
			}
		}

		else if(a<m)
		{
			if (m-a >= 70)
			{
				printf("�I�΂ꂽ�����\�z����������-70�ȏ�ł��A");
			}
			else if (70 > m-a && m-a>= 30)
			{
				printf("�I�΂ꂽ�����\�z����������-69�`-30�ł��A");
			}
			else if (30 > m-a && m-a > 0)
			{
				printf("�I�΂ꂽ�����\�z����������-29�`-�P�ł��A");
			}

		}
		
		printf("��%d��ł��A������x�\�z���Ă�������\n\n?=",i+1);
		scanf_s("%d", &a);
		i = i - 1;
		
	}

	if (a == m)
	{
		printf("����!");
	}
	else
	{
		printf("�s����!\n������%d�ł���",m);
	}

	return 0;

}
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

	printf("1～100の中から選ばれた数を当ててください\n5回以内に当ててください\n\n?=");

	scanf_s("%d", &a);

	while (a != m && i >= 0)
	{
		n = (a - (a % 10)) / 10;/*十の位を求める*/
		l = (a % 10);/*一の位を求める*/
		k = (m%10);

		if (y == n)
		{
			printf("10の位は正しいです、");
			if (k >= 5) 
			{
				printf("1の位は5以上です、");
			}
			else if(k<5) { printf("1の位は5未満です、"); }

		}

		else if (z == l)
		{
			printf("1の位は正しいです、");
		}

		else if (a>m)
		{
			if (a - m >= 70)
			{
				printf("選ばれた数より予想した数字が+70以上です、");
			}
			else if (70 > a - m && a-m >= 30)
			{
				printf("選ばれた数より予想した数字が+69～+30です、");
			}
			else if (30 > a - m && a-m> 0)
			{
				printf("選ばれた数より予想した数字が+29～+１です、");
			}
		}

		else if(a<m)
		{
			if (m-a >= 70)
			{
				printf("選ばれた数より予想した数字が-70以上です、");
			}
			else if (70 > m-a && m-a>= 30)
			{
				printf("選ばれた数より予想した数字が-69～-30です、");
			}
			else if (30 > m-a && m-a > 0)
			{
				printf("選ばれた数より予想した数字が-29～-１です、");
			}

		}
		
		printf("後%d回です、もう一度予想してください\n\n?=",i+1);
		scanf_s("%d", &a);
		i = i - 1;
		
	}

	if (a == m)
	{
		printf("正解!");
	}
	else
	{
		printf("不正解!\n答えは%dでした",m);
	}

	return 0;

}
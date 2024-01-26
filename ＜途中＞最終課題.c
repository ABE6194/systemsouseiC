#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int x,y,z,m,a,i;
	i = 0;
	m = 10;

	/*srand(time(0));
	x = (rand() % 2+1);
	if(x==2)
	{x = 1;}
	else
	{x = 0;}
	y = (rand() % 9 + 1);
	z = (rand() % 9 + 1);

	m = 100 * x + 10 * y + z;*/
	
	printf("%d\n",m);

	printf("1～100の中から選ばれた数を当ててください\n最初にヒントはありません\n\n?=");

	scanf_s("%d", &a);

	while (a != m || i>3)
	{
		

		if (m-a> 60 || a-m>60)
		{
			printf("予想した数字の誤差が±60以上です");
		}

		else if (60>m-a>30|| 60>a-m>30)
		{
			printf("予想した数字の誤差が±60～30です");
		}

		else if (30>m-a>0 || 30>a-m>0)
		{
			printf("予想した数字が±30～0です");
		}

		

		printf("もう一度予想してください\n\n?=");
		scanf_s("%d",&a);
		i++;

	}

	
}

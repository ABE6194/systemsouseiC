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

	printf("1`100‚Ì’†‚©‚ç‘I‚Î‚ê‚½”‚ğ“–‚Ä‚Ä‚­‚¾‚³‚¢\nÅ‰‚Éƒqƒ“ƒg‚Í‚ ‚è‚Ü‚¹‚ñ\n\n?=");

	scanf_s("%d", &a);

	while (a != m || i>3)
	{
		

		if (m-a> 60 || a-m>60)
		{
			printf("—\‘z‚µ‚½”š‚ÌŒë·‚ª}60ˆÈã‚Å‚·");
		}

		else if (60>m-a>30|| 60>a-m>30)
		{
			printf("—\‘z‚µ‚½”š‚ÌŒë·‚ª}60`30‚Å‚·");
		}

		else if (30>m-a>0 || 30>a-m>0)
		{
			printf("—\‘z‚µ‚½”š‚ª}30`0‚Å‚·");
		}

		

		printf("‚à‚¤ˆê“x—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n\n?=");
		scanf_s("%d",&a);
		i++;

	}

	
}
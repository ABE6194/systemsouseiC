#include<stdio.h>
#include<math.h>
#include"kai.h"

int main(void)
{
	int a, b, c;
	int x1 = 0;
	int x2 = 0;
	printf("ax^2+bx+c‚Ìa‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d",&a);
	if (a == 0)
	{	
		while (a == 0)
		{
			printf("a‚ª0‚É‚È‚ç‚È‚¢‚æ‚¤‚ÉÄ“xa‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
			scanf_s("%d", &a);
		}
	}
	   
	printf("ax^2+bx+c‚Ìb‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &b);
	printf("ax^2+bx+c‚Ìc‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &c);

	kai(a, b, c);

	return 0;
}
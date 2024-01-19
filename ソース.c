#include<stdio.h>

int main(void)
{
	int i;
	int tray[5];

	tray[0] = 15;
	tray[1] = 200;
	tray[2] = 18;
	tray[3] = 55;
	tray[4] = 30;

	printf("•¶–[‹ï‚Ì”Ô†‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	for (;;)
	{
		scanf_s("%d",&i);
		if ((i <= 0) || (i > 5))
		{
			printf("1‚©‚ç5‚Ü‚Å‚Ì’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
		}
		else
		{
			break;
		}
	}

	printf("%dŒÂ‚ÌİŒÉ‚ª‚ ‚è‚Ü‚·\n", tray[i - 1]);

	return 0;
}
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

	printf("���[��̔ԍ�����͂��Ă�������>");
	for (;;)
	{
		scanf_s("%d",&i);
		if ((i <= 0) || (i > 5))
		{
			printf("1����5�܂ł̒l����͂��Ă�������>");
		}
		else
		{
			break;
		}
	}

	printf("%d�̍݌ɂ�����܂�\n", tray[i - 1]);

	return 0;
}
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int i, s, c;

	srand(time(0));
	i = (rand() % 20 + 1);

	s = (rand() % (20 - i) + 1);

	c = 20 - (i + s);

	if (i > s && i > c)
		printf("���Ȃ��̃N���X��mage�ł�\n\n");

	else if (s > i && s > c)
		printf("���Ȃ��̃N���X��knight�ł�\n\n");

	else if (c > i && c > s)
		printf("���Ȃ��̃N���X��thief�ł�\n\n");


	printf("���Ȃ��̃X�e�[�^�X\nintelligence %d \nstamina %d \ncharisma %d \n",i,s,c);
	
	return 0;
}
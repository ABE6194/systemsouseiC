#include<stdio.h>

int main(void)
{
	int a,result;

	printf("���ɖ����Ă��܂����B�����ꓹ���O����B�ǂ̓���i�������H\n1.�^������\n2.�E�̓�\n3.���̓�\n(��������͂��Ă�)\n");
	scanf_s("%d", &a);

	if (a ==1) 
	{printf("�c�O�A�s���~�܂�݂�����\n");}

	else if(a==2)
	{ printf("�ŏ��̏ꏊ�ɖ߂��Ă��Ă��܂���...\n"); }

	if (a == 3)
	{
		printf("�����!���m�����ꏊ�܂Ŗ߂��Ă��ꂽ!\n");
	}

	
	

	return 0;
}
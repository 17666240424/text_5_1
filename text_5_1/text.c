#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("*******************************\n");
	printf("*****       1 play       *****\n");
	printf("*****       0 exit       *****\n");
	printf("*******************************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf_s("%d", &guess);
		if (guess < ret)
		{
			printf("��С��");
		}
		else if (guess > ret)
		{
			printf("�´���");
		}
		else
		{
			printf("��ϲ�㣬�¶���");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
		default:
			printf("��ѡ��0(�˳���Ϸ)��1(������Ϸ)");
			break;
		}
	} while (input);
	return 0;
}

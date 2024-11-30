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
		printf("请猜数字:>");
		scanf_s("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了");
		}
		else if (guess > ret)
		{
			printf("猜大了");
		}
		else
		{
			printf("恭喜你，猜对了");
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
		printf("请选择");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏");
		default:
			printf("请选择0(退出游戏)或1(进入游戏)");
			break;
		}
	} while (input);
	return 0;
}

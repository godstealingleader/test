#include <stdio.h>

int check(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	if (num == 1)return 0;
	return 1;
}



main()
{
	int num = 1;
	while (num!=0)
	{
		scanf_s("%d", &num);
		num = check(num);
		if (num == 1)
		{
			printf("是素数\n");
		}
		else
		{
			printf("不是素数\n");
		}
	}
	return 0;
}
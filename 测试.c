#include<stdio.h>

int main()
{
	int input = 0;
	printf("上了大学\n");
	printf("你会好好学习吗？选择1或0 >:");
	scanf("%d\n",&input);
	
	if(input == 1)
	{
		printf("走上人生巅峰\n");
	}
	else
	{
		printf("回家卖红薯\n");
	}
	return 0;
}

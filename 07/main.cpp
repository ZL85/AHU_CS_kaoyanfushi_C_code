//输入十个整数，其中包含奇数偶数，输出所有的偶数和所有偶数的平均值。

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, num = 0, sum = 0;
	int a[10], b[10];
	//输入十个整数
	printf("请输入10个整数：\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0)
		{
			b[num++] = a[i];
			sum = sum + a[i];
		}
	}
	//输出所有的偶数
	printf("其中偶数有：\n");
	for (i = 0; i < num; i++)
	{
		printf("%d ", b[i]);
	}
	//输出所有偶数的平均值
	printf("\n偶数的平均值AVE=%d\n", sum / num);
	return 0;
}
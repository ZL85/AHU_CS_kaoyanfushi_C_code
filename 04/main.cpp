//输入10个整数，输出其中的正数及所有正数的和。

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, a[10], b[10];
	int j = 0, sum = 0;
	printf("请输入10个整数：\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] > 0)
		{
			b[j] = a[i];
			sum = sum + b[j];
			j++;
		}
	}
	//全部输入完把正数存入新的数组再输出
	printf("\n这十个数中的正数是：\n");
	for (i = 0; i < j; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	printf("\n这%d个正数的和是：\n%d\n", j, sum);
	return 0;
}

//边输入边输出正数
//int a[10], i, count = 0, sum = 0;
//printf("请输入10个整数：\n");
//for (i = 0; i < 10; i++)
//{
//	scanf("%d", &a[i]);
//	if (a[i] > 0)
//	{
//		count++;
//		printf("%d ", a[i]);
//		sum += a[i];
//	}
//}
//printf("\n这%d个正数的和是：%d\n", count, sum);
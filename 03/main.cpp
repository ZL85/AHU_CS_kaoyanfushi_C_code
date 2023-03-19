//读入n个整数，存入一维数组中，然后读入k，
//分别依次增序输出b中k个最小值，依次减序输出b中k个最大值。

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 10
//冒泡排序，将数组中元素按从小到大排序
void bubble_sort(int b[], int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (b[j] >= b[j + 1])
			{
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
}
void main()
{
	int b[N], i, j, k;
	//输入n个整数，存入一维数组中
	printf("请输入%d个整数：\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &b[i]);
	}
	//将数组中元素按从小到大排序
	bubble_sort(b, N);
	//读入k
	printf("\n请输入k(0<k<%d)：\n", N);
	scanf("%d", &k);
	printf("\n%d个最小值：\n", k);
	for (i = 0; i < k; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	printf("\n%d个最大值：\n", k);
	for (i = N - 1; i > N - k - 1; i--)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
}
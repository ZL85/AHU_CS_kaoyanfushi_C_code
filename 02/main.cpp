//读入一组整数放入一个n*n的矩阵中，以对角线为对称线，
//将对称元素相加的结果放在左下三角中并将右上三角元素置为0。

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 3
//按照矩阵形式输出二维数组
void print_matrix(int matrix[N][N], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4d ", matrix[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int i, j, a[N][N];
	printf("请输入%d个整数：\n", N * N);
	//把输入的整数存入数组
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	//按矩阵形式输出数组
	printf("原矩阵是：\n");
	print_matrix(a, N, N);
	//以对角线为对称线，将对称元素相加的结果放在左下三角中并将右上三角元素置为0。
	for (i = 1; i < N; i++)
	{
		for (j = 0; j < i; j++)
		{
			a[i][j] = a[i][j] + a[j][i];
			a[j][i] = 0;
		}
	}
	//按矩阵形式输出处理后的数组
	printf("处理后的矩阵是：\n");
	print_matrix(a, N, N);
	return 0;
}
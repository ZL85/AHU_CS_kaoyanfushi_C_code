//输入一个3*4矩阵，输出矩阵的最大值及其所在的行和列。

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int matrix[3][4]; // 定义一个3*4的矩阵
    int max = 0; // 最大值初始化为0
    int index_h, index_l; //行列号
    // 输入矩阵元素
    printf("请输入3*4的矩阵：\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
            // 记录最大值
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                index_h = i+1;
                index_l = j+1;
            }
        }
    }
    printf("这个3*4的整型矩阵是：\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
	printf("矩阵的最大值是%d\n最大值在第%d行，第%d列\n", max, index_h, index_l);
	return 0;
}
//对任意一个3*4的整型矩阵，输出所有元素的最大值、每一行的最小值及其位置。

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
    int matrix[3][4]; // 定义一个3*4的矩阵
    int max = 0; // 最大值初始化为0
    int min; // 最小值
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
            }
        }
    }
    printf("\n这个3*4的整型矩阵是：\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    // 输出最大值
    printf("\n矩阵所有元素的最大值为：%d\n\n", max);
    // 输出每一行的最小值及其位置
    for (int i = 0; i < 3; i++)
    {
        min = matrix[i][0]; // 最小值初始化为当前行的第一个元素
        int min_index = 0; // 最小值位置初始化为0
        for (int j = 1; j < 4; j++)
        {
            // 更新最小值及其位置
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                min_index = j;
            }
        }
        // 输出当前行的最小值及其位置
        printf("第%d行的最小值为%d，位置为[%d,%d]\n", i + 1, min, i, min_index);
        printf("\n");
    }
    return 0;
}
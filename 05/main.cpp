//������һ��3*4�����;����������Ԫ�ص����ֵ��ÿһ�е���Сֵ����λ�á�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
    int matrix[3][4]; // ����һ��3*4�ľ���
    int max = 0; // ���ֵ��ʼ��Ϊ0
    int min; // ��Сֵ
    // �������Ԫ��
    printf("������3*4�ľ���\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
            // ��¼���ֵ
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }
    printf("\n���3*4�����;����ǣ�\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    // ������ֵ
    printf("\n��������Ԫ�ص����ֵΪ��%d\n\n", max);
    // ���ÿһ�е���Сֵ����λ��
    for (int i = 0; i < 3; i++)
    {
        min = matrix[i][0]; // ��Сֵ��ʼ��Ϊ��ǰ�еĵ�һ��Ԫ��
        int min_index = 0; // ��Сֵλ�ó�ʼ��Ϊ0
        for (int j = 1; j < 4; j++)
        {
            // ������Сֵ����λ��
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                min_index = j;
            }
        }
        // �����ǰ�е���Сֵ����λ��
        printf("��%d�е���СֵΪ%d��λ��Ϊ[%d,%d]\n", i + 1, min, i, min_index);
        printf("\n");
    }
    return 0;
}
//����һ��3*4���������������ֵ�������ڵ��к��С�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int matrix[3][4]; // ����һ��3*4�ľ���
    int max = 0; // ���ֵ��ʼ��Ϊ0
    int index_h, index_l; //���к�
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
                index_h = i+1;
                index_l = j+1;
            }
        }
    }
    printf("���3*4�����;����ǣ�\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
	printf("��������ֵ��%d\n���ֵ�ڵ�%d�У���%d��\n", max, index_h, index_l);
	return 0;
}
//����һ����������һ��n*n�ľ����У��ԶԽ���Ϊ�Գ��ߣ�
//���Գ�Ԫ����ӵĽ���������������в�����������Ԫ����Ϊ0��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 3
//���վ�����ʽ�����ά����
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
	printf("������%d��������\n", N * N);
	//�������������������
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	//��������ʽ�������
	printf("ԭ�����ǣ�\n");
	print_matrix(a, N, N);
	//�ԶԽ���Ϊ�Գ��ߣ����Գ�Ԫ����ӵĽ���������������в�����������Ԫ����Ϊ0��
	for (i = 1; i < N; i++)
	{
		for (j = 0; j < i; j++)
		{
			a[i][j] = a[i][j] + a[j][i];
			a[j][i] = 0;
		}
	}
	//��������ʽ�������������
	printf("�����ľ����ǣ�\n");
	print_matrix(a, N, N);
	return 0;
}
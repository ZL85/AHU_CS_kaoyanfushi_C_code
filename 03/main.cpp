//����n������������һά�����У�Ȼ�����k��
//�ֱ������������b��k����Сֵ�����μ������b��k�����ֵ��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 10
//ð�����򣬽�������Ԫ�ذ���С��������
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
	//����n������������һά������
	printf("������%d��������\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &b[i]);
	}
	//��������Ԫ�ذ���С��������
	bubble_sort(b, N);
	//����k
	printf("\n������k(0<k<%d)��\n", N);
	scanf("%d", &k);
	printf("\n%d����Сֵ��\n", k);
	for (i = 0; i < k; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	printf("\n%d�����ֵ��\n", k);
	for (i = N - 1; i > N - k - 1; i--)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
}
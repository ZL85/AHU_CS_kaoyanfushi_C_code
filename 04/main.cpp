//����10��������������е����������������ĺ͡�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, a[10], b[10];
	int j = 0, sum = 0;
	printf("������10��������\n");
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
	//ȫ������������������µ����������
	printf("\n��ʮ�����е������ǣ�\n");
	for (i = 0; i < j; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	printf("\n��%d�������ĺ��ǣ�\n%d\n", j, sum);
	return 0;
}

//��������������
//int a[10], i, count = 0, sum = 0;
//printf("������10��������\n");
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
//printf("\n��%d�������ĺ��ǣ�%d\n", count, sum);
//����ʮ�����������а�������ż����������е�ż��������ż����ƽ��ֵ��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, num = 0, sum = 0;
	int a[10], b[10];
	//����ʮ������
	printf("������10��������\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0)
		{
			b[num++] = a[i];
			sum = sum + a[i];
		}
	}
	//������е�ż��
	printf("����ż���У�\n");
	for (i = 0; i < num; i++)
	{
		printf("%d ", b[i]);
	}
	//�������ż����ƽ��ֵ
	printf("\nż����ƽ��ֵAVE=%d\n", sum / num);
	return 0;
}
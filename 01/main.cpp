//���æ�/4=1-1/3+1/5-...+...��еĽ���ֵ

#include<stdio.h>
#include<math.h>
double funpi(double e)//��pi�Ľ���ֵ
{
	int denominator = 1, flag = 1;
	double item = 1.0, sum = 0;
	while (fabs(item) >= e)//fabs�������ʵ�����ľ���ֵ����֤���һ��ľ���ֵС��0.00001
	{
		item = flag * 1.0 / denominator;//��n��
		sum = sum + item;//ǰn���
		flag = -flag;//��������ż���
		denominator = denominator + 2;//��ĸ�Ȳ�����
	}
	return sum * 4;
}
int main()
{
	double pi;
	pi = funpi(0.00001);
	printf("pi=%.5f\n", pi);
	return 0;
}

//利用π/4=1-1/3+1/5-...+...求π的近似值

#include<stdio.h>
#include<math.h>
double funpi(double e)//求pi的近似值
{
	int denominator = 1, flag = 1;
	double item = 1.0, sum = 0;
	while (fabs(item) >= e)//fabs函数求解实型数的绝对值，保证最后一项的绝对值小于0.00001
	{
		item = flag * 1.0 / denominator;//第n项
		sum = sum + item;//前n项和
		flag = -flag;//奇数项正偶数项负
		denominator = denominator + 2;//分母等差数列
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

//����10�������������а�������ż�����������ÿ�������������ĸ�������������֮�͡�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int nums[10];
    int odd_count = 0, odd_sum = 0;
    printf("������10�������������ܰ���������ż������\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
        //�����ǰ������������������ۼ������ĸ������������ܺ�
        if (nums[i] % 2 != 0)
        {
            odd_count++;
            printf("��%d�������ǣ�%d\n", odd_count, nums[i]);
            odd_sum += nums[i];
        }
    }
    printf("����%d������,���ǵĺ�Ϊ%d\n", odd_count, odd_sum);
    return 0;
}

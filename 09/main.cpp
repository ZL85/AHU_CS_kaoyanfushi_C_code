//输入10个正整数，其中包含奇数偶数，输出其中每个奇数、奇数的个数及所有奇数之和。

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int nums[10];
    int odd_count = 0, odd_sum = 0;
    printf("请输入10个正整数（可能包含奇数和偶数）：\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
        //如果当前数是奇数，则输出并累加奇数的个数和奇数的总和
        if (nums[i] % 2 != 0)
        {
            odd_count++;
            printf("第%d个奇数是：%d\n", odd_count, nums[i]);
            odd_sum += nums[i];
        }
    }
    printf("共有%d个奇数,它们的和为%d\n", odd_count, odd_sum);
    return 0;
}

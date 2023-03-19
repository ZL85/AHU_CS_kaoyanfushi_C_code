//实现十个同学学习成绩等级划分，90以上A，80-90B，70-79C，60-69D，59以下E。
//要求每输入一个成绩回车之后就显示等级，直至实现十个输入和输出。

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int score;
    for (int i = 1; i <= 10; i++)
    {
        printf("请输入第%d个同学的成绩：", i);
        scanf("%d", &score);
        if (score >= 90 && score <= 100)
        {
            printf("成绩等级为：A\n");
        }
        else if (score >= 80 && score <= 89)
        {
            printf("成绩等级为：B\n");
        }
        else if (score >= 70 && score <= 79)
        {
            printf("成绩等级为：C\n");
        }
        else if (score >= 60 && score <= 69)
        {
            printf("成绩等级为：D\n");
        }
        else if (score >= 0 && score <= 59)
        {
            printf("成绩等级为：E\n");
        }
        else
        {
            printf("输入的成绩无效，请重新输入\n");
            i--; // 让循环次数减一，重新输入该同学的成绩
        }
    }
    return 0;
}

//使用 for 循环来实现输入十个同学的成绩并输出等级。在每次循环中，先提示用户输入该同学的成绩，
//然后使用 scanf 函数读入该成绩。然后使用 if - else 语句来判断该成绩的等级，并输出相应的信息。
//如果输入的成绩无效（即不在0~100之间），则让循环次数减一，重新输入该同学的成绩。

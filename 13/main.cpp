//定义一个单调栈，每次整数n入栈时，如果栈顶元素大于n，则栈顶元素出栈，
//并且继续判断栈顶元素是否大于n，大于则出栈，重复操作，
//直到栈顶元素不大于n，n入栈，然后输出栈中所有元素，结束。
//类似于插入排序，边输入边入栈，用数组维护栈。
//第一行输入一个整数（0 < n < 100000），表示待入栈的元素个数
//第二行输入n个待入栈的数

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 100000
int stack[MAX_SIZE]; // 声明栈数组
int top = -1; // 栈顶指针，初始化为-1
void push(int x) // 入栈操作
{
    while (top >= 0 && stack[top] > x) // 如果栈非空且栈顶元素大于x
    { 
        top--; // 栈顶元素出栈
    }
    stack[++top] = x; // x入栈
}
void print_stack() // 输出栈中所有元素
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("请输入待入栈元素个数：\n");
    scanf("%d", &n); // 输入元素个数
    printf("请输入待入栈元素：\n");
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x); // 输入待入栈的数
        push(x); // 执行入栈操作
    }
    printf("输入完毕后栈中元素：\n");
    print_stack(); // 输出栈中所有元素
    return 0;
}
//声明一个大小为MAX_SIZE的栈数组和一个栈顶指针top，初始化为 - 1。
//定义push函数，用于执行入栈操作。
//当栈非空且栈顶元素大于待入栈的数时，不断将栈顶元素出栈，直到栈顶元素不大于待入栈的数。然后将待入栈的数入栈。
//定义print_stack函数，用于输出栈中所有元素。
//在main函数中，先输入待入栈的元素个数n，然后循环输入n个待入栈的数，每输入一个数就执行一次入栈操作。
//最后调用print_stack函数，输出栈中所有元素。
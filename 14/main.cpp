//输入两个整数n, m(0 < n, m < 100000)，第一个整数可以执行乘2、减1、加1三种操作的任意一种，
//求n到m至少要多少次这样的操作。
//每次可以进行三个操作中的其中一个，问题可以转换为单源最短路径问题：
//每次可以走三个方向，求最短出口。用队列实现bfs，能比较完善的解决此类问题，
//但是由于队列需要存储出口之前的所有路径，空间冗余度较大。

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000
typedef struct Node
{
    int value;  // 当前的数值
    int step;   // 当前的步数
} Node;
int visited[MAX];  // 标记数组，用于记录数字是否已经被访问过
int bfs(int n, int m)
{
    Node queue[MAX];  // 队列
    int front = 0, rear = 0;  // 队列的头尾指针
    queue[rear].value = n; //将起始数字n加入队列，并将其标记为已访问
    queue[rear].step = 0;
    rear++;
    visited[n] = 1;
    while (front < rear)//开始循环
    {
        Node cur = queue[front];//每次从队列的头部取出一个数字进行操作，并将操作后的数字加入队列
        front++;
        if (cur.value == m)//如果队列中的数字等于目标数字m，则说明已经找到了最少操作数，返回其对应的步数
        {
            return cur.step;
        }
        // 枚举当前数字的三种变换方式
        int next[3] = { cur.value * 2, cur.value - 1, cur.value + 1 };
        for (int i = 0; i < 3; i++)
        {
            // 如果变换后的数字不越界，并且没有被访问过，则加入队列
            if (next[i] >= 0 && next[i] <= MAX - 1 && !visited[next[i]])
            {
                visited[next[i]] = 1;
                Node tmp = { next[i], cur.step + 1 };
                queue[rear] = tmp;
                rear++;
            }
        }
    }
    // 如果队列已经为空，但是仍然没有找到目标数字，那么说明无解
    return -1;
}
int main()
{
    int n, m;
    printf("请输入n和m：\n");
    scanf("%d %d", &n, &m);
    printf("n到m至少要%d次操作\n", bfs(n, m));
    return 0;
}
//在这个程序中，我们使用一个队列来存储需要进行变换的数字。
//每次从队列中取出一个数字进行操作，并将操作后的数字加入队列。
//为了避免重复访问同一个数字，我们使用一个标记数组visited来记录数字是否已经被访问过。
//在程序开始时，我们将起始数字n加入队列，并将其标记为已访问。
//然后，我们开始循环，每次从队列的头部取出一个数字进行操作，并将操作后的数字加入队列。
//如果队列中的数字等于目标数字m，则说明已经找到了最少操作数，返回其对应的步数。
//如果队列已经为空，但是仍然没有找到目标数字，那么说明无解，返回 - 1。
//需要注意的是，在进行数字变换时，我们需要先判断变换后的数字是否越界（小于0或大于等于MAX），如果越界则不进行操作。
//同时，我们还需要注意在队列中存储的是节点Node类型，而不是数字本身，节点中包含了当前的数字值和执行操作的步数。
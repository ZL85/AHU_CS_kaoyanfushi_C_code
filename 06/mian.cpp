//ʵ��ʮ��ͬѧѧϰ�ɼ��ȼ����֣�90����A��80-90B��70-79C��60-69D��59����E��
//Ҫ��ÿ����һ���ɼ��س�֮�����ʾ�ȼ���ֱ��ʵ��ʮ������������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int score;
    for (int i = 1; i <= 10; i++)
    {
        printf("�������%d��ͬѧ�ĳɼ���", i);
        scanf("%d", &score);
        if (score >= 90 && score <= 100)
        {
            printf("�ɼ��ȼ�Ϊ��A\n");
        }
        else if (score >= 80 && score <= 89)
        {
            printf("�ɼ��ȼ�Ϊ��B\n");
        }
        else if (score >= 70 && score <= 79)
        {
            printf("�ɼ��ȼ�Ϊ��C\n");
        }
        else if (score >= 60 && score <= 69)
        {
            printf("�ɼ��ȼ�Ϊ��D\n");
        }
        else if (score >= 0 && score <= 59)
        {
            printf("�ɼ��ȼ�Ϊ��E\n");
        }
        else
        {
            printf("����ĳɼ���Ч������������\n");
            i--; // ��ѭ��������һ�����������ͬѧ�ĳɼ�
        }
    }
    return 0;
}

//ʹ�� for ѭ����ʵ������ʮ��ͬѧ�ĳɼ�������ȼ�����ÿ��ѭ���У�����ʾ�û������ͬѧ�ĳɼ���
//Ȼ��ʹ�� scanf ��������óɼ���Ȼ��ʹ�� if - else ������жϸóɼ��ĵȼ����������Ӧ����Ϣ��
//�������ĳɼ���Ч��������0~100֮�䣩������ѭ��������һ�����������ͬѧ�ĳɼ���
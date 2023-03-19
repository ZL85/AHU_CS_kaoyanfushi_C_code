//输入任意一行字符，输出每个单词，输出每个单词的长度，输出最长的单词（如果有多个长度一样的最长单词，全部输出）。
//相邻的两个单词之间用一个和多个空格隔开。

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000]; //定义了一个字符串变量 str，用于存储输入的字符串。
    printf("请输入一行字符：\n");
    fgets(str, 1000, stdin); //使用 fgets 函数读入一行字符串。

    int len = strlen(str); //定义了变量 len，表示输入字符串的长度。
    int word_len = 0, max_len = 0;//定义了变量 word_len，表示当前正在处理的单词的长度。定义了变量 max_len，表示最长单词的长度。
    char max_word[100] = {NULL}; //定义了字符串变量 max_word，用于存储最长的单词。

    printf("每个单词和它的长度分别为：\n");
    //使用一个循环遍历输入字符串的每一个字符。
    for (int i = 0; i < len; i++)
    {   //如果当前字符不是空格或换行符，说明正在处理一个单词，将其输出，并将单词长度加1。
        if (str[i] != ' ' && str[i] != '\n')
        {
            printf("%c", str[i]);
            word_len++;
        }
        else//如果当前字符是空格或换行符，说明一个单词处理完毕，将其长度输出，并判断是否是最长的单词。
        {
            printf("\t%d\n", word_len);
            if (word_len > max_len)//如果当前单词长度大于最长单词的长度，则更新最长单词和最长单词的长度。
            {
                max_len = word_len;
                strncpy(max_word, &str[i - word_len], word_len);
                max_word[word_len] = '\0';
            }
            else if (word_len == max_len)//如果当前单词长度等于最长单词的长度，则将其追加到最长单词后面。
            {
                max_word[strlen(max_word)] = ' ';
                strncpy(&max_word[strlen(max_word)], &str[i - word_len], word_len);
            }
            word_len = 0;
        }
    }
    printf("最长的单词是：%s", max_word);//最后输出最长的单词。
    return 0;
}

//首先，定义了一个字符串变量 str，用于存储输入的字符串。
//使用 fgets 函数读入一行字符串。
//定义了变量 len，表示输入字符串的长度。
//定义了变量 word_len，表示当前正在处理的单词的长度。
//定义了变量 max_len，表示最长单词的长度。
//定义了字符串变量 max_word，用于存储最长的单词。
//使用一个循环遍历输入字符串的每一个字符。
//如果当前字符不是空格或换行符，说明正在处理一个单词，将其输出，并将单词长度加1。
//如果当前字符是空格或换行符，说明一个单词处理完毕，将其长度输出，并判断是否是最长的单词。
//如果当前单词长度大于最长单词的长度，则更新最长单词和最长单词的长度。
//如果当前单词长度等于最长单词的长度，则将其追加到最长单词后面。
//最后输出最长的单词。

//isalpha函数：检测某个字符是否是字母，是则返回非0值，否则返回0。
//strlen函数：计算字符串的长度。

//strncpy函数：用于复制一个字符串的前n个字符到另一个字符串中。
//char* strncpy(char* dest, const char* src, size_t n);
//dest：指向目标字符串的指针，它应该有足够的空间来容纳从源字符串复制过来的字符。
//src：指向源字符串的指针。
//n：要复制的字符数。
//strncpy() 函数将源字符串 src 中的前 n 个字符复制到目标字符串 dest 中。如果 src 的长度小于 n，则在 dest 的剩余空间中填充空字符（\0）以使 dest 的总长度为 n。
//但需要注意的是，strncpy() 不能保证目标字符串 dest 以空字符结尾，如果源字符串 src 的长度大于或等于 n，则 dest 不会以空字符结尾。
//因此，在使用 strncpy() 复制字符串时，应该确保目标字符串具有足够的空间，并且在复制后手动添加一个空字符来确保字符串以空字符结尾。
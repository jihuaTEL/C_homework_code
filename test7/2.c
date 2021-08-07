#include<stdio.h>
int strcount(char *s)
{
    int count=0;
    while (*s!='\0')
    {
        count++;
        s++;
    }
    return count;
}
int main()
{
    char str[100];
    printf("请输入字符串：");
    scanf("%s",str);
    printf("str的长度为：%d",strcount(str));
    return 0;
}

#include<stdio.h>
int main()
{
    char a;
    printf("请输入一个字符\n");
    scanf( "%c",&a);
    if (a >= '0'&&a <= '9')
    {
        printf("它是一个数字字符\n");
    }
    else if(a >= 'A'&&a <= 'Z')
    {
        printf("它是一个大写字母\n");
    }
    else if(a >= 'a' &&a <= 'z')
    {
        printf("它是一个小写字母\n");
    }
    else if(a == ' ')
    {
        printf("它是一个空格\n");
    }
    else
    {
        printf("它是一个其他字符\n");
    }
    return 0;
}
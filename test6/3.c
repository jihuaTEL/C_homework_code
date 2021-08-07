#include<stdio.h>
#include<string.h>
void reverse(char s[])
{
    int i,j,len=strlen(s);
    char t;
    for (i=0,j=len-1; i<len/2; i++,j--)
    {
        t = s[i];
        s[i]=s[j];
        s[j]=t;
    }
}
int main()
{
    char s[50];
    printf("请输入一串字符；\n");
    gets(s);
    printf("反序后结果为；\n");
    reverse(s);
    puts(s);
    return 0;
}

#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0;
    char s[100];
    char *p;
    p=s;
    printf("请输入一串字符：\n");
    gets(s);
    while (*p!='\0')
    {
       if (*p>='A'&&*p<='Z')
       a++;
       else if(*p>='a'&&*p<='z')
       b++;
       else if (*p>='0'&&*p<='9')
       c++;
       else if(*p==' ')
       d++;
       else
       {e++;}
       p++;
    }
    printf("大写字母：%d\t小写字母：%d\t数字：%d\t空格：%d\t其他字符：%d\n",a,b,c,d,e);
    return 0;
}

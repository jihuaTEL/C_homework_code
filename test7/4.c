#include<stdio.h>
int main()
{
    char str1[100]="hello",str2[100]="world";
    char *p,*q;
    p=str1;
    q=str2;
    while (*p!='\0'&&*q!='\0')
    {
        if (*p==*q)
        {
            printf("相同位置的相同的字符为：%c",*p);
        }
        p++;
        q++;
    }
    
    return 0;
}

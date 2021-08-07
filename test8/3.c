#include<stdio.h>
#define N 20
int strcmp(char *p1,char *p2)
{
    int num=0;
    for (int i = 0; i < N; i++)
    {
        if (p1[i]!=p2[i])
        {
            return 1;
        }
        else if (p1[i]=='\0'&&p2[i]=='\0')
        {
            return 0;
        }
    }
}

int main()
{
    int m;
    char str1[N],str2[N],*p1,*p2;
    printf("请输入两个字符串:\n");
    scanf("%s",str1);
    scanf("%s",str2);
    p1=&str1[0];
    p2=&str2[0];
    m=strcmp(str1,str2);
    m==0?printf("两个字符串相等；"):printf("两个字符串不相等；");
    return 0;
}

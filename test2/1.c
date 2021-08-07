#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入一个数");scanf( "%d" ,&a);
    if ( a<0)
    {
        b = -a;
        printf( "%d",b);
    }
    else
        printf("%d",a);
    return 0;
}
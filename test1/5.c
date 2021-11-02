#include <stdio.h>
int main()
{
    int a,b,m;
    printf("请输入a: ");
    scanf( "%d" ,&a);
    printf("请输入b: ");
    scanf("%d",&b);
    m = a;
    a = b;
    b = m;
    printf( "a = %d,b = %d",a,b);
    return 0;
}
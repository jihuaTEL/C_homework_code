#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入整数a: ");
    scanf( "%d",&a);
    printf("请输入整数b: ");
    scanf("%d",&b);
    printf("请输入整数c: ");
    scanf( "%d",&c);
    float d = a+b+c;
    float m = d/3;
    printf("保留三位小数的平均数为%.3f",m);
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入一个数\n" );scanf("%d",&a);
    b = a%2;
    if (b == 0)
    {
        printf("这个数是偶数\n" );
    }
    else if (b == 1)
    {
        printf("这个数是奇数\n");
    }
    return 0;
}
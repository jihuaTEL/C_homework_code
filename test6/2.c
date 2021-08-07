#include<stdio.h>
int zdgys(int a,int b)
{
    int max,num1;
    max=a>b?a:b;
    for (int i = 1; i < max; i++)
    {
        if(a%i==0&&b%i==0)
            num1=i;
    }
    return num1;
}
int zxgbs(int a,int b)
{
    int num2;
    num2 = a*b/zdgys(a,b);
    return num2;
}
int main()
{
    int a,b;
    printf("请输入第一个数：");
    scanf("%d",&a);
    printf("请输入第二个数：");
    scanf("%d",&b);
    printf("最大公约数是%d\n",zdgys(a,b));
    printf("最小公倍数是%d\n",zxgbs(a,b));
    return 0;
}

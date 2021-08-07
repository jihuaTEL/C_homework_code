#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,m;
    printf("请输入一个实数:");
    scanf( "%f",&m);
    a = pow(m,1.0/2);
    b = pow(m,1.0/3);
    printf("平方根为%f\n",a);
    printf("立方根为%f\n",b);
    return 0;
}
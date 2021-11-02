#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,m;
    printf("请输入一个实数:");
    scanf("%d" ,&m);
    a = pow(m, 2);
    b = pow(m, 3);
    c = pow(m, 5);
    printf("平方为%d\n",a);
    printf("立方为%d\n",b);
    printf("5次方为%d\n",c);
    return 0;
}

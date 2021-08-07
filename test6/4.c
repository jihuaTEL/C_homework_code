#include<stdio.h>
double Legendre(int n,int x)
{
    double pn;
    if (n==0)
        pn=1;
    if (n==1)
        pn=x;
    if(n>=1)
        pn=((2*n-1)*x*Legendre(n-1,x)-(n-1)*Legendre(n-2,x))/n;
    return pn;
}
int main()
{
    int x,n;
    printf("请输入n的值：");
    scanf("%d",&n);
    printf("请输入x的值：");
    scanf("%d",&x);
    printf("n阶勒让德多项式的值为：%f",Legendre(n,x));
    return 0;
}

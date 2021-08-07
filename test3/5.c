#include<stdio.h>
int main()
{
    int i,num;
    float a,b,sn;
    a=1;
    b=2;
    for (i = 1; i < 20; i++)
    {
        sn=sn+b/a;
        num=b;
        b=a+b;
        a=num;
    }
    printf("sn=%f",sn);
    return 0;
}

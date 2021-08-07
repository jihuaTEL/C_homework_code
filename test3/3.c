#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    double d=1,sum=0,pi;
    for (a=1,b=0;d>=pow(10,-6);a+=2,b++)
    {
        d=pow(-1,b)*1.0/a;\
        sum=sum+d;
        if (d<0)
        {
            d=-d;
        }
    }
    pi=sum*4;
    printf("pi=%f",pi);
    return 0;
}

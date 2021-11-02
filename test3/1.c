#include<stdio.h>
int main()
{
    int i,sum_1=0,sum_2=0,k;
    float sum=0,sum_3=0;
    for (k=1;k<=100;k++)
    {
        sum_1=sum_1+k;
    }
    for (k=1;k<=50;k++)
    {
        sum_2=sum_2+k*k;
    }
    for (k=1;k<=10;k++)
    {
        sum_3=sum_3+1.0/k;
    }
    sum=0;
    sum=sum_1+sum_2+sum_3;
    printf("sum=%f",sum);
    return 0;
}

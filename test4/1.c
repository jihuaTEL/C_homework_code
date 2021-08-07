#include<stdio.h>
int main()
{
    int temp,i,a[5]={8,6,5,4,1};
    for (i = 0; i < 3; i++)
    {
        temp=a[i];
        a[i]=a[4-i];
        a[4-i]=temp;
    }
    for (i = 0; i < 5; i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    int i,n,min,a[10]={1,3,2,4,6,5,9,7,8,0};
    for (i = 0; i < 10; i++)
    {
        for (n = i+1; n < 10; n++)
        {
            if (a[i]>a[n])
            {
                min=a[n];
                a[n]=a[i];
                a[i]=min;
            }
            
        }
        
    }
    for (i = 0; i < 10; i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    
    return 0;
}
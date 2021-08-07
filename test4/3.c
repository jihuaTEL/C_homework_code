#include<stdio.h>
int main()
{                
    int a[10]={0,1,2,3,4,6,7,8,9};
    int temp,i=0,j=0;
    printf("请输入一个数\n");
    scanf("%d",&temp);
    for(i=8;i>=0;i--)
    {
       if(temp<a[i])
       {
            a[i+1] = a[i];
       }
       else
       {
             a[i+1] = temp;
             break;      
       }
 
    }
    for(i=0;i<10;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);              
     }
 
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,sn=0,i,b;
    printf("请输入n\n");
    scanf("%d",&n);
    printf("请输入a\n");
    scanf("%d",&a);
    for (i=n,b=0;i>0;i--,b++)
    {
        sn=sn+a*pow(10,b)*i;
    }
    printf("sn=%d",sn);
    return 0;
}

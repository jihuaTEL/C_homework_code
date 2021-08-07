#include<stdio.h>
int main()
{
    int a,b,c,temp;
    int *ap=&a,*bp=&b,*cp=&c;
    printf("请输入第一个数：");
    scanf("%d",&a);
    printf("请输入第二个数：");
    scanf("%d",&b);
    printf("请输入第三个数：");
    scanf("%d",&c);
    if (a>b)
    {
        temp=*bp;
        *bp=*ap;
        *ap=temp;
    }
    if (a>c)
    {
        temp=*cp;
        *cp=*ap;
        *ap=temp;
    }
    if (b>c)
    {
        temp=*cp;
        *cp=*bp;
        *bp=temp;
    }
    printf("%d %d %d",*ap,*bp,*cp);
    return 0;
}

#include<stdio.h>
int main()
{
    int a;
    printf("请输入成绩\n");
    scanf("%d",&a);
    if(a < 0||a>100)
    {
    printf("请输入正确的百分制分数");
    }
    else
    {
        if (a < 60)
        {
            printf("等级为E");
        }
        if (a>=60 , a<69)
        {
            printf("等级为D");
        }
        if (a >= 70 , a < 79)
        {
            printf("等级为C");
        }
        if (a >= 80 , a < 89)
        {
            printf("等级为B");
        }
        if (a >= 90)
        {
            printf("等级为A");
        }
    }
    return 0;
}
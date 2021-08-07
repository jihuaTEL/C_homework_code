#include<stdio.h>
int main()
{
	int n;
	char *p[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	printf("请输入月份：\n");
	scanf("%d",&n);
    if (n>=1&&n<=12)
    {
        printf("英文是：%s\n",*(p + n - 1));
    }
    else
    {
        printf("请输入正确的月份！");
    }
	
}

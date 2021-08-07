#include<stdio.h>
#define N 5
//逆序函数
int reprintf(int *p)
{
    int i,temp;
	
	for(i = 0;i < N/2;i++)
	{
		temp = *(p + i);
		*(p + i) = *(p + N - 1 - i);
		*(p + N - 1 - i) = temp;
	} 
}
//主函数
int main()
{
    int a[N];
    int *p=a;
    printf("请输入数字：\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    reprintf(p);
    printf("输出结果：\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

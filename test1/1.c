#include <stdio.h>
int main()
{
    int a,b;
    printf("请输入长:");
    scanf("%d",&a);
    printf("请输入宽:");
    scanf( "%d",&b );
    int c = a + b;
    int s = a* b;
    printf("周长为%d",c);
    printf("面积为%d",s);
    return 0;
}

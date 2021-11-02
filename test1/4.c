#include <stdio.h>
int main()
{
    int a,b,c,m;
    printf("请输入一个三位数:");
    scanf( "%d" ,&m);
    a = m/100;
    b = (m-a*100)/10;
    c = m-a*100-b*10;
    printf("百位是%d十位是%d个位是%d\n",a,b,c);
    printf("反转后输出为:%d",100*c+10*b+a);
    return 0;
}
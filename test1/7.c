#include <stdio.h>
#include <math.h>
int main()
{
    float PI = 3.141592;
    int a;
    float s,c;
    printf("请输入一个正整数:");
    scanf("%d" ,&a);
    s = sin(a/180* PI);
    c = cos(a/180 * PI);
    printf("正弦为%f，余弦为%f",s,c);
    return 0;
}

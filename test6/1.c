#include<stdio.h>
int sushu(int a)
{
    int i,c;
    for (i = 2; i < a; i++)
    {
        if (a%i==0)
            c++;
    }
    if (c==0)
        printf("这个数是素数\n");
    else
        printf("这个数不是素数\n");
    return 0;
}
int main()
{
    sushu(15);
    sushu(17);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,num;
    for (a=1;a<=9;a++)
    {
        for (b=0;b<=9;b++)
        {
            for (c=0;c<=9;c++)
            {
                num=a*100+b*10+c;
                d=pow(a,3)+pow(b,3)+pow(c,3);
                if (num==d)
                {
                    printf("%d\n",num);
                }
                
            }
            
        }
        
    }
    
    return 0;
}

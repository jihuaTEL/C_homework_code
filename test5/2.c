#include<stdio.h>
int main()
{
    char string1[100]="Hello",string2[100]="World";
    int i=0;
    while (string1[i]!='\0')
    {
        i++;
    }
    for (int j = 0;string2[j]!='\0'; i++,j++)
    {
        string1[i]=string2[j];
    }
    printf("%s\n",string1);
    return 0;
}

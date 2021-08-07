#include<stdio.h>
int main()
{
    char string1[100]="Hello",string2[100]="World";
    int i=0;
    while (string2[i]!='\0')
    {
        string1[i]=string2[i];
        i++;
    }
    printf("%s\n",string1);
    return 0;
}
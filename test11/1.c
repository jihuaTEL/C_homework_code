#include<stdio.h>
 
int main()
{
    char str[100];
    FILE *p;
    int i,len=0;
    printf("输入一串英文字符:\n"); 
    while((str[len]=getchar())!='!')
      {  
      len++; 
      }
    for(i=0;i<len;i++)
      if(str[i]>='a'&&str[i]<='z')
        str[i]-=32;
    p=fopen("test.txt","w");
    fputs(str,p);
    fclose(p);

    return 0;
}

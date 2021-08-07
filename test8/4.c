#include <stdio.h>
#define N 100
void copy_m(char *p1, char *p2, int m)
{
	char *temp=p1+m-1;
	while(*temp!='\0')
    {
		*p2++ = *temp++;
	}
}


int main()
{
	char str1[N], *p1=str1, str2[N], *p2=str2;
	int m;
	printf("请输入一个字符串：");
	gets(p1);
	printf("从第几个字符开始复制？\n");
	scanf("%d", &m); 
	copy_m(p1, p2, m);
	printf("\n复制得到的字符串为:\n%s", p2);
	return 0;
 } 
 
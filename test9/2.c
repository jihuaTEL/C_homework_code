#include<stdio.h>
#include<string.h>
#define N 5
struct Candidate
{
	char name[10];
	int count;
};
int main()
{
	struct Candidate arr[3] = {
		"zhang",0,"li",0,"wang",0
	};
	int i = 0, j = 0;
	char s[10];
	int wrong = 0;
	int flag = 0;
	for (i = 0; i < N; i++)
	{
		flag = 0;
		printf("选民%d请输入:", i + 1);
		scanf("%s", s);
		for (j = 0; j < 3; j++)
		{
			if (strcasecmp(arr[j].name, s) == 0)
				{
				    arr[j].count++;
                    flag = 1;
				}
		}
		if (flag == 0)
		{
			wrong++;
		}
	}
	printf("选举结果:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%8s:%d\n", arr[i].name, arr[i].count);
	}
		printf("废票:%d\n", wrong);
}

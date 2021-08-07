#include <stdio.h>
#define N 5
struct student
{
	int num;
	char name[20];
	float score[3];
	float aver;
}stu[N]; 
int main()
{
	int i;
	printf("请输入学生学号，姓名，3门课程成绩（以空格隔开）\n");
	for(i=0;i<N;i++)
	{
		scanf("%d%s%f%f%f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
	}
	FILE *fp;
	printf("结果如下:\n");
	printf("学号 姓名 成绩1 成绩2 成绩3 平均成绩\n");
	for(i=0;i<N;i++)
	{
		fread(&stu[i],sizeof(struct student),1,fp);
		printf("%-2d%5s%7.1f%7.1f%7.1f%7.1f\n",stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].aver);
	}
	fclose(fp);
	return 0;
}

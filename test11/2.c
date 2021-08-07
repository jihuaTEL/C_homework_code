#include <stdio.h>
struct student
{
	int num;
	char name[10];
	float score[3];
	float aver;
}stu[5];

int main()
{
	int i;
	printf("请输入学号、姓名、三门课程成绩:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
	}
	FILE *fp;
    fp=fopen("student","wb");
    fclose(fp);
    printf("--------------------\n");
//读取文件以验证
	printf("读取文件:\n");
	printf("学号 姓名 成绩1 成绩2 成绩3 平均分\n");
	for(i=0;i<5;i++)
	{
		fread(&stu[i],sizeof(struct student),1,fp);
		printf("%-2d%5s%7.1f%7.1f%7.1f%7.1f\n",stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].aver);
	}
	fclose(fp);
	return 0;
}

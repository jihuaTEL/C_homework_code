#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 3

struct Employee
{   
	char name[10];
	int num;
	char sex[5];
	int age;
	char adress[10];
	int salary;
	char health[10];
	char edu[10];
}emp1[SIZE];

struct Wage
{
	char name[10];
    int salary;
}emp2[SIZE];

void save1()
{
	FILE *fp;
	int i;
	if((fp=fopen("employee.dat","wb"))==NULL)
	{
		printf("can't open file!\n");
		exit(0);
	}
	for(i=0;i<SIZE;i++)
	{
		if(fwrite(&emp1[i],sizeof(struct Employee),1,fp)!=1)
			printf("file write error\n");
	}
	fclose(fp);
}

void save2()
{
	FILE *fp;
	int i;
	if((fp=fopen("wage.dat","wb"))==NULL)
	{
		printf("can't open file!\n");
		exit(0);
	}
	for(i=0;i<SIZE;i++)
	{
		if(fwrite(&emp2[i],sizeof(struct Wage),1,fp)!=1)
			printf("file write error\n");
	}
	fclose(fp);
}

int main()
{
    FILE *fp;
	int i;
    for(i=0;i<SIZE;i++)
    {	
    	printf("请输入第%d个职工的姓名、职工号、性别、年龄、住址、工资、健康状况、文化程度:\n",i+1);
		scanf("%s%d%s%d%s%d%s%s",emp1[i].name,&emp1[i].num,emp1[i].sex,&emp1[i].age,emp1[i].adress,&emp1[i].salary,emp1[i].edu,emp1[i].health);
		printf("第%d个职工的姓名、职工号、性别、年龄、住址、工资、健康状况、文化程度为:\n",i+1);
		printf("%s %d %s %d %s %d %s %s\n\n",emp1[i].name,emp1[i].num,emp1[i].sex,emp1[i].age,emp1[i].adress,emp1[i].salary,emp1[i].health,emp1[i].edu);
	} 
	save1();
	fp=fopen("employee.dat","rb");
	for(i=0;i<SIZE;i++)
    {
        fread(&emp1[i],sizeof(struct Employee),1,fp);
        strcpy(emp2[i].name,emp1[i].name);
		emp2[i].salary=emp1[i].salary; 
	}
	fclose(fp);
    save2();
    fp=fopen("wage.dat","rb");
    for(i=0;i<SIZE;i++)//验证文件
    {
        fread(&emp2[i],sizeof(struct Wage),1,fp);
        printf("第%d个职工的姓名和工资为:\n",i+1);
		printf("%s %d\n",emp2[i].name,emp2[i].salary);
	}
	fclose(fp);
	return 0;
}

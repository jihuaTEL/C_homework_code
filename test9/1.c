#include<stdio.h>
#define N 3
struct student {
	int num;
	char name[20];
	int score[3];
};
typedef struct student stu;
void print(stu* p) {
	printf("学号\t姓名\t成绩1\t成绩2\t成绩3\n");
	for (int i = 0; i < N; ++i) {
		printf("%d\t", (p + i)->num);
		printf("%s\t", (p + i)->name);
		for (int j = 0; j < 3; ++j) {
			printf("%d\t", (p + i)->score[j]);
		}
		printf("\n");
	}
}
void main() {
	stu arr[N];
	stu* p = arr;
	//输入
	for (int i = 0; i < N; ++i) {
		printf("请输入第%d个学生的信息\n", i + 1);
		printf("请输入学号\n");
		scanf("%d", &(p + i)->num);
		printf("请输入姓名\n");
		scanf("%s", &(p + i)->name);
		for (int j = 0; j < 3; ++j) {
			printf("请输入成绩%d\n", j + 1);
			scanf("%d", &(p + i)->score[j]);
		}
	}
	//输出
	print(p);
}

#include <stdio.h>
typedef struct student
{
	int num;
	char sex[10];
	char name[100];
	int age;
	struct student *next;
} student;

void printList(student *root)
{
	printf("-------------------------------\n");
	while (root != NULL)
	{
		printf("学号:%d, 性别: %s, 姓名: %s, 年龄: %d\n", root->num, root->sex, root->name, root->age);
		root = root->next;
	}
}

int main()
{
	student a[] = { { 2001, "女", "张三", 12 }, { 2002, "女", "李四", 22 }, { 2003, "男", "王五", 15 }, { 2004, "男", "赵六", 16 }, { 2005, "男", "周七", 18 } };
	for (int i = 0; i < 4; i++)
	{
		a[i].next = &a[i + 1];
	}
	a[4].next = NULL;

	printList(&a[0]);

	int n;
	printf("请输入要删除的年龄：\n");
	scanf("%d", &n);
	student *pre = a, *current = a->next, *head;

	head = a;
	while (current != NULL)
	{
		//如果头结点需要删除，则更新头结点
		if (head->age == n)
		{
			pre->next = NULL;
			pre = current;
			current = current->next;
			head = pre;
		}
		else
		{
			//删除节点，重新链接
			if (current->age == n)
			{
				pre->next = current->next;
			}
			pre = current;
			current = current->next;
		}
	}
	printList(head);

	return 0;
}
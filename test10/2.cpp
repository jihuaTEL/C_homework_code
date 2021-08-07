// 在带头节点的单链表中删除一个最大值结点

#include <stdio.h>
#include <stdlib.h>

using namespace std;

// 单链表结构 
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode, *LinkList;

LinkList CreateList_Head(LinkList L,int n);
LinkList CreateList_Tail(LinkList L,int n);
void PrintList(LinkList L);
int MaxList(LinkList L,int n);
int ListDelete(LinkList L,int i,int *e);

// 建立单链表（头插法） 
LinkList CreateList_Head(LinkList L,int n){
	LinkList S;
	int x;
	L = (LNode*)malloc(sizeof(LNode)); //创建头结点 
	L->next = NULL;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		S = (LNode*)malloc(sizeof(struct LNode));
		S->data = x;
		S->next = L->next;
		L->next = S;
	}
	return L;
}

// 建立单链表（尾插法）
LinkList CreateList_Tail(LinkList L,int n){
	int x;
	L = (LNode*)malloc(sizeof(LNode));
	LNode *S,*T = L;
	for(int j=0;j<n;++j){
		scanf("%d",&x);
		S = (LNode*)malloc(sizeof(LNode));
		S->data = x;
		T->next = S;
		T = S;
	}
	T->next = NULL;
	return L;
}

// 输出单链表
void PrintList(LinkList L){
	LinkList p;
	p = L->next;
	printf("当前链表元素为：\n");
	while(p != NULL){
		printf("%d ",p->data);
		p = p->next;
	}
} 

// 寻找单链表最大值的位置 
int MaxList(LinkList L,int n){
	int temp; //利用temp标注最大值位置 
	int MAX;
	LinkList S;
	S = L->next;
	MAX = S->data;
	temp = 0;
	for(int i=0;i<n;i++){
		if(S->data > MAX){
			MAX = S->data;
			temp = i;
		}else{
			MAX = MAX;
		}
		S = S->next;
	}
	return temp;
} 

// 删除链表中元素
int ListDelete(LinkList L,int i,int *e){
	int j = 0;
	LinkList S = L;
	while(S->next&&j<i){
		S = S->next;
		j++;
	}
	LinkList T;
	T = S->next;
	S->next = T->next;
	*e = T->data;
	free(T);
	return 0;
}

int main(){
	LinkList L;
	int n; // 链表元素个数 
	int MAX_address; // 链表元素最大值的位置
	int MAX_value; //链表最大值 
	printf("请输入链表元素个数：\n");
	scanf("%d",&n);
	printf("输入链表中元素：\n");
	L = CreateList_Tail(L,n);
	PrintList(L);
	putchar('\n');
	MAX_address = MaxList(L,n);
	ListDelete(L,MAX_address,&MAX_value);
	printf("当前链表最大值为：\n%d",MAX_value);
	putchar('\n');
	printf("---------------删除后-------------\n");
	PrintList(L);
	return 0;
}

#include <iostream>
using namespace std;
#define Max 10
struct LinkList{
    int data;
    LinkList* next;
};
void CreateLinkList(int a[],int n,LinkList* &head)        //创建一个链表，把a数组中的数据依次放进去
{
    LinkList *p = head;
    for(int i=0;i<n;i++){
        LinkList *q = new LinkList;
        q->data = a[i];
        q->next = NULL;
        p->next = q;
        p = q;
    }
}
void Display(LinkList *&head)    //输出链表
{
    LinkList *p = head->next;
    while(p!=NULL){
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<endl;
}
void invert(LinkList *&head)    //逆置链表处理
{
    LinkList* p = head->next;
    LinkList* pri = NULL;    //之前的节点
    while(p){
        LinkList* q = new LinkList;
        q->data = p->data;    //把当前节点记录下来
        q->next = pri;
        pri = q;
        head->next = q;
        LinkList* t = p;    //当前节点没用了删除掉
        p=p->next;
        delete(t);
    }
}
int main()
{
    int a[Max],n=Max;
    for(int i=0;i<Max;i++)
        a[i] = i+1;
    LinkList *head = new LinkList;
    CreateLinkList(a,n,head);    //将数组a中的元素顺序创建成一个链表
    Display(head);    //输出该链表
    invert(head);    //将该链表逆置处理
    Display(head);    //输出处理后的链表
    return 0;
}
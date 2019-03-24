#ifndef LINKEDLIST_H_INCLUDE
#define LINKEDLIST_H_INCLUDE

typedef struct Lnode
{
    int data;
    struct Lnode *next;                          /*单向链表不需要前置指针*/
}Lnode,*LinkList;                                /*Lnode *==LinkList*/

LinkList initList();                             //链表初始化
int destroyList(LinkList h);                     //销毁链表
int insertList(LinkList p,LinkList q);           //插入链表
int deleteList(LinkList p,int e);                //删除链表
void searchList(LinkList h,int a);               //查找数据
LinkList reverseList(LinkList h);                //反向链表
int isLoopList(LinkList h);                      //判断是否循环链表
LinkList findMidNode(LinkList h);                //寻找链表中点
int showList(LinkList h);                       //遍历链表

#endif // LINKEDLIST_H_INCLUDE

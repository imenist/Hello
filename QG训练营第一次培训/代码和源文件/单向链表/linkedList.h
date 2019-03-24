#ifndef LINKEDLIST_H_INCLUDE
#define LINKEDLIST_H_INCLUDE

typedef struct Lnode
{
    int data;
    struct Lnode *next;                          /*����������Ҫǰ��ָ��*/
}Lnode,*LinkList;                                /*Lnode *==LinkList*/

LinkList initList();                             //�����ʼ��
int destroyList(LinkList h);                     //��������
int insertList(LinkList p,LinkList q);           //��������
int deleteList(LinkList p,int e);                //ɾ������
void searchList(LinkList h,int a);               //��������
LinkList reverseList(LinkList h);                //��������
int isLoopList(LinkList h);                      //�ж��Ƿ�ѭ������
LinkList findMidNode(LinkList h);                //Ѱ�������е�
int showList(LinkList h);                       //��������

#endif // LINKEDLIST_H_INCLUDE

#include <stdio.h>
#include <stdlib.h>

typedef struct Lnode
{
    int data;
    struct Lnode *next;                          /*单向链表不需要前置指针*/
}Lnode,*LinkList;                                /*Lnode *==LinkList*/


/**
 *  @name        : LinkList initList();
 *	@description : initialize an empty linked list with only the head node without value
 *	@param		 : none
 *	@return		 : lhead
 *  @notice      : None
 */
LinkList initList()
{
    int data;
    LinkList lhead=NULL;
    LinkList ltail,lnew;
    printf("Input your data\nThis is the first list\n");
    while(scanf("%d",&data)==1)
    {
        lnew=(LinkList)malloc(sizeof(Lnode));
        if(lhead==NULL)
            lhead=lnew;
        else
            ltail->next=lnew;
        lnew->data=data;
        lnew->next=NULL;
        ltail=lnew;
        printf("next:\n");
    }
    return lhead;
}

/**
 *  @name        : int destroyList(LinkList h)
 *	@description : destroy a linked list, free all the nodes
 *	@param		 : h(the head node)
 *	@return		 : h(the head node)
 *  @notice      : None
 */
 int destroyList(LinkList h)
{
    LinkList p=h;
    while(p!=NULL)
    {
        h=p->next;
        free(p);
        p=h;
    }
    h=NULL;
    printf("your list has been destroy!\n");
    return 1;
}

/**
 *  @name        : int insertList(LinkList p,LinkList q)
 *	@description : insert node q after node p
 *	@param		 : p, q
 *	@return		 : Status
 *  @notice      : None
 */

int insertList(LinkList p,LinkList q)
{
    q->next=p->next;
    p->next=q;
    return 0;
}

/**
 *  @name        : int deleteList(LinkList p,int e)
 *	@description : delete the first node after the node p and assign its value to e
 *	@param		 : p, e
 *	@return		 : Status
 *  @notice      : None
 */

int deleteList(LinkList p,int e)
{
    LinkList q=p;
    e=p->next->data;
    q=p->next;
    p->next=q->next;
    free(q);
    return e;
}


/**
 *  @name        : void searchList(LinkList h,int a)
 *	@description : find the node in the linked list according to e
 *	@param		 : L(the head node), e
 *	@return		 : Status
 *  @notice      : None
 */


void searchList(LinkList h,int a)
{
    LinkList p;
    int i=1,flag=0;
    for(p=h;p!=NULL;p=p->next)
    {
        if(p->data==a)
        {
             flag=1;
             printf("In the %d node\n",i);
        }
        i++;
    }
    if(flag==0)
        puts("not find!");
}

/**
 *  @name        : LinkList reverseList(LinkList h)
 *	@description : reverse the linked list
 *	@param		 : h(the head node)
 *	@return		 : Status
 *  @notice      : None
 */

 LinkList reverseList(LinkList h)
 {
    LinkList p=h,q,h1;
    int flag;
    while(p->next!=NULL)
        p=p->next;
    h1=p;
    while(p!=h)
    {
        flag=1;
        p=h;
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
            flag=0;
        }
        p->next=q;
        q->next=NULL;
        if(flag)
            p->next=NULL;
    }
    return h1;
 }

/**
 *  @name        : int isLoopList(LinkList h)
 *	@description : judge whether the linked list is looped
 *	@param		 : h(the head node)
 *	@return		 : Status
 *  @notice      : None
 */

 int isLoopList(LinkList h)
 {
     int flag=0;
     LinkList p=h->next;
     while(p!=NULL)
     {
         p=p->next;
         if(p==h)
            flag=1;
     }
     if(flag)
        return 1;
     else
        return 0;
 }

/**
 *  @name        : LinkList findMidNode(LinkList h)
 *	@description : find the middle node in the linked list
 *	@param		 : h(the head node)
 *	@return		 : LNode
 *  @notice      : choose to finish
 */

 LinkList findMidNode(LinkList h)
 {
     if(h==NULL)
        return NULL;
     LinkList slow=h,fast=h;
     while(fast&&fast->next)
     {
         fast=fast->next->next;
         slow=slow->next;
     }
     return slow;
 }

 /**
 *  @name        : int showList(LinkList h)
 *	@description : show the value of the whole list
 *	@param		 : h(the head node)
 *	@return		 : c
 *  @notice      : None
 */

 int showList(LinkList h)
 {
     int c=0;
     while(h)
     {
         printf("%d\t",h->data);
         h=h->next;
         c++;
     }
     printf("\n");
     return c;
 }



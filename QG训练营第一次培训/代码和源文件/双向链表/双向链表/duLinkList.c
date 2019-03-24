#include <stdio.h>
#include <stdlib.h>

typedef struct Lnode
{
    int data;
    struct Lnode *pre;                           /*Ç°ÖÃÖ¸Õë*/
    struct Lnode *next;
}Lnode,*LinkList;                                /*Lnode *==LinkList*/


/**
 *  @name        : LinkList initList_DuL()
 *	@description : initialize an empty linked list with only the head node
 *	@param		 : None
 *	@return		 : Status
 *  @notice      : None
 */

LinkList initList_DuL()
{
    int data;
    LinkList lhead=NULL;
    LinkList ltail,lnew;
    printf("Input your data\nThis is the first list\n");
    while(scanf("%d",&data)==1)
    {
        lnew=(LinkList)malloc(sizeof(Lnode));
        if(lhead==NULL)
        {
            lhead=lnew;
            lnew->pre=NULL;
        }
        else
        {
            ltail->next=lnew;
            lnew->pre=ltail;
        }
        lnew->data=data;
        lnew->next=NULL;
        ltail=lnew;
        printf("next:\n");
    }
    return lhead;
}

/**
 *  @name        : void destroyList_DuL(LinkList h)
 *	@description : destroy a linked list
 *	@param		 : h(the head node)
 *	@return		 : None
 *  @notice      : None
 */

void destroyList_DuL(LinkList h)
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
}

/**
 *  @name        : LinkList insertBeforeList_DuL(LinkList p,LinkList q)
 *	@description : insert node q before node p
 *	@param		 : p, q
 *	@return		 : status
 *  @notice      : None
 */

 LinkList insertBeforeList_DuL(LinkList p,LinkList q)
{
    q->pre=p->pre;
    if(p->pre!=NULL)
        p->pre->next=q;
    p->pre=q;
    q->next=p;
    if(q->pre==NULL)
        return q;
    else
    {
        while(p->pre)
            p=p->pre;
        return p;
    }
}

/**
 *  @name        : int insertAftereList_DuL(LinkList p,LinkList q)
 *	@description : insert node q after node p
 *	@param		 : p, q
 *	@return		 : status
 *  @notice      : None
 */

int insertAftereList_DuL(LinkList p,LinkList q)
{

    q->pre=p;
    q->next=p->next;
    p->next=q;
    return 1;
}

/**
 *  @name        : int deleteList_DuL(LinkList p,int e)
 *	@description : delete the first node after the node p and assign its value to e
 *	@param		 : p, e
 *	@return		 : status
 *  @notice      : None
 */

int deleteList_DuL(LinkList p,int e)
{
    LinkList q=p;
    e=p->next->data;
    q=p->next;
    q->pre=p->pre;
    q->pre->next=q;
    free(p);
    return 1;
}

/**
 *  @name        : int TraverseList_DuL(LinkList h)
 *	@description : traverse the linked list and call the funtion visit
 *	@param		 : h(the head node)
 *	@return		 : c
 *  @notice      : None
 */

 int TraverseList_DuL(LinkList h)
 {
     int c=0;
     while(h)
     {
         printf("%d\t",h->data);
         h=h->next;
         c++;
     }
     puts("");
     return c;
 }


#ifndef DULINKLIST_H_INCLUDE
#define DULINKLIST_H_INCLUDE

typedef struct Lnode
{
    int data;
    struct Lnode *pre;                           /*«∞÷√÷∏’Î*/
    struct Lnode *next;
}Lnode,*LinkList;                                /*Lnode *==LinkList*/

LinkList initList_DuL();
void destroyList_DuL(LinkList h);
LinkList insertBeforeList_DuL(LinkList p,LinkList q);
int insertAftereList_DuL(LinkList p,LinkList q);
int deleteList_DuL(LinkList p,int e);
int TraverseList_DuL(LinkList h);

#endif // DULINKLIST_H_INCLUDE

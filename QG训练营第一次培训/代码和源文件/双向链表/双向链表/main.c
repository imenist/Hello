#include <stdio.h>
#include <stdlib.h>
#include "duLinkList.h"

int main()
{
   LinkList h;
   h=NULL;
   int i=1,a,c;
   while(i)
   {
       printf("1-initList_DuL\t\t2-destroyList_DuL\n");
       printf("3-insertBeforeList_DuL\t4-insertAftereList_DuL\n");
       printf("5-deleteList_DuL\t6-TraverseList_DuL\n");
       printf("0-exit\n");
       scanf("%d",&i);
   switch(i)
   {
       case 1:h=initList_DuL(h);
              if(a)
                puts("Success!");
              c=TraverseList_DuL(h);
              break;
       case 2:destroyList_DuL(h);
              break;
       case 3:
           {
              LinkList q,p=h;
              q=(LinkList)malloc(sizeof(Lnode));
              puts("Input your number:(This is a new node)");
              scanf("%d",&q->data);
              c=TraverseList_DuL(h);
              puts("Input the place you want to insert:");
              scanf("%d",&a);
              if(!a||a>c)
              {
                  puts("error!");
                  break;
              }
              for(i=1;i<a;i++)
                p=p->next;
              h=insertBeforeList_DuL(p,q);
              c=TraverseList_DuL(h);
              break;
           }
       case 4:
           {
              LinkList q,p=h;
              q=(LinkList)malloc(sizeof(Lnode));
              puts("Input your number:(This is a new node)");
              scanf("%d",&q->data);
              c=TraverseList_DuL(h);
              puts("Input the place you want to insert:");
              scanf("%d",&a);
              if(!a||a>c)
              {
                  puts("error!");
                  break;
              }
              for(i=1;i<a;i++)
                p=p->next;
              a=insertAftereList_DuL(p,q);
              if(a)
                puts("Success!");
              c=TraverseList_DuL(h);
              break;
           }
       case 5:
           {
              LinkList p=h;
              int e=0;
              c=TraverseList_DuL(h);
              puts("Input the place you want to delete:");
              scanf("%d",&a);
              if(!a||a>c)
                puts("ERROR!");
              for(i=1;i<a;i++)
                p=p->next;
              a=deleteList_DuL(p,e);
              if(a)
                puts("Success!");
              c=TraverseList_DuL(h);
              break;
           }
              break;
       case 6:c=TraverseList_DuL(h);
              break;
       case 0:puts("bye!");
              break;
       default:puts("error!Input again!");
   }
   }
}

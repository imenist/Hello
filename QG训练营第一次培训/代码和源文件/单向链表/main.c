#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


int main()
{
   LinkList h,b;
   h=NULL;
   int i=1,a,c;
   while(i)
   {
       printf("1-initList\t2-destroyList\n");
       printf("3-insertList\t4-deleteList\n");
       printf("5-searchList\t6-reverseList\n");
       printf("7-isLoopList\t8-findMidNode\n");
       printf("9-showList\n");
       printf("0-exit\n");
       scanf("%d",&i);
   switch(i)
   {
       case 1:h=initList();
              c=showList(h);
              break;
       case 2:i=destroyList(h);
              break;
       case 3:
           {
              LinkList q,p=h;
              q=(LinkList)malloc(sizeof(Lnode));
              puts("Input your number:(This is a new node)");
              scanf("%d",&q->data);
              c=showList(h);
              puts("Input the place(after it) you want to insert:");
              scanf("%d",&a);
              if(!a||a>c)
              {
                  puts("error!");
                  break;
              }
              for(i=1;i<a;i++)
                p=p->next;
              insertList(p,q);
              c=showList(h);
              break;
           }
       case 4:
           {
              LinkList p=h;
              int e=0;
              c=showList(h);
              puts("Input the node you want to delete(This will delete the next node that you input):");
              scanf("%d",&a);
              if(!a||a>c)
              {
                  puts("error!");
                  break;
              }
              for(i=1;i<a;i++)
                p=p->next;
              e=deleteList(p,e);
              printf("The number of the node is:%d\n",e);
              c=showList(h);
              break;
           }
       case 5:printf("Input your search number:\n");
              scanf("%d",&a);
              searchList(h,a);
              c=showList(h);
              break;
       case 6:h=reverseList(h);
              c=showList(h);
              break;
       case 7:a=isLoopList(h);
              if(a)
                puts("YES");
              else
                puts("NO");
              break;
       case 8:b=findMidNode(h);
              printf("The number of the node is:%d\n",b->data);
              break;
       case 9:c=showList(h);
              break;
       case 0:puts("bye!");
              break;
       default:puts("error!Input again!");
   }
   }
   return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node  *next;

};
struct node *sp=(struct node*)0;
int stat;
void main()
{
void push(int);
int pop();
int search(int);
int c,d,k=1,m;
do
{
printf("1.push\n");
printf("2.pop\n");
printf("3.search\n");
printf("4.exit\n");
printf("enter your choice:\n");
scanf("%d",&c);
switch(c)
{
case 1:printf("enter some data to push\n");
       scanf("%d",&d);
       push(d);
       break; 

case 2:d=pop();
       if(stat==1)
printf("poped item is:%d\n",d);
       break;
case 3:printf("enter the data to search\n");
       scanf("%d",&m);
       k=search(m);
       if(k==1)
       {
       printf("item not found...\n");
       }

       /*else
       {
       printf("item found..\n");
       }*/
       break;
case 4:printf("exiting....");
       exit(0);
}
                             //end of do function
}
while(1);
}
void push(int x)
{                                                   //function for pushing an item
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=sp;
sp=newnode;
}

int pop()
{
 int a;                                  //function for poping an item
 struct node *temp;
 if(sp==(struct node*)0)
{
printf("empty stack \n");
stat=0;
}
else
{
a=sp->data;
temp=sp;
sp=sp->next;
free(temp);
stat=1;
return a;
}                     //end of pop function
}
int search(int x)
{
struct node *ptr;             //function for searching an item
ptr=sp;
while(ptr!=(struct node*)0)
{
if(ptr->data==x)
{
printf("item found...\n");
return 0;
}
ptr=ptr->next;
}
return 1;
}            //end of search function




#include<stdio.h>
#include<stdlib.h>
#define size 10
struct node
{
     int data;
     struct node *left,*right;
};
          
struct node *start=(struct node*)0;  //representation of empty list

void main()
{
     void insert(int);
      struct node* search(int);
      void delete(int);
     struct node *temp;
     int c,a,b;
     int data;
     do
     {
     printf("\n");
     printf("***doubly link*** \n");
     printf("1.insert\n");
     printf("2.search\n");
     printf("3.delete\n");
     printf("4.exit\n");
     printf("enter your choice: ");
     scanf("%d",&c);
     switch(c)
     
    
{
case 1: printf("enter the data to insert: \n ");
       scanf("%d",&a);
       insert(a);
       break;


case 2:printf("enter a value to search:\n");
       scanf("%d",&b);
       search(b);
       temp=search(b);
       if(temp==(struct node*)0)
       printf("item not found..\n");
       else
       printf("item found..\n");
       break; 

case 3: printf(" item to deleted:\n");
       scanf("%d",&a);
       delete(a);
       break; 

case 4:printf("exiting...\n");
       exit(0);
  }   //end of switch
}

while(1);
}

                           //function to insert at begining
void insert(int x)
{ 
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
if(start==(struct node*)0) //case of emty list
{
newnode->left=newnode->right=(struct node*)0;
start=newnode;
}

else                        //case of atleast one node
{
newnode->left=(struct node*)0;
newnode->right=start;

start->left=newnode;
start=newnode;
}
printf("item inserted is: %d",x);

}
struct node* search(int d)  //function to search an item
{
struct node * ptr;
ptr=start;
while(ptr!=(struct node*)0&& ptr->data!=d)
{
ptr=ptr->right;
}
return ptr;
}

void delete(int x)   //function for deleting a particular data
{
struct node *t;      //calling search to find wheather that data exists or not
t=search(x);

if(t==0)
{
printf("not found... \n");
}
else                //element exists case
{
printf("item deleted...\n");
if(t==start)         //case of first node
if(t->right==(struct node*)0)  // having only one node
{
start=(struct node*)0;
}
else                 //case of having more than one node
{
t->right->left=(struct node*)0;
start=t->right;
}
else if
(t->right==(struct node*)0)//case of last node
{
t->left->right=t->right;
}
else                        //case of interior node

{
t->left->right=t->right;
t->right->left=t->left;
}
free(t);
}
}




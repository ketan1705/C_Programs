#include<stdio.h> 
#include<stdlib.h>
 void push();
 void pop();
 void display();
 struct node 
{ 
int data; struct node *next; 
};

struct node *top=NULL,*ptr,*start;
void main() 
{
 int c,choice;
 do 
{
 printf("enter your opration choice\n1 for push\n2 for pop\n3 for display\n"); 
scanf("%d",&c); 
switch(c)
 { 
case 1:
push();      
 break;
 case 2:
pop();   
break;
 case 3:
display();
break;
 default:
printf("you had chosen the wrong option\n");
break;
} 
printf("if you want to continue,press 1 otherwise 0\n");
 scanf("%d",&choice); 
} 
while(choice!=0);
 } 
void push()
 {
ptr=(struct node *)malloc(sizeof(struct node));
 if(top==NULL) 
{
 top=ptr;
 ptr->next=NULL;
 }
 else 
{
 ptr->next=top;
 top=ptr; 
}
 printf("enter the data"); 
scanf("%d",&top->data);
 } 
void pop()
 {
 if(top!=NULL)
 { 
start=top; 
top=start->next;
 printf("DEL\n"); 
free(start); 
}
 else printf("stack is in underflow condition"); 
}
 void display()
 {
 ptr=top;
 while(ptr!=NULL)
 {
 printf("%d\n",ptr->data);
 ptr=ptr->next;
 }
 }















































































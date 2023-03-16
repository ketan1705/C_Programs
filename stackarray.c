#include<stdio.h>
#include<stdlib.h>
#define maxsize 4 
void push();
void pop();
void display();
int top=-1;
int x[maxsize];
void main()
{ 
int a,b;
do
{
printf("enter\n1 for push \n2 for pop \n3 for display:\n");
scanf("%d",&a);
switch(a)
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
printf("wrong choice\n");
}
printf("do you want to continue if yes then press 4 else press 5\n");
scanf("%d",&b);
}
while(b==4);
}  
void push()
{
int item; 
if(top==maxsize-1)
{
printf("stack is overflow\n");
exit(0);
}
else
{
printf("enter element\n");
scanf("%d",&item);
top=top+1;
x[top]=item;
}
} 
void pop()
{
if(top==-1)
{
printf("stack is underflow\n");
exit(0);
}
else
{
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
{
printf("stack is underflow\n");
exit(0);
}
else
{
for(i=top;i>=0;i--)
{
printf("%d\n",x[i]); 
}
}
} 
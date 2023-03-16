#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

void insert();
void delete();
void display();

void main()
{
   int ch=1,val;
   while(ch)
   {
      printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&ch);
      switch(ch)
	  {
	 case 1:
		 insert();
		 break;
		case 2:
			delete();
			break;
	 case 3:
	 display();
	 break;
	 case 4:
	 exit(0);
	 default:
	 printf("\nWrong Choice\n");
      }
   }
}
void insert()
{
	int val;
   struct Node *p;
	printf("Enter the value to be insert: ");
		 scanf("%d", &val);
		
   p = (struct Node*)malloc(sizeof(struct Node));
   p->data = val;
   p-> next = NULL;
   if(front == NULL)
      front = rear = p;
   else
   {
      rear -> next =p;
      rear =p;
   }
}
void delete()
{
   if(front == NULL)
      printf("\nQueue is Empty\n");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL)
	  {
	 printf("%d\n",temp->data);
	 temp = temp -> next;
      }
      printf("%d\n",temp->data);
   }
}
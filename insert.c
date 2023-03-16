#include<stdio.h>
void main()
{
int a[100],n,i,pos,ele;
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("enter the position where you want to insert:\n");
scanf("%d",&pos);
printf("enter the element:\n");
scanf("%d",&ele);
for(i=n;i>=pos-1;i--)
a[i]=a[i-1];
a[pos-1]=ele;
for(i=0;i<=n;i++)
printf("%d\n",a[i]);
}

#include<stdio.h>
void main()
{
int i,n,pos,a[100];
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",a[i]);
printf("enter the position of an element which you want to delete:\n");
scanf("%d",&pos);
for(i=pos-1;i>=n-1;i--)
a[i]=a[i+1];
n=n-1;
for(i=0;i<n-1;i++)
printf("%d",a[i]);
}

#include<stdio.h>
void main()
{
int a[100],n,i,j,temp;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("after sorting:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
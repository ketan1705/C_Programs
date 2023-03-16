#include<stdio.h>
void main()
{
int n,i,j,a[i],pos,temp;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",a[i]);
for(i=0;i<n-1;i++)
{
pos=0;
for(j=i+1;j<n;j++)
{
pos=j;
}
if(pos!=i)
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
for(i=0;i<n;i++)
printf("%d",a[i]);
}
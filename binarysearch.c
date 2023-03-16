#include<stdio.h>
void main()
{
	int i,first,last,middle,n,search,a[100];
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&search);
	
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(a[middle]<search)
		{
			first=middle+1;
		}
		else if(a[middle]==search)
		{
			printf("%d found at location %d \n",search,middle+1);
			break;
		}
		else
		{
			last=middle-1;
			middle=(first+last)/2;
		}
		if(first>last)
		{
			printf("%d not found",search);
		}
	}
}
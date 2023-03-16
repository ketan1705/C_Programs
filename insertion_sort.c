#include<Stdio.h>
void main()
{
	int a[100],i,j,n,temp;
	printf("enter the limit:\n");
	scanf("%d",&n);
	printf("enter the element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		
		while(j>=0 && a[j]>temp)
		{
			a[j+1] = a[j];	
			j = j-1;
		}
			a[j+1] = temp;
	}
	printf("after sorted: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
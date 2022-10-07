#include <stdio.h>
int main()
{
	int arr[100],i,x,pos,n;
	printf("enter the no.of numbers in array");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("enter the numbers in array :");
		scanf("%d",&arr[i]);
	}
	printf("enter the number insert in array");
	scanf("%d",&x);	
	printf("enter the position in array");
	scanf("%d",&pos);	
	for(i=n-1;i>=pos;i--)
	arr[i]=arr[i-1];
	arr[pos-1]=x;
	for(i=0;i<=n;i++)
	printf("%d\n",arr[i]);		
}
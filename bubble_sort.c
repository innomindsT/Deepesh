#include<stdio.h>
#define MAXSIZE 1000
int main()
{
	int arr[MAXSIZE];
	int n,i,j;
	printf("how many no. you want to enter\n");
	scanf("%d",&n);
	printf("Enter Elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before sort\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				arr[j] = arr[j] + arr[j+1];
				arr[j+1] = arr[j] - arr[j+1];
				arr[j] = arr[j] - arr[j+1];
			}
		}
	}
	printf("After sort\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

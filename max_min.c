#include<stdio.h>
#include<time.h>
int main()
{
	double time_spent=0;
	clock_t start=clock();
	int arr[30];
	int n,i,j;
	printf("How many numbers you want to enter in array\n ");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
		}
	}
	printf("Max= %d Min= %d\n",arr[n-1],arr[0]);
	clock_t end=clock();
	time_spent=(double)(end-start)/CLOCKS_PER_SEC;
	printf("%f\n",time_spent);
}

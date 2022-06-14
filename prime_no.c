#include<stdio.h>
int main()
{
	int first_no, last_no;
	int i,j;
	// scaning the first no of range 
	printf("Enter first no of range\n");
	scanf("%d",&first_no);
	//scaning the last no of range
	printf("Enter last no of range\n ");
	scanf("%d",&last_no);

	// logic for finding the prime numbers
	for(i=first_no;i<=last_no;i++)
	{
		int count=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d\n",i);
		}
	}
}

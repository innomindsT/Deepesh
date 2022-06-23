#include<stdio.h>
int main()
{
	int rows,i,j,k;
	unsigned long long int num;
	printf("Enter rows\n");
	scanf("%d",&rows);

	for(i=0;i<rows;i++)
	{
		for(j=1;j<rows-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			if(i==0 || k==0)
			{
				num=1;
			}
			else
			{
				num=num*(i-k+1)/k;
			}
			printf("%lld ",num);
		}
		printf("\n");
	}
}

#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter number\n");
	scanf("%d",&num);
	for(i=8*sizeof(int);i>=0;i--)
	{
		printf("%d",num>>i&1);
	}
	num=num^(~0);
	printf("\n");
	for(i=8*sizeof(int);i>=0;i--)
	{
		printf("%d",num>>i&1);
	}
}

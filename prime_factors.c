#include<stdio.h>
int main()
{
	int num;
	int i;
	i=2;
	printf("Enter number\n");
	scanf("%d",&num);
	while(num>1)
	{
		if(num%i==0)
		{
			printf("%d\n",i);
			num=num/i;
		}
		else
		{
			i++;
		}
	}

}

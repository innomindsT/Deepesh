#include<stdio.h>
void print(int);
int main()
{
	int num,i,j,t1,t2;
	printf("Enter numbers\n");
	scanf("%d",&num);
	printf("Before reverse\n");
	print(num);//printing funtion call
	for(i=8*sizeof(int), j=0 ; i>j ; i--, j++ )
	{
		t1=num>>i&1;// checking bit status
		t2=num>>j&1;// checking bit status
		if(t1!=t2)
		{
			num=num^(1<<i);// bit compliment
			num=num^(1<<j);// bit compliment
		}
	}
	printf("\n");
	printf("After reverse\n");
	print(num);
}
void print(int n)
{
	int i;
	for(i=8*sizeof(int);i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
}

#include<stdio.h>
void swap(int*,int*);
int main()
{
	int number1,number2;
	int* pointer1;
	int* pointer2;
	scanf("%d %d",&number1,&number2);
	pointer1=&number1;//storing the address of number1 into pointer1
	pointer2=&number2;//storing the address of number2 into pointer2

	printf("Before swapping %d %d\n",number1,number2);
	swap(pointer1,pointer2);//function call
	printf("After swapping %d %d\n",number1,number2);
}

void swap(int*p1,int*p2)//swapping logic
{
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
}

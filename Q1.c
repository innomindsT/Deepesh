#include<stdio.h>
void print_global(void);
int num=10;//initialized global variable
int main()
{
	{
	int num=20;//Locale variable
	printf("local variable= %d\n",num);
	}
	printf("global varible= %d\n",num);
	print_global();
}
void print_global(void)
{
	printf("num= %d\n",num);
}

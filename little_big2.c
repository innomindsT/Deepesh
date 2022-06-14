#include<stdio.h>
union A
{
	int i;
	char ch;
};
int main()
{
	union A var;
	var.i=1;
	if(var.ch==1)
	{
		printf("Little endian\n");
	}
	else
	{
		printf("Big endian\n");
	}
}

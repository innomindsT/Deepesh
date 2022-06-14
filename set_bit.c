#include<stdio.h>
int main()
{
	int num,bp,op;
	printf("Enter num\n");
	scanf("%d",&num);
	printf("Enter bp\n");
	scanf("%d",&bp);
l1:	printf("Enter op 1:set the bit  2:Reset the bit\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:num=num|(1<<bp);
			break;
		case 2:num=num& ~(1<<bp);
			break;
		default: printf("Invalid option\n");
			goto l1;
	}
	printf("Num= %d\n",num);
}

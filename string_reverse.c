#include<stdio.h>
int main()
{
	char str[100];
	int i,j;
	printf("Enter string\n");
	scanf("%s",str);
	//calculating len of string.
	for(i=0;str[i];i++);
	//logic for string reverse
	for(i=i-1 , j = 0 ; j < i ; i-- , j++ )
	{
		str[i]=str[i]+str[j];
		str[j]=str[i]-str[j];
		str[i]=str[i]-str[j];
	}

	printf("After reverse\n %s",str);
}

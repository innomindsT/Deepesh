#include<stdio.h>
int user_defined_strlen(char*);
int main()
{
	char str[100];
	int len;
	printf("Enter the string\n");
	scanf("%[^\n]",str);
	len = user_defined_strlen( str );
	printf("%d\n",len);
}

int user_defined_strlen(char* p)
{
	int i,count=0;
	for(i=0;p[i];i++)
	{
		count++;
	}
	return count;
}

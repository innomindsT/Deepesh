#include<stdio.h>
char* user_defined_strcpy(char*, char*);// funtion declaration
int main()
{
	char src[100], dest[100];
	char* p;
	printf("Enter source string\n");
	scanf("%[^\n]",src);
	p=user_defined_strcpy(src, dest); //funtion call
	printf("copied string is %s\n", dest);
}

char* user_defined_strcpy(char* s, char* d)
{
	int i;
	for(i=0;s[i];i++)
	{
		d[i]=s[i];
	}
	d[i]='\0';
	
	return d;
}

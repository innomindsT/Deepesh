#include<stdio.h>
char* user_defined_strchr(const char*, char);
int main()
{
	char str[20];
	char ch,*p;
	printf("Enter string \n");
	scanf("%s",str);

	printf("Enter character \n");
	scanf(" %c",&ch);
	p=user_defined_strchr(str,ch);
	if(p==0)
	printf("char not found\n");
	else
	{
	printf("char found at %u\n",p);
	}
}

char* user_defined_strchr(const char *p, char ch)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]==ch)
		return (p+i);
	}
	return 0;
}

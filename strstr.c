#include<stdio.h>
char* user_defined_strstr(const char*,const char*);
int main()
{
	char main_string[30], sub_string[30];
	char *p;
	printf("Enter main string \n");
	scanf("%s",main_string);

	printf("Enter Sub string\n");
	scanf("%s",sub_string);

	p = user_defined_strstr(main_string, sub_string);
	if(p==0)
	{
		printf("String not found\n");
	}
	else
	{
		printf("String found at %p",p);
	}
}
char* user_defined_strstr(const char* m, const char* s)
{
	int i,j;
	for(i=0;m[i];i++)
	{
		if(m[i]==s[0])
		{
			for(j=1;s[j];j++)
			{
				if(s[j]!=m[i+j])
				{
					break;
				}
			}
			if(s[j]=='\0')
			{
				return (m+i);
			}
		}
	}
	return 0;
}

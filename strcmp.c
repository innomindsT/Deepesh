#include<stdio.h>
int user_defined_strcmp(char*, char* );
int main()
{
	char str1[100], str2[100];
	int ret;
	printf("Enter string 1\n");
	scanf("%s",str1);
	printf("Enter string 2\n");
	scanf("%s",str2);

	ret=user_defined_strcmp( str1, str2 );
	printf("ret= %d\n",ret);
	if(ret==0)
	{
		printf("String are equal\n");
	}
	else
	{
		printf("String are not equal\n");
	}
}

int user_defined_strcmp(char*s1 ,char* s2)
{
	int i;
	for(i=0;s1[i];i++)
	{
		if(s1[i]!=s2[i])
		{
			break;
		}
	}
	if(s1[i]>s2[i])
	{
		return 1;
	}
	else if(s1[i]<s2[i])
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

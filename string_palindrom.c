#include<stdio.h>
int main()
{
	char str[100];
	int i,j;
	printf("Enter string\n");
	scanf("%s",str);
	//Logic for calculating string length
	for(i=0;str[i];i++);

	for(i=i-1,j=0;str[j];i--,j++)
	{
		if(str[i]==str[j])
		{
			continue;
		}
		else
		{
			break;
		}
	}
	if(str[j]=='\0')
	{
		printf("String is palindrom\n");
	}
	else
	{
		printf("string is not palindrom\n");
	}

}

#include<stdio.h>
char* user_defined_strncpy(char* , const char*, int);
int main()
{
	char src[20],dest[20];
	char* p;
	int n;
	printf("Enter Source string\n");
	scanf("%s",src);

	printf("Enter n value\n");
	scanf("%d",&n);

	p=user_defined_strncpy(dest, src, n);
	printf("Dest : %s\n",dest);
}
char* user_defined_strncpy(char* d, const char* s, int m)
{
	int i;
	for(i=0;i<m && s[i]; i++)
	{
		d[i]=s[i];
	}
	for(; i<m ; i++)
	{
		d[i]='\0';
	}
}

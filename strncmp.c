#include<stdio.h>
int user_defined_strncmp(const char* , const char* ,int);
int main()
{
	int ret,n;
	char str1[20],str2[20];

	printf("Enter string1 \n");
	scanf("%s",str1);

	printf("Enter string2 \n");
	scanf("%s",str2);

	printf("Enter n value \n");
	scanf("%d",&n);

	ret=user_defined_strncmp( str1 , str2 , n );
	if(ret==0)
	printf("%d characters are equal\n",n);
	else
	printf("Not equal\n");
}
int user_defined_strncmp(const char* p1, const char* p2, int m)
{
	int i;
	for(i=0;i<m-1;i++)
	{
		if(p1[i]!=p2[i])
		break;
	}
	if(p1[i] > p2[i])
	return 1;
	else if(p1[i] < p2[i])
	return -1;
	else 
	return 0;
}

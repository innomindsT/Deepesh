#include<stdio.h>
int main()
{
	char roman[100];
	int i,num=0,ans=0;
	printf("Enter roman no\n");
	scanf("%s",roman);
	// Calculating the lenght of string
	for(i=0;roman[i];i++);

	// Logic for converting roman numbers to integer
	for(i=i-1;i>=0;i--)
	{
		switch(roman[i])
		{
			case 'I': num = 1;
				break;
			case 'V': num = 5;
				break;
			case 'X': num=10;
				break;
			case 'L':num=50;
				break;
			case 'C':num=100;
				break;
			case 'D':num=500;
				break;
			case 'M':num=1000;
				break;
		}
		if(4*num<ans)
		{
			ans-=num;
		}
		else
		{
			ans+=num;
		}
	}
	printf("ans= %d\n",ans);
}

//program to convert ascii(string) to integer
#include<stdio.h>
//Atoi function Declaration
int Atoi(char*);

int main(int argc,char* argv[])
{
	int n;
	if(argc!=2)// checking arguments count
	{
		printf("./a.out input");
		return 0;
	}
	n=Atoi(argv[1]);//funtion call
	printf("n= %d\n",n);
}

int Atoi(char* p)//funtion defintion
{
	int i,n=0;
	for(i=0;p[i];i++)
	{
		if(p[i]>='0'&&p[i]<='9')
		n=n*10+(p[i]-48);
		else
		break;
	}
	return n;
}

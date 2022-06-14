#include<stdio.h>
//void scan_array(int ,int*);
int merge(int*,int,int*,int);
int main()
{
	int arr1[20],arr2[20];
	int n1,n2,i,len;
	printf("enter how many number you want in array 1\n");
	scanf("%d",&n1);
	printf("Enter arrays elments\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter how many number you want in array 2\n");
	scanf("%d",&n2);
	printf("Enter arrays elements\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}

	len=merge( arr1 , n1 , arr2 , n2);
	printf("Arrays elements are\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",arr1[i]);
	}
}
int merge(int *a1, int m1, int* a2, int m2 )
{
	int i,j;
	int *p1,*p2;
	p1=a1;
	p2=a2;
	for(i=m1,j=0;i<m1+m2;i++,j++)
	{
		*(p1+i)=*(p2+j);
	}
	return m1+m2;
}

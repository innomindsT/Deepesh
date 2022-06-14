#include<stdio.h>
int main()
{
	int arr[20];
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	printf("memory allocated for array is (in bytes) %d",size*sizeof(int));
}

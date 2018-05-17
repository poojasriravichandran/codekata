#include <stdio.h>

int main(void) {
	int arr[]={6,6,6,3,4,5},i,j,size;
	size=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size;i++)
	{
		if(arr[i]==i)
		printf("%d ",arr[i]);
		
	}
	return 0;
}

#include <stdio.h>

int main(void) {
	int arr[]={1,2,3,4,5,6,7},i,size;
	size=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size;i++)
	{
		if((arr[i]%2==0)&&(i%2!=0))
		printf("%d ",arr[i]);
		else if((arr[i]%2!=0)&&(i%2==0))
		printf("%d ",arr[i]);
		
	}
	return 0;
}

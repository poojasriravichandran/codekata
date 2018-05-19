#include <stdio.h>

int main(void) {
	int arr[]={5,6,7,8,9},i,j,size,temp;
	size=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		
		}
	}
	for(i=0;i<size;i++)
		printf("%d",arr[i]);
	return 0;
}

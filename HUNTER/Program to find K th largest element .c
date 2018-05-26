#include <stdio.h>

int main(void) {
	int arr[]={2,5,3,6,7,1},i,j,size,k=2,temp;
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
	
	printf("%d ",arr[i=k-1]);
	
}

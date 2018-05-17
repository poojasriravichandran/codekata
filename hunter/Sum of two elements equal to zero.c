#include <stdio.h>

int main(void) 
{
	int arr[]={-1,2,3,0,1,-2,-3},i,j,sum=0,size;
	size=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			sum=arr[i]+arr[j];
			if(sum==0)
			printf("%d %d\n",arr[i],arr[j]);
			
		}
	}
	return 0;
}

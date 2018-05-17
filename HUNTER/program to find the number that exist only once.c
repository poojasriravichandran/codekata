#include <stdio.h>

int main() {
	
	int y=0,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 int x;
	 scanf("%d ",&x);
	 y^=x;
	}
	printf("%d ",y);

	return 0;
}

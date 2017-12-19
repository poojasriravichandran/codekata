#include <stdio.h>

int main(void)
{
  int num,sum=0,i;
  scanf("%d",&num);
  for(i=0;i<=num;i++)
  {
  	sum+=i;
  }
  printf("%d",sum);
	return 0;
}

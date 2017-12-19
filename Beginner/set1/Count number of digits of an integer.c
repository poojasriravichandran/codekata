#include <stdio.h>

int main(void) {
     int num,digit,count=0;
     scanf("%d",&num);
     while(num)
     {
     	digit=num%10;
     	num/=10;
     	count++;
     }
     printf("%d",count);
	return 0;
}

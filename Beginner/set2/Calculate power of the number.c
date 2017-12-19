#include <stdio.h>

int main(void) {
     int num,power,mul=1;
     scanf("%d,%d",&num,&power);
     while(power)
     {
     	mul*=num;
     	power--;
     }
     printf("%d",mul);
	return 0;
}

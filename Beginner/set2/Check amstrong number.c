#include <stdio.h>

int main(void)
{
int num,temp,mul=1,digit,sum=0,power,ctr;
scanf("%d",&num);
temp=num;
while(num)
{
	digit=num%10;
	num/=10;
	power++;
}
num=temp;
while(num)
{
	digit=num%10;
   for(ctr=1,mul=1;ctr<=power;ctr++)
	mul*=digit;
	sum+=mul;
	num/=10;
}
num=temp;
if(sum==num)
printf("amstrong number");
else
printf("not an amstrong number");
	return 0;
}

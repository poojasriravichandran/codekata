#include <stdio.h>

int main(void) {
	int num,digit,revnum=0,temp;
	scanf("%d",&num);
	temp=num;
	while(num)
	{
		digit=num%10;
		num/=10;
		revnum=revnum*10+digit;
	}
	num=temp;
        if(revnum==num)
        printf("PALINDROME");
        else
        printf("NOT A PALINDROME");
	return 0;
}

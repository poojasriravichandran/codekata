#include <stdio.h>

int main(void)
{
     char c;
     scanf("%c",&c);
     if(c>='a'&&c<='z'||c>='A'&&c<='Z')
     printf("ALPHABET");
     else
     printf("NOT AN ALPHABET");
	return 0;
}

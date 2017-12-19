#include <stdio.h>

int main(void) 
{
	char c;
	scanf("%c",&c);
	int vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
		if(vowel)
		printf("VOWEL");
		else
		printf("CONSONANT");
	
	return 0;
}

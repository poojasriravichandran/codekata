#include<stdio.h> 
#include<string.h> 
int main() 
{ 
char str[100],st2[100];int x,y=0,i,j,r=0; 
gets(str); 
x=strlen(str); 
for(i=0;i<x;i++) 
{ 
if(str[i]==' ' | i== x-1) 
{ 
if(i== x-1) 
y=1; 
for(j=i-1+y;j>=r;j--) 
{ 
printf("%c",str[j]);	
}	
printf(" ");
r= i+1;	
} 

} 
}

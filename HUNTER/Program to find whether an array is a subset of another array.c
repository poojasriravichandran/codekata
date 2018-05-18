#include<stdio.h>
int Subset(int *array1, int size1, int *array2, int size2) 
{
int i, j;
for (i = 0; i < size2; i++) 
{
for (j = 0; j < size1; j++)
{
if(array2[i] == array1[j])
break;
}
if(j == size1)
return 0;
}

return 1;
}

int main()
{
int array1[7] = {1,2,3,4,5,6,7};
int array2[6] = {3,4,5,6,7,1};
if(Subset(array1, 7, array2, 6))
printf("YES");
else
printf("NO"); 

return 0;
}

#include<stdio.h>
int main()
{
    int arr[2][2]={1,1,1,0},row=2,col=2,element=0;
    int r , c;
    for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        {
          if(element==arr[row][col])
          {
              for(r=0;r<2;r++)
              {
                  if(arr[r][col]==1)
                  arr[r][col]=2;
              }
              for(c=0;c<2;c++)
              {
                  if(arr[row][c]==1)
                    arr[row][c]=2;
              }
          }
        }
    }
    for(row=0;row<2;row++,printf("\n"))
    {
      for(col=0;col<2;col++)
      {
          if(arr[row][col]==2)

          {
              arr[row][col]=0;
          }
          printf("%d  ",arr[row][col]);
    }
    }


    return 0;

}

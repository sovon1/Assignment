#include<stdio.h>
int main()
{
   int row,col,n=4;
   for(row=1;row<=n;row++)
   {
      for(col=1;col<=n;col++)
      {

        printf(" %c ",col+64);

      }
      printf("\n");

   }


    return 0;
}
#include<stdio.h>
int main()
{
    int row,col,n=5;
   for(row=1;row<=n;row++)
   {
      //printing space
      for(col=1;col<=n-row;col++)
      {
        printf(" ");
      }
      for(col=1;col<=2*row -1;col++)
      {

        printf("%d",col);
      }
      printf("\n");


   }



    return 0;
}
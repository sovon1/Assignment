#include<stdio.h>
int main()
{
    int row,col,n=5;
for(row=n;row>=1;row--)
   {
      //printing space
      for(col=1;col<=n-row;col++)
      {
        printf(" ");
      }
      for(col=1;col<=2*row -1;col++)
      {

        printf("%c",col+64);
      }
      printf("\n");


   }


    return 0;
}
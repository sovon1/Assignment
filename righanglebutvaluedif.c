#include<stdio.h>
int main()
{
    int row,col,n=5;
    for(row=1;row<=n;row++)
    {

      for(col=1;col<=row;col++)
      {
         printf(" %d ",col*row);

      } 
      printf("\n");//you forgot this line

    }



    return 0;
}
#include<stdio.h>
int main()
{
   int row,col,n=4;
   for(row=1;row<=n;row++)
   { 
    //printing space
    for(col=1;col<=n-row;col++)
    {

        printf(" ");
    }
    //printing number in that column
    for(col=1;col<=row;col++)
    printf("%d",col);
    //printing another column and decreasing
   for(col=row-1;col>=1;col--) //this is in the same row and this is the tricks
   printf("%d",col);
   printf("\n");//you again forgot to add this new line
   }

   for(row=n-1;row>=1;row--)
   { 
    //printing space
    for(col=1;col<=n-row;col++)
    {

        printf(" ");
    }
    //printing number in that column
    for(col=1;col<=row;col++)
    printf("%d",col);
    //printing another column and decreasing
   for(col=row-1;col>=1;col--) //this is in the same row and this is the tricks
   printf("%d",col);
   printf("\n");//you again forgot to add this new line
   }
    return 0;
}

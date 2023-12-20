#include<stdio.h>
int main()
{
   int row,col,n=4;
   for(row=1;row<=n;row++)
   { 
    for(col=1;col<=n-row;col++)
    {

        printf(" ");
    }
    for(col=1;col<=row;col++)
    printf("%d",col);
   for(col=row-1;col>=1;col--) //this is in the same row and this is the tricks
   printf("%d",col);
   printf("\n");//you again forgot to add this new line
   }
    return 0;
}

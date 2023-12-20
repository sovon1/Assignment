#include<stdio.h>
int main()
{
 int row,col,n=4;
 for(row=1;row<=n;row++)
 {
 for(col=1;col<=row;col++)
 {

 printf("%c ",64+col);

   
 }
 printf("\n");
 
 }

    return 0;
}
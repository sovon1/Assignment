#include<stdio.h>
int main()
{
 int row,col,n=4;
 for(row=1;row<=n;row++)
 {
 for(col=1;col<=row;col++)
 {

  if(col%2==0)
 printf("0 ");
 else 
 printf("1 ");
 //printf("%d",col%2)
   
 }
 printf("\n");
 
 }

    return 0;
}
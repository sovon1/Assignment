#include<stdio.h>
int main()
{
  //printing whitespace
  int row,col,n=5;
  for(row=1;row<=n;row++)
  {
    for(col=1;col<=n-row;col++)
    {
      
      printf(" ",col);
      //you won't have to use col here
      }
    
    for(col=1;col<=row;col++)//make sure this loop doesn't enter into previous loop
    printf("%c",row+64);

    printf("\n");
    

  }

 for(row=n-1;row>=1;row--)
 {
   for (col=1;col<=n-row;col++)
   {
     printf(" ",col);

   }
 {
   for (col=1;col<=row;col++)
   {
     printf("%c",row+64);

   }

 }
 printf("\n");

 }

 

    return 0;
}
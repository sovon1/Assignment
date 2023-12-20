#include<stdio.h>
int main()
{
   int row,col,n=10;
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=n;col++)
       
       {

           if ( col==row || row+col==n+1)
           printf("*");
           else 
           printf(" ");

       }
       printf("\n");//you forgot to add a new line here



   }



    return 0;
}
#include<stdio.h>
int main()
{
   int row,col,n=10;
   for(row=1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       
       {

           if (col==1 || col==row || row==n)//you forgot about the row == n
           printf("*");
           else 
           printf(" ");

       }
       printf("\n");//you forgot to add a new line here



   }



    return 0;
}
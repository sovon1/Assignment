//has a minoar bug ,actually  not bug but condition
#include<stdio.h>
int main()
{
 int row,col,n=7;
 
 for(row=1;row<=n;row++)
 {
 for(col=1;col<=row;col++)
 {

 printf("* ");
   
 }
 printf("\n");
 }


 for(row=n-1;row>=1;row--)
 {
 for(col=1;col<=row;col++)
 {

 
 printf("* ");
   
 }
 printf("\n");
 
 }

    return 0;
}

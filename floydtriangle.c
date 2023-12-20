#include<stdio.h>
int main()
{
  int row,col,n=4,k=1;
  for(row=1;row<=n;row++)
  {

    for(col=1;col<=row;col++,k++) //you forgot about the k and comma
    {
        printf("%d",k);
    }
    printf("\n");
  }
  


    return 0;
}
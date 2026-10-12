#include<stdio.h>
#include <stdio.h>
void oddnumber(int n)
{
    if( n>21)
    return ;
  printf("%d",2*n-1);
  oddnumber(n-1);
}

int main()
{
    oddnumber(1);
    return 0;
}
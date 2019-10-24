#include<stdio.h>
int factorial (int x);
int x,y=1,n=1,fact;
void main()
{
 
 printf("Enter a number to find its factorial ");
 scanf("%d",&x);
 fact=factorial(x);
 printf("Factorial of %d is %d",x,fact); 
}

int factorial (int m)
{
 for(n=1;n<=m;n++)
 {
  y=y*n;
 }
  return y;
}

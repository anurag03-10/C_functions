#include<stdio.h>
void factorial (int x);
int x,y=1,n=1;
void main()
{
 
 printf("Enter a number to find its factorial ");
 scanf("%d",&x);
 factorial(x);
  
}

void factorial (int m)
{
 for(n=1;n<=m;n++)
 {
  y=y*n;
 }
 printf("Factorial of %d is %d",x,y);
}

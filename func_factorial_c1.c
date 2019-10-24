#include<stdio.h>
void factorial ();
int x,y=1,n=1;
void main()
{
 factorial();
  
}

void factorial ()
{
 printf("Enter a number to find its factorial ");
 scanf("%d",&x);
 
 
 for(n=1;n<=x;n++)
 {
  y=y*n;
 }
 printf("Factorial of %d is %d",x,y);
}

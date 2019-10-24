#include<stdio.h>
int count (int x);
int x,y=0,n=1,co;
void main()
{
 
 printf("Enter a number to count its digit ");
 scanf("%d",&x);
 co=count(x);
 printf("Number of digits in %d is %d",x,co); 
}

int count (int m)
{
 while(m!=0)
 {
  m=m/10;
  y++;
 }

  return y;
}

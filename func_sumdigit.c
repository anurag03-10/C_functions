#include<stdio.h>
int sumdigit (int x);
int x,m,s=0;
void main()
{
 printf("Enter the number");
 scanf("%d",&x);
 s=sumdigit(x);
 printf("Sum of the digits of number are %d",s); 
}

int sumdigit (int m)
{
 while(m!=0)
 {
  s=s+m%10;
  m=m/10;
 } 
 return s;
}

  
  


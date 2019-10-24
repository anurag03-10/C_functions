#include<stdio.h>
int sumdigit (int x);
int x,y,m,s=0,p=1,rec;
void main()
{
 printf("Enter the number");
 scanf("%d",&x);
 y=x;
 rec=sumdigit(x);
 printf("Sum of the digit of %d is %d",y,rec); 
}

int sumdigit (int m)
{
 while(m!=0)
 {
  if(p%2==0)
  {
   s=s+m%10;
  }
   m=m/10;
   p++;
 }

 return s;
}

  
  





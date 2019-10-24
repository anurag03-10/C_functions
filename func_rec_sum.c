#include<stdio.h>
int sum (int x, int y);
int x,y,n,m,s=0;
void main()
{
 printf("Enter the two number");
 scanf("%d%d",&x,&y);
 s=sum(x,y);
 printf("Sum of both the numbers are %d",s); 
}

int sum (int m, int n)
{
 s=n+m;
 return s;
}

  
  


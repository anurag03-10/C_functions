#include<stdio.h>
int gcd (int x, int y);
int x,y,m,n,g=0,i,j;
void main()
{
 
 printf("Enter two numbers to find GCD ");
 scanf("%d%d",&x,&y);
 g=gcd(x,y);
 printf("GCD is %d ",g);
}

int gcd (int m,int n)
{
 for(i=1,j=1;i<=m,j<=n;i++,j++)
 {
  if((m%i==0)&&(n%j==0)&&(i>=g))
  g=i;
 }
  return g;
}

#include<stdio.h>
int lcm (int x, int y);
int l,x,y,m,n,g=0,i,j;
void main()
{
 
 printf("Enter two numbers to find LCM ");
 scanf("%d%d",&x,&y);
 l=lcm(x,y);
 printf("LCM is %d ",l);
}

int lcm (int m,int n)
{
 for(i=1,j=1;i<=m,j<=n;i++,j++)
 {
  if((m%i==0)&&(n%j==0)&&(i>=g))
  g=i;
 }
  l=(m*n)/g; 
  return l;
}

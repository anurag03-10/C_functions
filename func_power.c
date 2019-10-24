#include<stdio.h>
int power (int x, int y);
int x,y,p=1,n,m,s=1;
float powr;
void main()
{
 printf("Enter the co-eff and power");
 scanf("%d%d",&x,&y);
 powr=power(x,y);
 printf("answer is %f",powr); 
}

int power (int m, int n)
{
  for(s;s<=n;s++)
  {
  p=p*m;
  }
  return p;
}

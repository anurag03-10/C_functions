#include<stdio.h>
int average (int x, int y);
int x,y,n,m,s=0;
float avg;
void main()
{
 printf("Enter the starting and ending number");
 scanf("%d%d",&x,&y);
 avg=average(x,y);
 printf("Average of odd numbers between the given range is %f",avg); 
}

int average (int m, int n)
{
  for(m;m<=n;m++)
  {
  if(m%2==1)
  s=s+m;
  }
  s=s/100;
  return s;
}

#include<stdio.h>
int largest (int x, int y,int z);
int x,y,z;
void main()
{
 printf("Enter the the three numbers to compare\n");
 scanf("%d%d%d",&x,&y,&z);
 printf("Largest no. among the three is %d",largest(x,y,z));
}

int largest (int m, int n,int o)
{
  int p = m;
  if(p<n)
    p = n;
  if(p<o)
    p = o;
  return p;
}

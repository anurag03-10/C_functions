#include<stdio.h>
int largest (int x, int y,int z);
int x,y,z,o,n,m,large,p=-32767;
void main()
{
 printf("Enter the the three numbers to compare");
 scanf("%d%d%d",&x,&y,&z);
 large=largest(x,y,z);
 printf("Largest no. among the three is %d",large); 
}

int largest (int m, int n,int o)
{
  if(m>p)
  p=m;
  else if(n>p)
  p=n;
  else if(o>p)
  p=o;
  return p;
}

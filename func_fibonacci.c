#include<stdio.h>
int x,a[10],n,p;
int fibonacci ( int p);
void main()
{
 printf("enter the the no. to print the fibonacci series");
 scanf("%d",&p);
 fibonacci(p);
}

 int fibonacci (int n)
{
  for(x=0;x<=n;x++)
 {
  if(x==0)
  {
   a[x]=0;
   a[x+1]=1;
   printf("%d\t%d",a[x],a[x+1]);
   x++;
  }
   else
  {
   a[x]=a[x-1]+a[x-2];
   printf("\t%d",a[x]);
  }
 }
}

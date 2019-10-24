#include<stdio.h>

int y,z,n,a,q,x,p;
int prime (int z);
 
void main()
{
 printf("Enter the no. to print the prime number upto");
 scanf("%d",&z);
 printf("Prime no. between 1 to %d are: \n",z);
 prime(z);
}

int prime(int n)
{
 for(y=1;y<=n;y++)
  { 
   p=0; 
   q=y;
   for(x=1;x<=y;x++)
   {
    if(y%x==0)
    p++;
   }
   if(p<=2)   
   printf("%d ",q);
  } 
}

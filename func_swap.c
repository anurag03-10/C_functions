#include<stdio.h>
int swap (int x, int y);
int x,y,m,n,temp;
void main()
{
 
 printf("Enter two numbers to SWAP ");
 scanf("%d%d",&x,&y);
 swap(x,y);
}

int swap (int m,int n)
{
 temp=m;
 m=n;
 n=temp;
 printf("Numbers after SWAPPING are %d and %d ",m,n);
}

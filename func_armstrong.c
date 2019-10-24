#include<stdio.h>
int armstrong (int a);
int a,arm,l,p,m,s=0,y=1;
void main()
{
 printf("Enter any number to check");
 scanf("%d",&a);
 l=a;
 arm=armstrong(a);
 if(l==arm)
 printf("It is a armstrong no.");
 else
 printf("It is not a armstrong no.");

}

int armstrong (int f)
{
 while(a!=0)
 {
  p=a%10;
  m=p*p*p;
  s=s+m;
  a=a/10;
 
 }
 return s;
}



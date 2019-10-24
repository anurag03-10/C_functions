#include<stdio.h>
 int x,j,a,s=0,m;
 int palin(int a);
void main()
{


 printf("Enter any number");
 scanf("%d",&a);
 m=a;
 j=palin(a);
 if(j==1)
  printf("Yes it is palindrome no.");
 else
  printf("No it is not a palindrome no.");
}  
int palin (int x)
{
 while(x!=0)
 {
  s=s*10+x%10;
  x=x/10;
 }
  
  if(m==s)
  return 1;
  else
  return 0; 
}




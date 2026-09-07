#include<stdio.h>
int main()
{ 
  int i,a=0,b=1,n,c=0;
  printf("Enter the value of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	printf("%d\t",a);
  	c=a+b;
  	a=b;
  	b=c;
  }
  return 0;
}

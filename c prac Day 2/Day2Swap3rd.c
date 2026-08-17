#include<stdio.h>
int main()
{
	int a,b,c;
	a=5,b=10;
	c=a; //c=5
	a=b; //a=10
	b=c; //b=5
	printf("The value of a is %d\n",a);
	printf("The value of b is %d",b);
	return 0;
}
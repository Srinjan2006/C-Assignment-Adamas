#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number a:");
	scanf("%d",&a);
	printf("Enter the number b:");
	scanf("%d",&b);
	printf("The value of a is %d\n",(a*b)/a);
	printf("The value of b is %d\n",(a*b)/b);
	return 0;
}
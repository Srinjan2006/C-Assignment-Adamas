#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter the number:");
	scanf("%d",&n);
	sum=(n*(n+1)*(2*n+1))/6;
	printf("The sum of the first 10 natural number is %d",sum);
	return 0;
}
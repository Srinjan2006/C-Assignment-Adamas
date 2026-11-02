#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The factorialof the number is %d",fact(n));
	return 0;
}
int fact(int n)
{
	int i,f=1;
	for(i=2;i<=n;i++){
		f*=i;
	}
	return f;
}

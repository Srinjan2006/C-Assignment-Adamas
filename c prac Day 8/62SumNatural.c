#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Sum of %d natural numbers= %d",n,sum(n));
	return 0;
}

int sum(int n)
{
	int s=0;
	
	for(int i=1;i<=n;i++)
	{
		s+=i;
	}
	return s;
}
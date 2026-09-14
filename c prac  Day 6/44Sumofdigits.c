#include<stdio.h>
int main()
{
	int rem,n,c=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		c=c+rem;
	}
	printf("%d",c);
	return 0;
}
#include<stdio.h>
int main()
{
	int n,c=0;
	printf("Enter the integer no:");
	scanf("%d",&n);
	while(n!=0 && n>0)
	{
		n=n/10;
		c++;
	}
	printf("Total number of digits of is %d",c);
	return 0;
}
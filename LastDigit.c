#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	printf("The last digit of the number n is %d",n-(n/10)*10);
	return 0;
	
}
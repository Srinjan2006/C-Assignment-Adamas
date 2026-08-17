#include<stdio.h>
int main()
{
	int n,first,middle,last,sum;
	printf("The 3 digit no is:");
	scanf("%d",&n);
	first=n/100;
	middle=(n/10)%10;
	last=(n%10);
	sum=first+middle+last;
	printf("The sum of the digits is %d\n",sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int y,m,d;
	int r;
	printf("Enter the no. of days:");
	scanf("%d",&d);
	y=d/365;
	r=d%365;
	m=r/30;
	d=r%30;
	printf("The age of the person is %d years %d months %d days",y,m,d);
	return 0;
}
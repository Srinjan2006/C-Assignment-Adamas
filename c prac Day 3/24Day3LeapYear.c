#include<stdio.h>
int main()
{
	int y;
	printf("Enter a year:");
	scanf("%d",&y);
	
	(y%400==0) ? printf("Leap Year"):(y%100==0) ? printf("Not a Leap Year"):(y%4==0) ? printf("Leap Year"):printf("Not a Leap Year");
	return 0;
}
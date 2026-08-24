#include<stdio.h>
int main()
{
	float fa=5000;
	float b,da,hra,gs;
	printf("Enter  the value of Basic Salary is:");
	scanf("%f",&b);
	da=0.5*b;
	hra=0.1*b;
    gs=b+da+hra+fa;
    printf("The Gross Salary is %f\n:",gs);
    return 0;
}
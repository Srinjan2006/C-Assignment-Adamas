#include<stdio.h>
int main()
{
	float C,F;
	printf("The given value of temperature in Celcius is:");
	scanf("%f",&C);
	printf("The value of temperature in Farenheit from Celcius is %f\n",(9*C/5)+32);
	printf("The given value of temperature in Farenheit is:");
	scanf("%f",&F);
	printf("The value of temperature in Celcius from Farenheit is %f\n",(F-32)*5/9);
	return 0;
}
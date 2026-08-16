#include<stdio.h>
int main()
{
	float p,r,t,SI;
	printf("Enter Principal,Rate and Time");
	scanf("%f %f %f",&p,&r,&t);
	SI=(p*r*t)/100;
	printf("The Simple Interest is %f",SI);
	return 0;
}

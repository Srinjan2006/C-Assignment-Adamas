#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	printf("Enter the number:");
	scanf("%f",&a);
	printf("The Ceiling value of a is %f\n",ceil(a));
	printf("The Floor value of a is %f\n",floor(a));
	return 0;	
}
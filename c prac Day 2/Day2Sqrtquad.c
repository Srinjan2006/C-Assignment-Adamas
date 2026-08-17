#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,n1,n2;
	printf("Enter a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	//Find the discriminant
    d=(b*b)-(4*a*c);
	//Applying sqrt of quadratic formulas
	n1=(-b + sqrt(d))/(2.0*a);
	n2=(-b - sqrt(d))/(2.0*a);
	printf("The first value is %f\n",n1);
	printf("The second value is %f\n",n2);
	return 0;
}
#include<stdio.h>
int main()
{
	float l,b,a,ht,bs,r,A1,A2,A3,A4;
	printf("Enter the length of rectangle:");
	scanf("%f",&l);
	printf("Enter the breadth of the rectangle:");
	scanf("%f",&b);
	printf("Enter the side of the square:");
	scanf("%f",&a);
	printf("Enter the height of the triangle:");
	scanf("%f",&ht);
	printf("Enter the base of the triangle:");
	scanf("%f",&bs);
	printf("Enter the radius of the circle:");
	scanf("%f",&r);
	A1=3.14*(r*r);
	A2=l*b;
	A3=0.5*(ht*bs);
	A4=4*a;
	printf("The area of the cirle is %f\n",A1);
	printf("The area of the rectangle is %f\n",A2);
	printf("The area of the triangle is %f\n",A3);
	printf("The area of the square is %f\n",A4);
	return 0;
}
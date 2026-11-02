#include <stdio.h>
#include <math.h>
void type(float a, float b, float c)
{
    if(a == b && b == c)
        printf("Equilateral Triangle");
    else if(a == b || b == c || a == c)
        printf("Isosceles Triangle");  
    else if(a!=b && a!=c && b!=c)
	    printf("Scalene Triangle"); 
	else
	    printf("Not a Triangle");
}
float area(float a, float b, float c)
{
    float s, ar;
    s = (a + b + c) / 2;
    ar = sqrt(s * (s-a) * (s-b) * (s-c));
    return ar;
}
int main()
{
    float a, b, c, ar;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);
    type(a, b, c);
    ar = area(a, b, c);
    printf("Area = %.2f", ar);

    return 0;
}
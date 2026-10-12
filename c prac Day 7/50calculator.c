#include<stdio.h>
int main()
{
	float a,b,result;
	char op;
	printf("Enter a and b :");
	scanf("%f %f",&a,&b);
	printf("Enter operators among (+,-,*,/):");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':
			result=a+b;
			printf("Result= %.2f",result);
			break;
		case '-':
			result=a-b;
			printf("Result=%.2f",result);
			break;
		case '*':
			result=a*b;
			printf("Result=%.2f",result);
			break;
		case '/':
			result=a/b;
			printf("Result=%.2f",result);
			break;
		default:
			printf("Invalid input");
		    break;
	}
	return 0;
}
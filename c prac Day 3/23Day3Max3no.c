#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter the values of numbers");
	scanf("%d %d %d",&n1,&n2,&n3);
	(n1>n2)?(n1>n3 ? printf("Maximum is %d", n1):printf("Maximum is %d", n3)):(n2>n3 ? printf("Maximum is %d", n2):printf("Maximum is %d", n3));
	return 0;
}
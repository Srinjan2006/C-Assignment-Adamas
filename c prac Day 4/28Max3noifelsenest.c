#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter 3 numbers n1,n2,n3:");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2)
	{
		if(n1>n3){
			printf("%d is the greatest",n1);
		}
		else
		{
			printf("%d is the greatest",n3);
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("%d is the greatest",n2);
		}
		else
		{
			printf("%d is the greatest",n3);
		}
	}
	return 0;
}
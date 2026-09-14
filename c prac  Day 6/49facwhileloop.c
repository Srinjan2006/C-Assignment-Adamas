#include<stdio.h>
int main()
{
	int num,fac=1;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num==0 || num==1){
		printf("Factorial is 1");
	}
	while(num!=0)
	{
	fac=fac*num;
	num-=1;
    }
    printf("Factorial is %d",fac);
    return 0;
}
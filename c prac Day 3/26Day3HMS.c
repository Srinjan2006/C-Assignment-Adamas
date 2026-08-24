#include<stdio.h>
int main()
{
	int h,m,s;
	int r;
	printf("Enter no. of seconds:");
	scanf("%d",&s);
	
	h=s/3600;
	r=s%3600;
	m=r/60;
	s=r%60;
	printf("Hours:%d\n",h);
	printf("Minutes:%d\n",m);
	printf("Seconds:%d\n",s);
	return 0;
}
#include<stdio.h>
int main()
{
	int r1,r2,m;
	float p1,p2;
	int s=0;
	printf("Enter the roll number of two stdents:");
	scanf("%d",&r1);
	scanf("%d",&r2);
	printf("Enter the marks of 5 subjects of first student:");
	scanf("%d",&m);
	s+=m;
	scanf("%d",&m);
	s+=m;
	scanf("%d",&m);
	s+=m;
	scanf("%d",&m);
	s+=m;
	scanf("%d",&m);
	s+=m;
	p1=(s/5)*100;
	s=0;
	printf("Enter the marks of 5 subject of 2nd student:");
	scanf("%d",&m);
	s+=m;
	scanf("%d",&m);
	s+=m;
	scanf("%d",&m);
	s+=m;
	scanf("%d",&m);
	s+=m;
	scanf("%d",&m);
	s+=m;
	p2=(s/5)*100;
	(p1>p2) ? printf("Roll number %d has the highest marks",r1):printf("Roll number %d has the highest percentage",r2);
	return 0;
	}

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter H or h for Head and T or t for Tails:");
	scanf("%c",&ch);
	if(ch=='H'||ch=='h')
	{
		printf("Heads,captain won the toss");
	}
	else if(ch=='T'||ch=='t')
	{
		printf("Tails,captain lost the toss");
	}
	else printf("Invalid Input");
	return 0;
}

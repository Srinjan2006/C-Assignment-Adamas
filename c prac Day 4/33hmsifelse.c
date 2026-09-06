// Write a C program to calculate the time in hours, minutes, and seconds using if-else when second is given 

#include <stdio.h>
int main()
{
    int second, minute = 0, hour = 0;
    printf("Enter the time in in second: ");
    scanf("%d",&second);
    if( second > 3600)
    {
    	hour=second/3600;
    	second %= 3600;
	}
	if( second >= 60)
	{
		minute=second/60;
		second%=60;
	}
	else
	    printf("Invalid input !");

    printf("The time in year, month and day is\n");
    printf("hour : minute : second\n%d:%d:%d",hour,minute,second);

    return 0;
}

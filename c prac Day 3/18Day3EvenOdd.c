#include <stdio.h>
int main() 
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
     // Use the conditional operator to check even or odd
    (a % 2 == 0) ? printf("%d is an Even number \n", a) : printf("%d is an Odd number \n", a);
     return 0;
} 
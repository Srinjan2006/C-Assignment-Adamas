#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two integers a and b: ");
    scanf("%d %d", &a,&b);
     (a > b) ? printf("%d is the max number",a): printf("%d is the max number",b);

    return 0;
}
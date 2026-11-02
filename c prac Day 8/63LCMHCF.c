#include <stdio.h>
int hcf(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("HCF = %d\n", hcf(num1, num2));
    printf("LCM = %d\n", lcm(num1, num2));

    return 0;
}

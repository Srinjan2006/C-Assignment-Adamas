#include <stdio.h>

int main() {
    float unit, bill;
    
    printf("Enter electric reading: ");
    scanf("%f", &unit);
    if (unit <= 0) {
        printf("Invalid input or no consumption.\n");
        return 0;
    }

    if (unit<= 100) {
        bill= unit * 10.0;
    } 
    else if (unit <= 150) {
        bill = (100 * 10.0) + (unit - 100) * 15.0;
    } 
    else if (unit <= 200) {
        bill = (100 * 10.0) + (50 * 15.0) + (unit - 150) * 20.0;
    } 
    else {
        bill = (100 * 10.0) + (50 * 15.0) + (50 * 20.0) + (unit - 200) * 25.0;
    }
    printf("Bill = %.2f\n", bill);
    return 0;
}
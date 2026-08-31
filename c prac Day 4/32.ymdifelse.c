#include <stdio.h>

int main() {
    int total_days, y, m, d, r;

    printf("Enter total number of days: ");
    scanf("%d", &total_days);
    if (total_days < 0) {
        printf("Days cannot be negative.\n");
    } else {
        y = total_days / 365;
        r = total_days % 365;
		m = r/ 30;
        d = r % 30;
		printf("Age: %d Years, %d Months, %d Days\n", y,m,d);
    }

    return 0;
}
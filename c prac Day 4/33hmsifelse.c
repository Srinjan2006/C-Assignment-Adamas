#include <stdio.h>

int main() {
    int total_seconds, h, m, s, r;

    printf("Enter total number of seconds: ");
    scanf("%d", &total_seconds);
    if (total_seconds < 0) {
        printf("Seconds cannot be negative.\n");
    } else {
        h = total_seconds / 3600;
        r = total_seconds % 3600;
        m = r / 60;
        s = r % 60;
        printf("Time: %d Hours, %d Minutes, %d Seconds\n", h, m, s);
    }

    return 0;
}
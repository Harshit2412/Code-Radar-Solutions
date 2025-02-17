#include <stdio.h>

int main() {
    int year;

    // Taking input
    scanf("%d", &year);

    // Checking if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }

    return 0;
}
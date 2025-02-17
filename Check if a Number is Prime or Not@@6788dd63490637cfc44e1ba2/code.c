#include <stdio.h>

int main() {
    int num, i, flag = 0;

    // Taking input
    scanf("%d", &num);

    // Check if the number is greater than 1
    if (num > 1) {
        // Check for factors from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }

        // Output the result
        if (flag == 0) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    } else {
        printf("Not Prime\n");
    }

    return 0;
}

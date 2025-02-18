#include <stdio.h>

int main() {
    int num, shift;

    // Taking input
    scanf("%d %d", &num, &shift);

    // Performing bitwise left shift operation
    int result = num >> shift;

    // Printing the result
    printf("%d\n", result);

    return 0;
}
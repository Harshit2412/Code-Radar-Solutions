#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input
    scanf("%d %d", &num1, &num2);

    // Performing bitwise AND operation
    int result = num1 & num2;

    // Printing the result
    printf("%d\n", result);

    return 0;
}
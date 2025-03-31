#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read input
    
    for(int i = 1; i <= N; i++) {
        // Print spaces
        for(int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for(int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");  // Move to next line
    }
    
    return 0;
}
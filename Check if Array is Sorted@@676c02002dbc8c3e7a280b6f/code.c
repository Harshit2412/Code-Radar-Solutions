#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if sorted
    int isSorted = 1; // Assume sorted

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0; // Found unsorted pair
            break;
        }
    }

    if (isSorted)
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    return 0;
}

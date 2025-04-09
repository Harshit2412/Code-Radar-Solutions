#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Reading array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort to sort array in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the maximum element (last element in sorted array)
    printf("%d\n", arr[n - 1]);

    return 0;
}

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if(n == 0) {
        printf("-1");
        return 0;
    }
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Handle single element case
    if(n == 1) {
        printf("%d", arr[0]);
        return 0;
    }
    
    // Check first element (only needs to be greater than next)
    if(arr[0] > arr[1]) {
        printf("%d", arr[0]);
        return 0;
    }
    
    // Check middle elements
    for(int i = 1; i < n-1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            printf("%d", arr[i]);
            return 0;
        }
    }
    
    // Check last element (only needs to be greater than previous)
    if(arr[n-1] > arr[n-2]) {
        printf("%d", arr[n-1]);
        return 0;
    }
    
    // If no peak found
    printf("-1");
    return 0;
}
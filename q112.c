#include <stdio.h>

int main() {
    int n;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max_current = arr[0];
    int max_global = arr[0];
    
    for(int i = 1; i < n; i++) {
        // Extend the current subarray or start a new subarray at arr[i]
        if(max_current + arr[i] > arr[i]) {
            max_current = max_current + arr[i];
        } else {
            max_current = arr[i];
        }
        
        // Update global maximum if needed
        if(max_current > max_global) {
            max_global = max_current;
        }
    }
    
    printf("%d\n", max_global);
    return 0;
}

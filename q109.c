#include <stdio.h>

int main() {
    int n, k;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input subarray size k
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid subarray size\n");
        return 0;
    }

    int windowSum = 0;
    int maxSum = 0;

    // Compute sum of first window
    for(int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;

    // Slide the window
    for(int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        if(windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    prin

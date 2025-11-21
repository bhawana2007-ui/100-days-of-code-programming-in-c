#include <stdio.h>

int main() {
    int n, k;
    
    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input window size
    printf("Enter window size k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid window size\n");
        return 0;
    }

    int negIndices[n]; // Array to store indices of negative numbers
    int front = 0, rear = 0; // For maintaining queue

    // Process first k elements
    for(int i = 0; i < k; i++) {
        if(arr[i] < 0) {
            negIndices[rear++] = i;
        }
    }

    // Process all windows
    for(int i = k; i <= n; i++) {
        // Print first negative for current window
        if(front < rear) {
            printf("%d ", arr[negIndices[front]]);
        } else {
            printf("0 ");
        }

        // Remove indices which are out of this window
        while(front < rear && negIndices[front] <= i - k) {
            front++;
        }

        // Add next element if within array bounds
        if(i < n && arr[i] < 0) {
            negIndices[rear++] = i;
        }
    }

    printf("\n");
    return 0;
}

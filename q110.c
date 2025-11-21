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
    
    // Input window size
    printf("Enter window size k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid window size\n");
        return 0;
    }

    int deque[n]; // Stores indices of elements
    int front = 0, rear = 0; // deque pointers

    for(int i = 0; i < n; i++) {
        // Remove indices which are out of this window
        while(front < rear && deque[front] <= i - k) {
            front++;
        }

        // Remove indices whose elements are smaller than current element
        while(front < rear && arr[deque[rear - 1]] <= arr[i]) {
            rear--;
        }

        // Add current element index
        deque[rear++] = i;

        // Print max for the current window
        if(i >= k - 1) {
            printf("%d ", arr[deque[front]]);
        }
    }

    printf("\n");
    return 0;
}

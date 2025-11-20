#include <stdio.h>

// Function to reverse a part of the array
void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n; // Handle cases where k > n

    // Rotate using reversal algorithm
    reverse(arr, 0, n - 1);       // Reverse the whole array
    reverse(arr, 0, k - 1);       // Reverse first k elements
    reverse(arr, k, n - 1);       // Reverse remaining elements

    // Print rotated array
    printf("Array after rotating right by %d positions: ", k);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

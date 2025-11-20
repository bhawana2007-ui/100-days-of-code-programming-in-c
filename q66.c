#include <stdio.h>

int main() {
    int n, key;

    // Input the size of the array
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n+1]; // +1 to accommodate the new element

    // Input the sorted array elements
    printf("Enter %d elements in sorted order: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &key);

    int i;
    // Find the correct position for the new element
    for(i = n - 1; i >= 0 && arr[i] > key; i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }

    // Insert the new element
    arr[i + 1] = key;
    n++; // Increase the size of the array

    // Print the updated array
    printf("Array after insertion: ");
    for(int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}

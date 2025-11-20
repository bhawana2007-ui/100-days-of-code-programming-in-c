#include <stdio.h>

int main() {
    int n, pos, key;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 to accommodate the new element

    // Input array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and element to insert
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Shift elements to the right
    for(int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the element
    arr[pos - 1] = key;
    n++; // Increase the size of the array

    // Print the updated array
    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

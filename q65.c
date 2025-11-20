#include <stdio.h>

int main() {
    int n, key;

    // Input array size
    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array elements
    printf("Enter %d elements in sorted order: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Binary search
    int low = 0, high = n - 1, found = 0, mid;
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found) {
        printf("Element %d found at position %d.\n", key, mid + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int m, n;
    
    // Input size of first array
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter %d elements of first array in sorted order: ", m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter %d elements of second array in sorted order: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merging arrays
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    while(i < m && j < n) {
        if(arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements, if any
    while(i < m) {
        merged[k++] = arr1[i++];
    }
    while(j < n) {
        merged[k++] = arr2[j++];
    }

    // Print merged array
    printf("Merged sorted array: ");
    for(i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n1, n2;

    // Input sizes of two arrays
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], merged[n1 + n2];

    // Input elements of first array
    printf("Enter elements of first array: ");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements of second array
    printf("Enter elements of second array: ");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays into 'merged'
    for(int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array
    printf("Merged array: ");
    for(int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

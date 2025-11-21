#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (numbers from 0 to %d, one missing):\n", n, n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = n; // initialize with n
    for(i = 0; i < n; i++) {
        missing ^= i ^ arr[i]; // XOR all indices and array elements
    }

    printf("The missing number is: %d\n", missing);

    return 0;
}

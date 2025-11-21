#include <stdio.h>

int main() {
    int n;
    
    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int nums[n], answer[n];
    
    // Input array elements
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Compute prefix products
    int prefix = 1;
    for(int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Step 2: Multiply by suffix products
    int suffix = 1;
    for(int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Print the answer array
    for(int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");

    return 0;
}

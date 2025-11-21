#include <stdio.h>

int main() {
    int n, target;
    
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int nums[n];
    
    // Input elements of the array
    printf("Enter %d positive integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input the target value
    printf("Enter the target value: ");
    scanf("%d", &target);

    int found = 0; // Flag to indicate if solution is found

    // Check all pairs
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;  // Break inner loop
            }
        }
        if(found) break;  // Break outer loop if solution found
    }

    if(!found) {
        printf("-1 -1\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Number of rows in the top half

    // Top half of the pattern
    for(i = 1; i <= n; i++) {
        // Print stars (odd numbers: 1, 3, 5, ...)
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the pattern
    for(i = n-1; i >= 1; i--) {
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

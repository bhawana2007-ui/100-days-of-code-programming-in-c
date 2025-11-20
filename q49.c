#include <stdio.h>

int main() {
    int i, j, start;

    // Outer loop for rows
    for(i = 5; i >= 1; i--) {
        // Inner loop for printing numbers
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next row
    }

    return 0;
}

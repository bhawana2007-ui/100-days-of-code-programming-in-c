#include <stdio.h>

int main() {
    int n, i;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    // Loop from 1 to n to find factors
    for(i = 1; i <= n; i++) {
        if(n % i == 0) { // If i divides n completely
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Find sum of divisors
    for(int i = 1; i <= n / 2; i++) { // Proper divisors are less than n
        if(n % i == 0) {
            sum += i;
        }
    }

    // Check if sum equals the number
    if(sum == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);

    return 0;
}

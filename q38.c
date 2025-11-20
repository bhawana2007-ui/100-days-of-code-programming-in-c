#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n; // Store original number

    // Loop to extract digits and add them
    while(temp != 0) {
        digit = temp % 10;  // Get last digit
        sum += digit;       // Add digit to sum
        temp /= 10;         // Remove last digit
    }

    printf("Sum of digits of %d is: %d\n", n, sum);

    return 0;
}

#include <stdio.h>

int main() {
    int n, digit;
    long product = 1; // Use long in case of large numbers
    int hasOdd = 0;   // Flag to check if there is at least one odd digit

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n; // Store original number

    // Loop to extract digits
    while(temp != 0) {
        digit = temp % 10;      // Get last digit
        if(digit % 2 != 0) {    // Check if digit is odd
            product *= digit;   // Multiply odd digits
            hasOdd = 1;         // Mark that there is at least one odd digit
        }
        temp /= 10;             // Remove last digit
    }

    if(hasOdd)
        printf("Product of odd digits of %d is: %ld\n", n, product);
    else
        printf("No odd digits in %d\n", n);

    return 0;
}

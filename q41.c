#include <stdio.h>
#include <math.h>

int main() {
    int n, num, firstDigit, lastDigit, digits, swapped;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;            // Store original number
    lastDigit = num % 10;  // Get last digit

    // Count the number of digits
    digits = (int)log10(num); // number of digits - 1

    firstDigit = num / (int)pow(10, digits); // Get first digit

    // Swap first and last digit
    swapped = lastDigit * (int)pow(10, digits)  // Place last digit in first position
              + (num % (int)pow(10, digits))   // Middle part remains same
              - lastDigit                      // Remove last digit from middle part
              + firstDigit;                    // Place first digit in last position

    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}

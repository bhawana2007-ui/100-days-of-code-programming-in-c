#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, digits = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    // Count number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of digits raised to the power 'digits'
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // Check Armstrong
    if ((int)sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}

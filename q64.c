#include <stdio.h>

int main() {
    long long num; // use long long for large numbers
    int count[10] = {0}; // array to store count of digits 0-9

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num; // handle negative numbers
    }

    // Count digits
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum count
    int maxCount = count[0];
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs most is %d and it occurs %d times.\n", maxDigit, maxCount);

    return 0;
}

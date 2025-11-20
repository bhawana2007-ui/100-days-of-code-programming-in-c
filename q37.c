#include <stdio.h>

// Function to find HCF using Euclidean algorithm
int hcf(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, lcmValue;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate LCM using LCM = (a * b) / HCF
    lcmValue = (a * b) / hcf(a, b);

    printf("LCM of %d and %d is: %d\n", a, b, lcmValue);

    return 0;
}

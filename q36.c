#include <stdio.h>

int main() {
    int a, b, temp, hcf;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a;
    int y = b;

    // Euclidean algorithm
    while(y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x; // HCF of a and b

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);

    return 0;
}

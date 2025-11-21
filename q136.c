#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    enum Menu choice;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nMenu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("\n");

    switch(choice) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d\n", a - b);
            brea

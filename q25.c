#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c to ignore newline

    switch (op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error! Division by zero not allowed.\n");
            else
                printf("Result = %d\n", a / b);
            break;

        case '%':
            if (b == 0)
                printf("Error! Modulo by zero not allowed.\n");
            else
                printf("Result = %d\n", a % b);
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

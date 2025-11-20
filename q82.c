#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')          // avoid printing newline from fgets
            printf("%c\n", str[i]);
    }

    return 0;
}

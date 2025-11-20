#include <stdio.h>

int main() {
    char str[200];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')   // ignore newline from fgets
            count++;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}

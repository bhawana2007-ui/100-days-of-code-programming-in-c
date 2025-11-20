#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline from fgets
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

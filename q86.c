#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, len, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline from fgets
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}

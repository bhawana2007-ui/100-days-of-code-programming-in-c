#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove newline

    // Count frequency of lowercase letters
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i]-'a']++;
        }
    }

    // Find first repeating lowercase letter
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && count[str[i]-'a'] > 1) {
            printf("First repeating lowercase alphabet: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}

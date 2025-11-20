#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 256

int main() {
    char str1[100], str2[100];
    int count1[MAX] = {0}, count2[MAX] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // Count frequency of characters in str1
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != ' ')
            count1[tolower(str1[i])]++;
    }

    // Count frequency of characters in str2
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != ' ')
            count2[tolower(str2[i])]++;
    }

    // Compare frequency counts
    for (i = 0; i < MAX; i++) {
        if (count1[i] != count2[i]) {
            printf("Not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}

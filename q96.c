#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start, end, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove newline

    len = strlen(str);
    start = 0;

    for (i = 0; i <= len; i++) {
        // If space or end of string
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            // Reverse the word
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;  // next word start
        }
    }

    printf("Sentence with reversed words: %s\n", str);

    return 0;
}

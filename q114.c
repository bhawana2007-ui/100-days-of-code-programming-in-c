#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int lastIndex[256];  // Stores last index of each character
    int n, maxLen = 0, start = 0;

    // Input string
    printf("Enter the string: ");
    scanf("%s", s);

    n = strlen(s);

    // Initialize lastIndex array to -1
    for(int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    for(int i = 0; i < n; i++) {
        char c = s[i];

        // If character was seen after start, move start
        if(lastIndex[(int)c] >= start) {
            start = lastIndex[(int)c] + 1;
        }

        // Update last seen index
        lastIndex[(int)c] = i;

        // Update max length
        if(i - start + 1 > maxLen) {
            maxLen = i - start + 1;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}

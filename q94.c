#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char *word;
    char longest[100] = "";
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';  // remove newline

    // Split sentence into words using space
    word = strtok(sentence, " ");
    while (word != NULL) {
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %lu\n", strlen(longest));

    return 0;
}

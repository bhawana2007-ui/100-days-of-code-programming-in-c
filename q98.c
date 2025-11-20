#include <stdio.h>
#include <string.h>

int main() {
    char name[100], *word;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';  // remove newline

    word = strtok(name, " ");   // first word

    while (word != NULL) {
        if (strtok(NULL, " ") == NULL) {
            // last word (surname)
            printf("%s", word);
            break;
        } else {
            // print initial
            printf("%c. ", word[0]);
        }
        word = strtok(NULL, " ");
    }

    return 0;
}

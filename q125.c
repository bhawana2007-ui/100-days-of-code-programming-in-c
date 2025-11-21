#include <stdio.h>

int main() {
    char filename[100];
    char text[500];
    FILE *fp;

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    // Clear input buffer before using fgets
    getchar(); // to consume leftover newline from previous input

    // Ask user for text to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Write text to file
    fprintf(fp, "%s", text);

    printf("Text appended successfully.\n");

    fclose(fp);

    return 0;
}

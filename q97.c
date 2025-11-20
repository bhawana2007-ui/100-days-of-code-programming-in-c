#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';  // remove newline

    // Print first letter
    if (name[0] != ' ')
        printf("%c ", name[0]);

    // Print initial after every space
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ')
            printf("%c ", name[i+1]);
    }

    return 0;
}

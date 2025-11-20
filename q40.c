#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    // Input binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's complement of %s is: ", binary);

    // Loop through each character
    for(int i = 0; i < strlen(binary); i++) {
        if(binary[i] == '0')
            printf("1");  // Flip 0 to 1
        else if(binary[i] == '1')
            printf("0");  // Flip 1 to 0
        else {
            printf("\nInvalid binary number!\n");
            return 1;
        }
    }

    printf("\n");
    return 0;
}

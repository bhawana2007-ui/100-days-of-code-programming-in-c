#include <stdio.h>

enum Colors { RED, GREEN, BLUE = 5, YELLOW };

int main() {
    printf("RED    = %d\n", RED);
    printf("GREEN  = %d\n", GREEN);
    printf("BLUE   = %d\n", BLUE);
    printf("YELLOW = %d\n", YELLOW);

    return 0;
}

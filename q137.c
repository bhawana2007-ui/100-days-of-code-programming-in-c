#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r;

    printf("Enter role (0 = ADMIN, 1 = USER, 2 = GUEST): ");
    scanf("%d", &r);

    printf("\n");

    switch(r) {
        case ADMIN:
            printf("Welcome, Admin! You have full system access.\n");
            break;

        case USER:
            printf("Hello, User! You have limited access.\n");
            break;

        case GUEST:
            printf("Greetings, Guest! You can browse only.\n");
            break;

        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}

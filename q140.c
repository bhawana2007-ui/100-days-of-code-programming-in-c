#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0=Male, 1=Female, 2=Other): ");
    scanf("%d", &p.gender);

    printf("\n--- Person Details ---\n");
    printf("Name   : %s\n", p.name);

    printf("Gender : ");
    switch(p.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
        default:     printf("Invalid\n");
    }

    return 0;
}

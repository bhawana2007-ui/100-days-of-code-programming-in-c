#include <stdio.h>

enum Subject { MATHS, SCIENCE, ENGLISH };

struct Student {
    char name[50];
    int roll;
    enum Subject subject;
};

int main() {
    struct Student s[5];
    int i;

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter subject (0=Maths, 1=Science, 2=English): ");
        scanf("%d", &s[i].subject);
    }

    printf("\n--- Details of All Students ---\n");

    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name : %s\n", s[i].name);
        printf("Roll : %d\n", s[i].roll);

        printf("Subject: ");
        switch(s[i].subject) {
            case MATHS:   printf("Maths\n"); break;
            case SCIENCE: printf("Science\n"); break;
            case ENGLISH: printf("English\n"); break;
            default:      printf("Unknown\n");
        }
    }

    return 0;
}

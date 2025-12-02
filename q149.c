#include <stdio.h>
#include <stdlib.h>

enum Grade { A = 1, B, C, D, E };

struct Student {
    char name[20];
    int age;
    enum Grade grade;
};

int main() {
    struct Student *s = malloc(sizeof(struct Student));

    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter age: ");
    scanf("%d", &s->age);

    s->grade = B;

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("Grade: %d\n", s->grade);

    free(s);
    return 0;
}

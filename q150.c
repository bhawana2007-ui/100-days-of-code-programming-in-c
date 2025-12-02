#include <stdio.h>

enum Day { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

struct Student {
    char name[20];
    int age;
    enum Day joiningDay;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter age: ");
    scanf("%d", &ptr->age);

    ptr->joiningDay = WEDNESDAY;

    printf("\n---- Student Details ----\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Joining Day: %d\n", ptr->joiningDay);

    return 0;
}

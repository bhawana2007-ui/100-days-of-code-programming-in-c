#include <stdio.h>

enum Grade { FAIL, PASS, DISTINCTION };

struct Student {
    char name[50];
    int roll_no;
    float marks;
    enum Grade grade;
};

int main() {
    struct Student s;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Assign grade based on marks
    if (s.marks < 40)
        s.grade = FAIL;
    else if (s.marks < 75)
        s.grade = PASS;
    else
        s.grade = DISTINCTION;

    // Print student details
    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", s.name);
    printf("Roll No   : %d\n", s.roll_no);
    printf("Marks     : %.2f\n", s.marks);

    printf("Grade     : ");
    switch (s.grade) {
        case FAIL:        printf("Fail\n"); break;
        case PASS:        printf("Pass\n"); break;
        case DISTINCTION: printf("Distinction\n"); break;
    }

    return 0;
}

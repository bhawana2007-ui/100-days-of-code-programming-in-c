#include <stdio.h>

// Enum for Grade Category
enum Grade {
    FAIL,
    PASS,
    MERIT,
    DISTINCTION
};

// Structure for Student
struct Student {
    int roll;
    char name[50];
    float marks;
    enum Grade grade;
};

// Function to find top student
struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];  // returning structure
}

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input students
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        // Decide grade based on marks
        if (s[i].marks < 35)
            s[i].grade = FAIL;
        else if (s[i].marks < 50)
            s[i].grade = PASS;
        else if (s[i].marks < 75)
            s[i].grade = MERIT;
        else
            s[i].grade = DISTINCTION;
    }

    // Get top student
    struct Student top = getTopStudent(s, n);

    // Print top student's details
    printf("\n--- Top Student ---\n");
    printf("Roll: %d\n", top.roll);
    printf("Name: %s\n", top.name);
    printf("Marks: %.2f\n", top.marks);

    printf("Grade: ");
    switch (top.grade) {
        case FAIL:        printf("FAIL\n"); break;
        case PASS:        printf("PASS\n"); break;
        case MERIT:       printf("MERIT\n"); break;
        case DISTINCTION: printf("DISTINCTION\n"); break;
    }

    return 0;
}

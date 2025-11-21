#include <stdio.h>

enum Subject { MATHS, SCIENCE, ENGLISH };

struct Student {
    char name[50];
    int marks;
    enum Subject subject;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks: ");
        scanf("%d", &students[i].marks);

        printf("Enter subject (0=Maths, 1=Science, 2=English): ");
        scanf("%d", &students[i].subject);
    }

    // Find student with highest marks
    int maxIndex = 0;
    for(i = 1; i < n; i++) {
        if(students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Print the student with highest marks
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name   : %s\n", students[maxIndex].name);
    printf("Marks  : %d\n", students[maxIndex].marks);

    printf("Subject: ");
    switch(students[maxIndex].subject) {
        case MATHS:   printf("Maths\n"); break;
        case SCIENCE: printf("Science\n"); break;
        case ENGLISH: printf("English\n"); break;
        default:      printf("Unknown\n");
    }

    return 0;
}

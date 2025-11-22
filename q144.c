#include <stdio.h>

// Define a structure
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function that accepts a structure as a parameter
void printStudent(struct Student s) {
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    // Create and initialize a structure variable
    struct Student st = {101, "Alice", 92.5};

    // Pass structure to function
    printStudent(st);

    return 0;
}

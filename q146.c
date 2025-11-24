#include <stdio.h>

// Enum for Department
enum Department {
    HR = 1,
    SALES,
    TECH,
    FINANCE
};

// Nested Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure containing Date
struct Employee {
    int id;
    char name[50];
    enum Department dept;
    struct Date joinDate;
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("\nSelect Department:\n1. HR\n2. SALES\n3. TECH\n4. FINANCE\nEnter choice: ");
    scanf("%d", (int*)&emp.dept);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joinDate.day, &emp.joinDate.month, &emp.joinDate.year);

    // Print employee details
    printf("\n--- Employee Details ---\n");
    printf("ID          : %d\n", emp.id);
    printf("Name        : %s\n", emp.name);

    // Print department name from enum
    printf("Department  : ");
    switch (emp.dept) {
        case HR: printf("HR\n"); break;
        case SALES: printf("SALES\n"); break;
        case TECH: printf("TECH\n"); break;
        case FINANCE: printf("FINANCE\n"); break;
        default: printf("Invalid\n"); 
    }

    printf("Joining Date: %02d-%02d-%04d\n",
           emp.joinDate.day,
           emp.joinDate.month,
           emp.joinDate.year);

    return 0;
}

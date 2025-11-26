#include <stdio.h>
#include <stdlib.h>

typedef enum {
    INTERN = 1,
    STAFF,
    MANAGER
} Position;

typedef struct {
    int id;
    char name[30];
    float salary;
    Position pos;
} Employee;

int main() {
    Employee emp, empRead;
    FILE *fp;

    
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Select Position (1=INTERN, 2=STAFF, 3=MANAGER): ");
    scanf("%d", (int *)&emp.pos);

    fwrite(&emp, sizeof(Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee record saved successfully!\n");
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    fread(&empRead, sizeof(Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Data Read from File ---\n");
    printf("ID       : %d\n", empRead.id);
    printf("Name     : %s\n", empRead.name);
    printf("Salary   : %.2f\n", empRead.salary);

    printf("Position : ");
    switch (empRead.pos) {
        case INTERN:  printf("INTERN\n"); break;
        case STAFF:   printf("STAFF\n"); break;
        case MANAGER: printf("MANAGER\n"); break;
        default:      printf("UNKNOWN\n");
    }

    return 0;
}

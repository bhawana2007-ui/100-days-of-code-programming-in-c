#include <string.h>

int areStudentsEqual(Student a, Student b) {
    if (a.id != b.id) return 0;
    if (a.score != b.score) return 0;
    if (strcmp(a.name, b.name) != 0) return 0;
    
    return 1; // structs are identical
}

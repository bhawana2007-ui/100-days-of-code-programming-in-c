#include <stdio.h>

enum Days { MON, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    enum Days d;

    const char *dayNames[] = {
        "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"
    };

    printf("Enum names and their integer values:\n\n");

    for(d = MON; d <= SUN; d++) {
        printf("%s = %d\n", dayNames[d], d);
    }

    return 0;
}

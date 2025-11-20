#include <stdio.h>

int main() {
    char date[20];
    int dd, mm, yy;
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun",
                      "Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yy);

    printf("Converted format: %02d-%s-%d\n", dd, months[mm-1], yy);

    return 0;
}

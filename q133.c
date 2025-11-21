#include <stdio.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month m;
    int days;

    for(m = JAN; m <= DEC; m++) {
        switch(m) {
            case JAN: days = 31; break;
            case FEB: days = 28; break; // ignoring leap year
            case MAR: days = 31; break;
            case APR: days = 30; break;
            case MAY: days = 31; break;
            case JUN: days = 30; break;
            case JUL: days = 31; break;
            case AUG: days = 31; break;
            case SEP: days = 30; break;
            case OCT: days = 31; break;
            case NOV: days = 30; break;
            case DEC: days = 31; break;
        }

        // Print month name and days
        switch(m) {
            case JAN: printf("January   : %d days\n", days); break;
            case FEB: printf("February  : %d days\n", days); break;
            case MAR: printf("March     : %d days\n", days); break;
            case APR: printf("April     : %d days\n", days); break;
            case MAY: printf("May       : %d days\n", days); break;
            case JUN: printf("June      : %d days\n", days); break;
            case JUL: printf("July      : %d days\n", days); break;
            case AUG: printf("August    : %d days\n", days); break;
            case SEP: printf("September : %d days\n", days); break;
            case OCT: printf("October   : %d days\n", days); break;
            case NOV: printf("November  : %d days\n", days); break;
            case DEC: printf("December  : %d days\n", days); break;
        }
    }

    return 0;
}

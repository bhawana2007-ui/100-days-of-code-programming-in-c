#include <stdio.h>

int main() {
    FILE *file;
    int num, count = 0;
    long sum = 0;  // long in case of large sum
    double average;

    // Open the file in read mode
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read integers until end of file
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    average = (double)sum / count;

    printf("Sum: %ld\n", sum);
    printf("Average: %.2lf\n", average);

    return 0;
}

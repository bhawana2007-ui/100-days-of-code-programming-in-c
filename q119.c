#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (only one element is repeated):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assuming array elements are positive and <= n-1
    int repeated = -1;
    int visited[n];  // auxiliary array to mark seen elements
    for(i = 0; i < n; i++) visited[i] = 0;

    for(i = 0; i < n; i++) {
        if(visited[arr[i]] == 1) {
            repeated = arr[i];
            break;
        } else {
            visited[arr[i]] = 1;
        }
    }

    if(repeated != -1)
        printf("The repeated element is: %d\n", repeated);
    else
        printf("No repeated element found.\n");

    return 0;
}

#include <stdio.h>
int main() {
    int n, i, count = 0;
    float sum = 0.0, average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Error: Array size must be positive.\n");
        return 1;
    }

    float arr[n];
    printf("\nEnter %d float values:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }


    average = sum / n;
    printf("\n=== Results ===\n");
    printf("Sum of all elements: %.2f\n", sum);
    printf("Average of all elements: %.2f\n", average);


    for(i = 0; i < n; i++) {
        if(arr[i] > average) {
            count++;
        }
    }
    printf("Number of elements greater than average: %d\n", count);

    if(count > 0) {
        printf("\nElements greater than average (%.2f):\n", average);
        for(i = 0; i < n; i++) {
            if(arr[i] > average) {
                printf("arr[%d] = %.2f\n", i, arr[i]);
            }
        }
    } else {
        printf("\nNo elements are greater than the average.\n");
    }

    return 0;
}

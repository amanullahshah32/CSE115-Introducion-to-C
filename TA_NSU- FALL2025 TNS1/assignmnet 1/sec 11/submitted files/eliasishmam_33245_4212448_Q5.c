
#include <stdio.h>

int main() {
    int n, count = 0;
    float sum = 0, avg;

    printf("Enter array size: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Average: %.2f\n", avg);

    printf("Elements greater than average:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            printf("%.2f ", arr[i]);
            count++;
        }
    }

    printf("\nNumber of elements greater than average: %d\n", count);

    return 0;
}


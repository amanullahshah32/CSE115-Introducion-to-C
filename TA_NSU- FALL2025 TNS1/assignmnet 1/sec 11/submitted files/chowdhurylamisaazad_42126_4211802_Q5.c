#include <stdio.h>

int main() {
    int n;
    float arr[100];
    float sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d float values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Average = %.2f\n", avg);

    printf("Elements greater than average:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            printf("%.2f ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}


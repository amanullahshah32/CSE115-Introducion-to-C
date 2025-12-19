#include <stdio.h>

int main() {
    int n, i, count = 0;
    float arr[100];
    float sum = 0, avg;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d float elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Average = %f, The elements greater than average are: ", avg);
    for (i = 0; i < n; i++) {
        if (arr[i] > avg) {
            printf("%g", arr[i]);
            count++;
            if (count < n) printf(", ");
        }
    }
    printf("\n");

    return 0;
}

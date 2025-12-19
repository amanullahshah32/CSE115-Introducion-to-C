#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float arr[100], sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d float values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("\nAverage = %.2f\n", avg);

    printf("\nElements greater than average: \n");

    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            printf("%.2f \n", arr[i]);
        }
    }

    printf("\n");
    return 0;
}

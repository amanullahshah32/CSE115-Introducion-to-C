#include <stdio.h>

int main() {
    int num;
    printf("Enter number of float elements: ");
    scanf("%d", &num);

    float a[num];
    int i;

    printf("Enter %d float values: ", num);
    for (i = 0; i < num; i++) {
        scanf("%f", &a[i]);
    }

    float sum = 0;
    for (i = 0; i < num; i++) {
        sum += a[i];
    }

    float avg = sum / num;
    printf("Average = %f\n", avg);

    int count = 0;
    printf("Elements greater than average: ");
    for (i = 0; i < num; i++) {
        if (a[i] > avg) {
            printf("%f ", a[i]);
            count++;
        }
    }

    printf("\nNumber of elements greater than average = %d\n", count);

    return 0;
}



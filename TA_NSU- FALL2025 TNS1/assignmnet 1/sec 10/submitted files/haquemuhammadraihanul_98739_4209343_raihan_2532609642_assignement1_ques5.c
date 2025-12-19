#include <stdio.h>

int main(void)
{
    float a[100], sum = 0, avg;
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d float values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &a[i]);
        sum += a[i];
    }

    avg = sum / n;
    printf("Average = %.6f\n", avg);
    printf("The elements greater than average are: ");

    for (i = 0; i < n; i++)
        if (a[i] > avg)
            printf("%.0f ", a[i]);   // sample used integers like 12 13...

    printf("\n");
    return 0;
}


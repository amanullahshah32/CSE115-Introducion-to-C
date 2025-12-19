#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i, first = 1, count = 0;
    double sum = 0.0, avg;
    float *a;

    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid size.\n");
        return 1;
    }

    a = (float *)malloc((size_t)n * sizeof(float));
    if (!a) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; ++i) {
        if (scanf("%f", &a[i]) != 1) {
            fprintf(stderr, "Invalid input.\n");
            free(a);
            return 1;
        }
        sum += a[i];
    }

    avg = sum / n;

    printf("Average = %.6f, The elements greater than average are:", avg);

    for (i = 0; i < n; ++i) {
        if ((double)a[i] > avg) {
            if (!first) {
                printf(" ");
            }
            printf("%s%g", first ? " " : ", ", a[i]);
            first = 0;
            ++count;
        }
    }

    if (count == 0) {
        printf(" none");
    }
    printf("\n");

    free(a);
    return 0;
}

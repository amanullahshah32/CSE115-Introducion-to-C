
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid size\n");
        return 1;
    }

    int *a = (int *)malloc((n > 0 ? n : 1) * sizeof *a);
    if (!a) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &a[i]) != 1) {
            fprintf(stderr, "Invalid element\n");
            free(a);
            return 1;
        }
    }

    int k;
    if (scanf("%d", &k) != 1) {
        fprintf(stderr, "Invalid index\n");
        free(a);
        return 1;
    }

    if (k < 0 || k >= n) {
        printf("Invalid index\n");
        free(a);
        return 0;
    }

    // Delete element at index k by shifting left
    for (int i = k; i < n - 1; ++i) {
        a[i] = a[i + 1];
    }
    n--;

    if (n == 0) {
        printf("Array is empty\n");
    } else {
        for (int i = 0; i < n; ++i) {
            if (i) printf(" ");
            printf("%d", a[i]);
        }
        printf("\n");
    }

    free(a);
    return 0;
}

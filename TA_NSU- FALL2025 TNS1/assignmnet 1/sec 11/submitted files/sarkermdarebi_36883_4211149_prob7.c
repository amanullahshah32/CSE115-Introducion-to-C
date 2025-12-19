#include <stdio.h>
#include <stdlib.h>

static int cmp_int(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n;

    printf("Input the number of elements to be stored in array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (!arr) {
        return 0;
    }

    printf("Input elements are: ");
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 0;
        }
    }

    qsort(arr, n, sizeof(int), cmp_int);

    int duplicates = 0;
    for (int i = 0; i < n; ) {
        int j = i + 1;
        while (j < n && arr[j] == arr[i]) {
            ++j;
        }
        if (j - i > 1) {
            ++duplicates;  // value at arr[i] appears more than once
        }
        i = j;
    }

    printf("Total number of duplicate element found in array: %d\n", duplicates);

    free(arr);
    return 0;
}

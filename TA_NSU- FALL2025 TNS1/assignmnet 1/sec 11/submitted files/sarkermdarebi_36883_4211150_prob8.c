
#include <stdio.h>
#include <stdlib.h>

void RevArr(int arr[], int size) {
    if (arr == NULL || size <= 1) return;

    int i = 0, j = size - 1;
    while (i < j) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        ++i;
        --j;
    }
}

static void PrintArr(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (i) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int n;
    if (printf("Enter number of elements: ") < 0) return 1;
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    if (n < 0) {
        fprintf(stderr, "Size must be non-negative.\n");
        return 1;
    }

    int *arr = NULL;
    if (n > 0) {
        arr = (int *)malloc((size_t)n * sizeof(int));
        if (!arr) {
            fprintf(stderr, "Memory allocation failed.\n");
            return 1;
        }
        printf("Enter %d integers: ", n);
        for (int i = 0; i < n; ++i) {
            if (scanf("%d", &arr[i]) != 1) {
                fprintf(stderr, "Invalid input.\n");
                free(arr);
                return 1;
            }
        }
    }

    RevArr(arr, n);

    printf("Reversed: ");
    PrintArr(arr, n);

    free(arr);
    return 0;
}

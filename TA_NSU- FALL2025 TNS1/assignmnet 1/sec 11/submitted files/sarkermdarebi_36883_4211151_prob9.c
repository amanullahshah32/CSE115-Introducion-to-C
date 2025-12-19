#include <stdio.h>
#include <stdlib.h>

void shiftArr1Pos(int arr[], int arrSize) {
    if (arrSize <= 1) return;
    int first = arr[0];
    for (int i = 0; i < arrSize - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[arrSize - 1] = first;
}

void arr1Rotate(int arr[], int arrSize, int rotFrom) {
    if (arrSize <= 1) return;
    int k = rotFrom % arrSize;
    if (k < 0) k += arrSize;
    for (int i = 0; i < k; ++i) {
        shiftArr1Pos(arr, arrSize);
    }
}

void printArray(const int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
}

void printSliceFrom(const int arr[], int n, int start) {
    for (int i = start; i < n; ++i) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
}

void printSlicePrior(const int arr[], int start) {
    for (int i = 0; i < start; ++i) {
        printf("%d", arr[i]);
        if (i < start - 1) printf(" ");
    }
    printf("\n");
}

int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("Enter array elements: ");
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input.\n");
            free(arr);
            return 1;
        }
    }

    int rotFrom;
    printf("Rotate from index: ");
    if (scanf("%d", &rotFrom) != 1) {
        fprintf(stderr, "Invalid index.\n");
        free(arr);
        return 1;
    }

    int k = rotFrom % n;
    if (k < 0) k += n;

    printf("From index %d Position, array elements are: ", k);
    printSliceFrom(arr, n, k);

    printf("Array elements prior to index %d: ", k);
    printSlicePrior(arr, k);

    arr1Rotate(arr, n, rotFrom);

    printf("After rotating from index %d, the array is: ", k);
    printArray(arr, n);

    free(arr);
    return 0;
}

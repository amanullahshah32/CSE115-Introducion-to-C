#include <stdio.h>

void sortArray(int *arr, int size) {
    int *ptr1, *ptr2;
    int temp;

    for (ptr1 = arr; ptr1 < arr + size - 1; ptr1++) {
        for (ptr2 = ptr1 + 1; ptr2 < arr + size; ptr2++) {
            if (*ptr1 > *ptr2) {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr;

    printf("Original array: ");
    for (ptr = arr; ptr < arr + size; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    sortArray(arr, size);

    printf("Sorted array:   ");
    for (ptr = arr; ptr < arr + size; ptr++)
        {
        printf("%d ", *ptr);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

void rev_arr1(int arr1[], int rev_arr1[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

void rev_arr2(int *arr1, int *rev_arr1, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int rev_arr_a[size], rev_arr_b[size];
    int i;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");


    rev_arr1(arr1, rev_arr_a, size);
    printf("Reversed (array notation): ");
    for (i = 0; i < size; i++) {
        printf("%d ", rev_arr_a[i]);
    }
    printf("\n");

    rev_arr2(arr1, rev_arr_b, size);
    printf("Reversed (pointer notation): ");
    for (i = 0; i < size; i++) {
        printf("%d ", rev_arr_b[i]);
    }
    printf("\n");

    return 0;
}

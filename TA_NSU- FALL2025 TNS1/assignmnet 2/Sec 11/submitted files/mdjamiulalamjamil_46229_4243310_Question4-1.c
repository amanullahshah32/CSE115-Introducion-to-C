#include <stdio.h>

// Function using array notation
void rev_arr(int arr1[], int rev_arr1[], int size) {
    for(int i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

// Function using pointer notation
void rev_arr2(int *arr1, int *rev_arr1, int size) {
    for(int i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int rev[5];
    int size = 5;

    rev_arr(arr, rev, size);

    printf("Reversed array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", rev[i]);
    }
    printf("\n");

    return 0;
}

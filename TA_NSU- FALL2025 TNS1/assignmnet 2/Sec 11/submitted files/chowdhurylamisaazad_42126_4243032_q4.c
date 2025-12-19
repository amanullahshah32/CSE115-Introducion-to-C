#include <stdio.h>

// a) Using array indexing
void rev_arr_index(int arr1[], int rev_arr1[], int size) {
    for (int i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

// b) Using pointers
void rev_arr_pointer(int *arr1, int *rev_arr1, int size) {
    for (int i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + (size - 1 - i));
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int rev[5];
    int size = 5;

    rev_arr_pointer(arr, rev, size);

    printf("Reversed Array: ");
    for(int i=0; i<size; i++) printf("%d ", rev[i]);
    return 0;
}

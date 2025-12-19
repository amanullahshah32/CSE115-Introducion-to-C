
#include <stdio.h>

void rev_arr_array(int arr1[], int rev_arr1[], int size) {
    for(int i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

void rev_arr_pointer(int *arr1, int *rev_arr1, int size) {
    for(int i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int rev[5];

    rev_arr_array(arr, rev, 5);

    printf("Original: 10 20 30 40 50\n");
    printf("Reversed: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", rev[i]);
    }

    return 0;
}

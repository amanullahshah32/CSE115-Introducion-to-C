#include <stdio.h>
void rev_arr(int arr1[], int rev_arr1[], int size) {
    for (int i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}
void rev_arr_ptr(int *arr1, int *rev_arr1, int size) {
    for (int i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}
void print_array(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}
int main() {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(original) / sizeof(original[0]);
    int reversed1[8];
    int reversed2[8];
    rev_arr(original, reversed1, size);
    printf("Original array:  ");
    print_array(original, size);
    printf("Reversed (a):    ");
    print_array(reversed1, size);
    printf("\n");
    rev_arr_ptr(original, reversed2, size);
    printf("Original array:  ");
    print_array(original, size);
    printf("Reversed (b):    ");
    print_array(reversed2, size);

    return 0;
}

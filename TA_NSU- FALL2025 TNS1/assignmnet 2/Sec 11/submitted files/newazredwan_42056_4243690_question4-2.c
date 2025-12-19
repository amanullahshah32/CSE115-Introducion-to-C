#include <stdio.h>

// a) Using array indexing
void rev_arr_indexing(int arr1[], int rev_arr1[], int size) {
    for (int i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

// b) Using pointers
void rev_arr_pointer(int *arr1, int *rev_arr1, int size) {
    for (int i = 0; i < size; i++) {
        // *(rev_arr1 + i) is equivalent to rev_arr1[i]
        // *(arr1 + (size - 1 - i)) gets the element from the end of the source array
        *(rev_arr1 + i) = *(arr1 + (size - 1 - i));
    }
}

int main() {
    int original[] = {1, 2, 3, 4, 5};
    int reverse_a[5];
    int reverse_b[5];
    int size = 5;

    // Test version A
    rev_arr_indexing(original, reverse_a, size);
    printf("Reversed (Indexing): ");
    for(int i=0; i<size; i++) printf("%d ", reverse_a[i]);

    // Test version B
    rev_arr_pointer(original, reverse_b, size);
    printf("\nReversed (Pointer):  ");
    for(int i=0; i<size; i++) printf("%d ", reverse_b[i]);
    printf("\n");

    return 0;
}

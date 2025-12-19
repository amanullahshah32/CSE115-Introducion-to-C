
#include <stdio.h>

// Function Prototypes
void rev_arr_index(int arr1[], int rev_arr1[], int size);
void rev_arr_pointer(int *arr1, int *rev_arr1, int size);

int main() {
    int original[5] = {10, 20, 30, 40, 50};
    int reversed[5]; // Empty array to store result
    int size = 5;
    int i;

    // --- TEST 1: Array Notation ---
    rev_arr_index(original, reversed, size);

    printf("Reversed (Array Notation): ");
    for(i = 0; i < size; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    // --- TEST 2: Pointer Notation ---
    // Reset reversed array to 0 just to be sure
    for(i = 0; i < size; i++) reversed[i] = 0;

    rev_arr_pointer(original, reversed, size);

    printf("Reversed (Pointer Notation): ");
    for(i = 0; i < size; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}

// a) Array Notation Implementation
void rev_arr_index(int arr1[], int rev_arr1[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        // Take element from the end of arr1
        // And put it at the start of rev_arr1
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

// b) Pointer Notation Implementation
void rev_arr_pointer(int *arr1, int *rev_arr1, int size) {
    int i;
    for(i = 0; i < size; i++) {
        // LOGIC:
        // *(rev_arr1 + i)  --> The box at index i in destination
        // *(arr1 + (size - 1 - i)) --> The box at the calculated mirror index in source

        *(rev_arr1 + i) = *(arr1 + (size - 1 - i));
    }
}

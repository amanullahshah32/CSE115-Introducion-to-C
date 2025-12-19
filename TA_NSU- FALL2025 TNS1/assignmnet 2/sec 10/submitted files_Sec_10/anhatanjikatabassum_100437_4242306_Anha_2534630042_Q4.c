#include <stdio.h>

// Function to reverse array elements
void rev_(int arr1[], int rev_arr1[], int size) {
    for (int i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr1[size], rev_arr1[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    rev_(arr1, rev_arr1, size);

    printf("Reversed array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", rev_arr1[i]);
    }
    printf("\n");

    return 0;
}

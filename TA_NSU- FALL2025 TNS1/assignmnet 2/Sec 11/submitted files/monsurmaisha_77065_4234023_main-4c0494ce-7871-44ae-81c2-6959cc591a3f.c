//answer 4
#include <stdio.h>
#include <stdlib.h>

// (a) reverse using array notation
void rev_arr(int arr1[], int rev_arr1[], int size) {
    for(int i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}

// (b) reverse using pointers
void rev_arr_ptr(int *arr1, int *rev_arr1, int size) {
    for(int i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main() {
    int arr[100], rev1[100], rev2[100];
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);


    rev_arr(arr, rev1, n);

    rev_arr_ptr(arr, rev2, n);

    printf("\nReverse using array version:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", rev1[i]);

    printf("\nReverse using pointer version:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", rev2[i]);

    return 0;
}

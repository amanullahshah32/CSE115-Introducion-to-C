#include <stdio.h>
#include <stdlib.h>

// Version a: Using array notation
void rev_arr_a(int arr1[],int rev_arr1[],int size){
    for(int i=0;i<size;i++){
        rev_arr1[i] = arr1[size -1-i];
    }
}

// Version b: Using pointer notation
void rev_arr_b(int *arr1, int *rev_arr1, int size) {
    for(int i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main() {
    int arr[]={1,2,3,4,5};
    int rev_arr[5];
    int size=5;

    // Test version a
    rev_arr_a(arr, rev_arr, size);

    printf("Original array: ");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }

    printf("\nReversed array (method a): ");
    for(int i=0;i<size;i++) {
        printf("%d ",rev_arr[i]);
    }

    // Test version b
    int rev_arr2[5];
    rev_arr_b(arr, rev_arr2, size);

    printf("\nReversed array (method b): ");
    for(int i=0;i< size; i++) {
        printf("%d ", rev_arr2[i]);
    }

    return 0;
}

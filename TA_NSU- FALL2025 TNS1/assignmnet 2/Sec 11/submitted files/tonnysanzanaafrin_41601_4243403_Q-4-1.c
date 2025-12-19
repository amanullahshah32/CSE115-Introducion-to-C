//Sanzana Afrin Tonny
//2231370042
//section 11

#include <stdio.h>


void rev_arr_index(int arr1[], int rev_arr1[], int size) {
    for (int i = 0; i < size; i++) {
        rev_arr1[i] = arr1[size - 1 - i];
    }
}


void rev_arr_ptr(int *arr1, int *rev_arr1, int size) {
    for (int i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main() {
    int arr[] = {67,90,3,24,21};
    int rev[5];

    rev_arr_ptr(arr, rev, 5);

    printf("Reversed array: ");
    for(int i=0; i<5; i++) printf("%d ", rev[i]);

}

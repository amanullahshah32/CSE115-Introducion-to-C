#include <stdio.h>
#include <stdlib.h>

/*
4) Write code for a function that uses an array to store the elements of another array in reverse
order. Use the following function prototype:
b)void rev_arr(int *arr1, int *rev_arr1, int size);
*/

void rev_arr(int *arr1, int *rev_arr1, int size) {
    for (int i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size = 5;
    int rev_arr1[5];

    rev_arr(arr1, rev_arr1, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(rev_arr1 + i));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
2)Write a code to arrange elements of array in ascending order (use pointers).
*/

void sortAscending(int *p, int size) {
    int temp;

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(*(p + j) > *(p + j + 1)) {

                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int size = 5;

    sortAscending(arr, size);

    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

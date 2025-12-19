#include <stdio.h>

int main() {
    int arr[] = {5, 8, 3, 12, 7};
    int size = 5;

    // Sorting using pointers
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(*(arr + i) > *(arr + j)) {
                // Swap
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}

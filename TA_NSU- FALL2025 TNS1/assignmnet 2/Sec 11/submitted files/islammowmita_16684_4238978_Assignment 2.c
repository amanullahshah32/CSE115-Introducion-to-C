#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 3};
    int size = 5;
    int *p = arr, temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(p + i));

    return 0;
}

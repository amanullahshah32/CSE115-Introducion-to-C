#include <stdio.h>

void sortAscending(int *p, int size) {
    int i, j, temp;
    for(i = 0; i < size - 1; i++) {
        for(j = i + 1; j < size; j++) {
            if(*(p + j) < *(p + i)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}
int main() {
    int arr[] = {34, 12, 5, 66, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortAscending(arr, size);
    printf("Array in ascending order: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

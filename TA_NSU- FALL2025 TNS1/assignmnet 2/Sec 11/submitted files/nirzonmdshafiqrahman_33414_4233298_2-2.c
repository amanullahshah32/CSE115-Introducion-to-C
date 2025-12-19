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
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d numbers:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sortAscending(arr, size);
    printf("Array in ascending order:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

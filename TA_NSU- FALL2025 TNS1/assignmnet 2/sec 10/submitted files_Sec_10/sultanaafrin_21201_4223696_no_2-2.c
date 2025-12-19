#include <stdio.h>

void ascending_sort(int *p, int size) {
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {50, 10, 40, 20, 30};
    int size = 5;

    ascending_sort(arr, size);

    printf("Sorted Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

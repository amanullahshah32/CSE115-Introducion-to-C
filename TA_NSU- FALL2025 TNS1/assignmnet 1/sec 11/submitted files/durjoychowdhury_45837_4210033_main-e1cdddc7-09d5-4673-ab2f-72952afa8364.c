#include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize) {
    int last = arr1[arrSize - 1];
    for (int i = arrSize - 1; i > 0; i--) {
        arr1[i] = arr1[i - 1];
    }
    arr1[0] = last;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    int temp[arrSize];
    int j = 0;


    printf("From index %d Position, array elements are: ", rotFrom);
    for (int i = rotFrom; i < arrSize; i++) {
        temp[j++] = arr1[i];
        printf("%d ", arr1[i]);
    }
    printf("\n");


    printf("Array elements prior to index %d: ", rotFrom);
    for (int i = 0; i < rotFrom; i++) {
        temp[j++] = arr1[i];
        printf("%d ", arr1[i]);
    }
    printf("\n");


    for (int i = 0; i < arrSize; i++)
        arr1[i] = temp[i];
}

int main() {
    int arr1[] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
    int arrSize = sizeof(arr1) / sizeof(arr1[0]);
    int rotFrom = 4;

    arr1Rotate(arr1, arrSize, rotFrom);

    printf("After rotating from index %d, the array is: ", rotFrom);
    for (int i = 0; i < arrSize; i++)
        printf("%d ", arr1[i]);

    return 0;
}


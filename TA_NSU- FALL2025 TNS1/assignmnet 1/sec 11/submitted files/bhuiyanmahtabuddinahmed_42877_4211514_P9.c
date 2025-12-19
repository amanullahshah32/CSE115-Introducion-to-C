#include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize) {
    int last = arr1[arrSize - 1];
    for(int i = arrSize - 1; i > 0; i--) {
        arr1[i] = arr1[i - 1];
    }
    arr1[0] = last;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    int temp[200];
    int idx = 0;


    for (int i = rotFrom; i < arrSize; i++) {
        temp[idx++] = arr1[i];
    }


    for (int i = 0; i < rotFrom; i++) {
        temp[idx++] = arr1[i];
    }

    for (int i = 0; i < arrSize; i++) {
        arr1[i] = temp[i];
    }
}

int main() {
    int arr[200];
    int n = 11;
    int rotIndex = 4;

    printf("Enter array elements\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("From index %d Position, array elements are ", rotIndex);
    for (int i = rotIndex; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nArray elements prior to index %d", rotIndex);
    for (int i = 0; i < rotIndex; i++) {
        printf("%d ", arr[i]);
    }


    arr1Rotate(arr, n, rotIndex);

    printf("After rotating from index %d, the array is ", rotIndex);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

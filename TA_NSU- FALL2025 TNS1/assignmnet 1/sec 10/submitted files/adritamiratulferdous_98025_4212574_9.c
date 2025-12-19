#include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize) {
    int first = arr1[0], i;

    for (i = 0; i < arrSize - 1; i++) {
        arr1[i] = arr1[i + 1];
    }

    arr1[arrSize - 1] = first;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    int i;

    for (i = 0; i < rotFrom; i++) {
        shiftArr1Pos(arr1, arrSize);
    }
}

int main()
 {
    int n, i, r;
 int arr[n];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &r);

    arr1Rotate(arr, n, r);

    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


#include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize) {
    int first = arr1[0];
    for (int i = 0; i < arrSize - 1; i++) {
        arr1[i] = arr1[i + 1];
    }
    arr1[arrSize - 1] = first;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    for (int i = 0; i < rotFrom; i++) {
        shiftArr1Pos(arr1, arrSize);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int rotFrom;
    printf("Enter rotation start index: ");
    scanf("%d", &rotFrom);

    printf("From index %d Position, array elements are: ", rotFrom);
    for (int i = rotFrom; i < n; i++) {
        if (i > rotFrom) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    printf("Array elements prior to index %d: ", rotFrom);
    for (int i = 0; i < rotFrom; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    arr1Rotate(arr, n, rotFrom);

    printf("After rotating from index %d, the array is: ", rotFrom);
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
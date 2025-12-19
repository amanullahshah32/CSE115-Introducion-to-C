#include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize) {
    int i, first = arr1[0];
    for (i = 0; i < arrSize - 1; i++) {
        arr1[i] = arr1[i + 1];
    }
    arr1[arrSize - 1] = first;  // left rotation by 1 position
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    int i;
    rotFrom = rotFrom % arrSize;
    for (i = 0; i < rotFrom; i++) {
        shiftArr1Pos(arr1, arrSize);
    }
}

int main() {
    int arr[100];
    int n, i, N;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter N (number of positions to rotate): ");
    scanf("%d", &N);
    printf("\nFrom index %d Position, array elements are: ", N);
    for(int i=N; i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\nArray elements prior to index %d: ", N);
    for(int i=0; i<N; i++){
        printf("%d ", arr[i]);
    }

    arr1Rotate(arr, n, N);

    printf("\nAfter rotating from index %d, the array is: ", N);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

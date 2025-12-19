#include <stdio.h>


void shiftArr1Pos(int arr1[], int arrSize) {
    int temp = arr1[0];

    for(int i = 0; i < arrSize - 1; i++)
        arr1[i] = arr1[i + 1];

    arr1[arrSize - 1] = temp;
}


void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    rotFrom = rotFrom % arrSize;   // To avoid extra rotations

    for(int i = 0; i < rotFrom; i++)
        shiftArr1Pos(arr1, arrSize);
}

int main() {
    int n, rot;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &rot);

    arr1Rotate(arr, n, rot);

    printf("Array after rotation:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

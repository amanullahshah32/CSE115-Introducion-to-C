#include <stdio.h>
#include <stdlib.h>

    /*
Write a C program to rotate an array by N positions (N to be given by user). Function
prototype: void shiftArr1Pos (int arr1[], int arrSize); void arr1Rotate (int arr1[], int
arrSize, int rotFrom)
    */

 void shiftArr1Pos(int arr[], int size) {
    int last = arr[size - 1];

    for(int i = size - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
}

void arr1Rotate(int arr[], int size, int rotFrom) {
    for(int i = 0; i < rotFrom; i++){
        shiftArr1Pos(arr, size);
    }
}

int main() {
    int n, arr[100], rot;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Rotate by N positions: ");
    scanf("%d", &rot);

    arr1Rotate(arr, n, rot);

    printf("Rotated array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

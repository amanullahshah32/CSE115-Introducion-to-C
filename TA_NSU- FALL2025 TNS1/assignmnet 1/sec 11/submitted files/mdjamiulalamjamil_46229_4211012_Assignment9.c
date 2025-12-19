#include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize) {
    int temp = arr1[0];
    for(int i = 0; i < arrSize-1; i++) {
        arr1[i] = arr1[i+1];
    }
    arr1[arrSize-1] = temp;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    for(int i = 0; i < rotFrom; i++) {
        shiftArr1Pos(arr1, arrSize);
    }
}

int main() {
    int arr[100], n, rotateFrom;

    printf("Enter array elements (end with -1): ");
    n = 0;
    while(1) {
        scanf("%d", &arr[n]);
        if(arr[n] == -1) break;
        n++;
    }

    printf("Enter position to rotate from: ");
    scanf("%d", &rotateFrom);

    printf("From index %d Position, array elements are: ", rotateFrom);
    for(int i = rotateFrom; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nArray elements prior to index %d: ", rotateFrom);
    for(int i = 0; i < rotateFrom; i++) {
        printf("%d ", arr[i]);
    }

    arr1Rotate(arr, n, rotateFrom);

    printf("\nAfter rotating from index %d, the array is: ", rotateFrom);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

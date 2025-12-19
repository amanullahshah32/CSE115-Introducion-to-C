#include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize) {
    int temp = arr1[0];
    for(int i = 0; i < arrSize - 1; i++)
        arr1[i] = arr1[i + 1];
    arr1[arrSize - 1] = temp;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    int temp[100];
    int j = 0;


    for(int i = rotFrom; i < arrSize; i++)
        temp[j++] = arr1[i];


    for(int i = 0; i < rotFrom; i++)
        temp[j++] = arr1[i];


    for(int i = 0; i < arrSize; i++)
        arr1[i] = temp[i];
}

int main() {
    int arr[100], n, rotFrom;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter rotation starting index: ");
    scanf("%d", &rotFrom);

    printf("\nFrom index %d position, array elements are: ", rotFrom);
    for(int i = rotFrom; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nArray elements prior to index %d: ", rotFrom);
    for(int i = 0; i < rotFrom; i++)
        printf("%d ", arr[i]);

    arr1Rotate(arr, n, rotFrom);

    printf("\nAfter rotating from index %d, \n the array is: ", rotFrom);
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}


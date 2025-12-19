#include <stdio.h>
#include <stdlib.h>

void shiftArr1Pos(int arr1[], int arrSize) {
    int temp = arr1[0];
    for(int i=0; i<arrSize-1; i++)
        arr1[i] = arr1[i+1];
    arr1[arrSize-1] = temp;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    for(int i=0; i<rotFrom; i++)
        shiftArr1Pos(arr1, arrSize);
}

int main() {
    int n, rot;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter rotation number: ");
    scanf("%d", &rot);

    arr1Rotate(arr, n, rot);

    printf("Rotated array: ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);


    return 0;
}

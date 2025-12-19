
//Sanzana Afrin Tonny
//2231370042


#include <stdio.h>
void shiftArr1Pos(int arr1[], int arrSize);
void arr1Rotate(int arr1[], int arrSize, int rotFrom);

int main() {
    int n, r;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d", &r);
    printf("\nOriginal Array: ");
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
    arr1Rotate(arr, n, r);
    printf("\nRotated Array:  ");
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
return 0;
}

void shiftArr1Pos(int arr1[], int arrSize) {
    if (arrSize <= 0) return;
    int temp = arr1[0];
    for (int i = 0; i < arrSize - 1; i++) {
        arr1[i] = arr1[i + 1];
    }
    arr1[arrSize - 1] = temp;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
     rotFrom = rotFrom % arrSize;
    for (int i = 0; i < rotFrom; i++) {
shiftArr1Pos(arr1, arrSize);
    }
}

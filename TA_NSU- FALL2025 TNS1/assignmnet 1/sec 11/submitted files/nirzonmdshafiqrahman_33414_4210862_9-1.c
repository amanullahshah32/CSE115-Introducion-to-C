#include <stdio.h>


void shiftArr1Pos(int arr1[], int arrSize) {
    int temp = arr1[0];

  
    for (int i = 0; i < arrSize - 1; i++) {
        arr1[i] = arr1[i + 1];
    }

    arr1[arrSize - 1] = temp;  
}


void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    for (int i = 0; i < rotFrom; i++) {
        shiftArr1Pos(arr1, arrSize);
    }
}

int main() {
    int n, rot, arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter number of positions to rotate: ");
    scanf("%d", &rot);

   
    rot = rot % n;   
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    arr1Rotate(arr, n, rot);
    printf("\nRotated array:  ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

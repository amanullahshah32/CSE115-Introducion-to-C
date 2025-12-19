#include <stdio.h>

void shiftArr1Pos(int arr[], int arrSize) {
    int i, temp;
    temp = arr[0];

    for(i = 0; i < arrSize - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[arrSize - 1] = temp;
}

void arr1Rotate(int arr[], int arrSize, int rotfrom) {
    int i;
    for(i = 0; i < rotfrom; i++) {
        shiftArr1Pos(arr, arrSize);
    }
}

int main() {
    int arr[100];
    int n, i, rotfrom;

    printf("Enter array elements (count): ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Rotate from index: ");
    scanf("%d", &rotfrom);

    printf("Elements prior to index %d: ", rotfrom);
    for(i = 0; i < rotfrom; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    arr1Rotate(arr, n, rotfrom);

    printf("After rotating from index %d, the array is: ", rotfrom);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

